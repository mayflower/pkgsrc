$NetBSD$

--- php_gearman_client.h.orig	2019-09-05 13:42:09.000000000 +0000
+++ php_gearman_client.h
@@ -72,9 +72,10 @@ gearman_client_obj *gearman_client_fetch
 					  (__ret) == GEARMAN_WORK_WARNING || \
 					  (__ret) == GEARMAN_WORK_FAIL)
 
+void gearman_client_free_obj(zend_object *object);
+
 PHP_FUNCTION(gearman_client_create);
 PHP_METHOD(GearmanClient, __construct);
-PHP_METHOD(GearmanClient, __destruct);
 PHP_FUNCTION(gearman_client_return_code);
 PHP_FUNCTION(gearman_client_error);
 PHP_FUNCTION(gearman_client_get_errno);
