$NetBSD$

--- php_gearman.c.orig	2019-09-05 13:42:09.000000000 +0000
+++ php_gearman.c
@@ -1184,28 +1184,24 @@ PHP_MINIT_FUNCTION(gearman) {
 	gearman_client_ce->create_object = gearman_client_obj_new;
 	memcpy(&gearman_client_obj_handlers, zend_get_std_object_handlers(), sizeof(gearman_client_obj_handlers));
 	gearman_client_obj_handlers.offset = XtOffsetOf(gearman_client_obj, std);
-	gearman_client_obj_handlers.free_obj = NULL;
 
 	INIT_CLASS_ENTRY(ce, "GearmanTask", gearman_task_methods);
 	gearman_task_ce = zend_register_internal_class(&ce);
 	gearman_task_ce->create_object = gearman_task_obj_new;
 	memcpy(&gearman_task_obj_handlers, zend_get_std_object_handlers(), sizeof(gearman_task_obj_handlers));
 	gearman_task_obj_handlers.offset = XtOffsetOf(gearman_task_obj, std);
-	gearman_task_obj_handlers.free_obj = NULL;
 
 	INIT_CLASS_ENTRY(ce, "GearmanWorker", gearman_worker_methods);
 	gearman_worker_ce = zend_register_internal_class(&ce);
 	gearman_worker_ce->create_object = gearman_worker_obj_new;
 	memcpy(&gearman_worker_obj_handlers, zend_get_std_object_handlers(), sizeof(gearman_worker_obj_handlers));
 	gearman_worker_obj_handlers.offset = XtOffsetOf(gearman_worker_obj, std);
-	gearman_worker_obj_handlers.free_obj = NULL;
 
 	INIT_CLASS_ENTRY(ce, "GearmanJob", gearman_job_methods);
 	gearman_job_ce = zend_register_internal_class(&ce);
 	gearman_job_ce->create_object = gearman_job_obj_new;
 	memcpy(&gearman_job_obj_handlers, zend_get_std_object_handlers(), sizeof(gearman_job_obj_handlers));
 	gearman_job_obj_handlers.offset = XtOffsetOf(gearman_job_obj, std);
-	gearman_job_obj_handlers.free_obj = NULL;
 
 	/* XXX exception class */
 	INIT_CLASS_ENTRY(ce, "GearmanException", gearman_exception_methods)
