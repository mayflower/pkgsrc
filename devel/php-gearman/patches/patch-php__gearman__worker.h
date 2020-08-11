$NetBSD$

--- php_gearman_worker.h.orig	2019-09-05 13:42:09.000000000 +0000
+++ php_gearman_worker.h
@@ -54,9 +54,10 @@ typedef struct {
 gearman_worker_obj *gearman_worker_fetch_object(zend_object *obj);
 #define Z_GEARMAN_WORKER_P(zv) gearman_worker_fetch_object(Z_OBJ_P((zv)))
 
+void gearman_worker_free_obj(zend_object *object);
+
 PHP_FUNCTION(gearman_worker_create);
 PHP_METHOD(GearmanWorker, __construct);
-PHP_METHOD(GearmanWorker, __destruct);
 PHP_FUNCTION(gearman_worker_return_code);
 PHP_FUNCTION(gearman_worker_error);
 PHP_FUNCTION(gearman_worker_errno);
