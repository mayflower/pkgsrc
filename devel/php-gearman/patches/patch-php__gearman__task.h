$NetBSD$

--- php_gearman_task.h.orig	2019-09-05 13:42:09.000000000 +0000
+++ php_gearman_task.h
@@ -61,8 +61,9 @@ gearman_return_t _php_task_complete_fn(g
 gearman_return_t _php_task_exception_fn(gearman_task_st *task);
 gearman_return_t _php_task_fail_fn(gearman_task_st *task);
 
+void gearman_task_free_obj(zend_object *object);
+
 PHP_METHOD(GearmanTask, __construct);
-PHP_METHOD(GearmanTask, __destruct);
 PHP_FUNCTION(gearman_task_return_code);
 PHP_FUNCTION(gearman_task_function_name);
 PHP_FUNCTION(gearman_task_unique);
