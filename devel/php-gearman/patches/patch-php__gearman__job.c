$NetBSD$

--- php_gearman_job.c.orig	2019-09-05 13:42:09.000000000 +0000
+++ php_gearman_job.c
@@ -15,21 +15,6 @@ gearman_job_obj *gearman_job_fetch_objec
         return (gearman_job_obj *)((char*)(obj) - XtOffsetOf(gearman_job_obj, std));
 }
 
-/* {{{ proto object GearmanJob::__destruct()
-   cleans up GearmanJob object */
-PHP_METHOD(GearmanJob, __destruct) {
-        gearman_job_obj *intern = Z_GEARMAN_JOB_P(getThis());
-        if (!intern) {
-                return;
-        }    
-
-        if (intern->flags & GEARMAN_JOB_OBJ_CREATED) {
-                gearman_job_free(intern->job);
-        }    
-
-        zend_object_std_dtor(&intern->std);
-}
-
 zend_object *gearman_job_obj_new(zend_class_entry *ce) {
         gearman_job_obj *intern = ecalloc(1,
                 sizeof(gearman_job_obj) +
@@ -42,6 +27,21 @@ zend_object *gearman_job_obj_new(zend_cl
         return &intern->std;
 }
 
+/* {{{ gearman_job_free_obj */
+void gearman_job_free_obj(zend_object *object) {
+        gearman_job_obj *intern = gearman_job_fetch_object(object);
+        if (!intern) {
+                return;
+        }
+
+        if (intern->flags & GEARMAN_JOB_OBJ_CREATED) {
+                gearman_job_free(intern->job);
+        }
+
+        zend_object_std_dtor(&intern->std);
+}
+/* }}} */
+
 /* {{{ proto int gearman_job_return_code()
    get last gearman_return_t */
 PHP_FUNCTION(gearman_job_return_code) {
