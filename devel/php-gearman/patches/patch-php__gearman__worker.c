$NetBSD$

--- php_gearman_worker.c.orig	2019-09-05 13:42:09.000000000 +0000
+++ php_gearman_worker.c
@@ -57,10 +57,8 @@ PHP_METHOD(GearmanWorker, __construct) {
 }
 /* }}} */
 
-/* {{{ proto object GearmanWorker::__destruct()
-   Destroys a worker object */
-PHP_METHOD(GearmanWorker, __destruct) {
-	gearman_worker_obj *intern = Z_GEARMAN_WORKER_P(getThis());
+void gearman_worker_free_obj(zend_object *object) {
+    gearman_worker_obj *intern = gearman_worker_fetch_object(object);
 
 	if (!intern)  {
 		return;
