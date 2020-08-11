$NetBSD$

--- php_gearman_job.h.orig	2019-09-05 13:42:09.000000000 +0000
+++ php_gearman_job.h
@@ -45,7 +45,8 @@ typedef struct {
 gearman_job_obj *gearman_job_fetch_object(zend_object *obj);
 #define Z_GEARMAN_JOB_P(zv) gearman_job_fetch_object(Z_OBJ_P((zv)))
 
-PHP_METHOD(GearmanJob, __destruct);
+void gearman_job_free_obj(zend_object *object);
+
 PHP_FUNCTION(gearman_job_return_code);
 PHP_FUNCTION(gearman_job_set_return);
 PHP_FUNCTION(gearman_job_send_data);
