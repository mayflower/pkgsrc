$NetBSD$

--- php_gearman_task.c.orig	2019-09-05 13:42:09.000000000 +0000
+++ php_gearman_task.c
@@ -127,10 +127,8 @@ gearman_return_t _php_task_fail_fn(gearm
 PHP_METHOD(GearmanTask, __construct) {
 }
 
-/* {{{ proto object GearmanTask::__destruct()
-   Destroys a task object */
-PHP_METHOD(GearmanTask, __destruct) {
-        gearman_task_obj *intern = Z_GEARMAN_TASK_P(getThis());
+void gearman_task_free_obj(zend_object *object) {
+        gearman_task_obj *intern = gearman_task_fetch_object(object);
         if (!intern) {
                 return;
         }    
