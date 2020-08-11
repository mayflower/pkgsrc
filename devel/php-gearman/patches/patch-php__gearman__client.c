$NetBSD$

--- php_gearman_client.c.orig	2019-09-05 13:42:09.000000000 +0000
+++ php_gearman_client.c
@@ -71,12 +71,9 @@ PHP_METHOD(GearmanClient, __construct)
 }
 /* }}} */
 
-/* {{{ proto object GearmanClient::__destruct()
-   cleans up GearmanClient object */
-PHP_METHOD(GearmanClient, __destruct)
-{
+void gearman_client_free_obj(zend_object *object) {
         char *context = NULL;
-        gearman_client_obj *intern = Z_GEARMAN_CLIENT_P(getThis());
+        gearman_client_obj *intern = gearman_client_fetch_object(object);
         if (!intern) {
                 return;
         }
