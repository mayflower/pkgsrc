$NetBSD$

--- php_gearman.c.orig	2019-09-05 13:42:09.000000000 +0000
+++ php_gearman.c
@@ -1060,7 +1060,6 @@ zend_function_entry gearman_methods[]= {
 
 static zend_function_entry gearman_client_methods[]= {
 	PHP_ME(GearmanClient, __construct, arginfo_gearman_client_construct, ZEND_ACC_CTOR | ZEND_ACC_PUBLIC)
-	PHP_ME(GearmanClient, __destruct, arginfo_oo_gearman_client_destruct, ZEND_ACC_DTOR | ZEND_ACC_PUBLIC)
 	PHP_ME_MAPPING(returnCode, gearman_client_return_code, arginfo_oo_gearman_client_return_code, ZEND_ACC_PUBLIC)
 	PHP_ME_MAPPING(error, gearman_client_error, arginfo_oo_gearman_client_error, ZEND_ACC_PUBLIC)
 	PHP_ME_MAPPING(getErrno, gearman_client_get_errno, arginfo_oo_gearman_client_get_errno, ZEND_ACC_PUBLIC)
@@ -1112,7 +1111,6 @@ static zend_function_entry gearman_clien
 
 zend_function_entry gearman_task_methods[]= {
 	PHP_ME(GearmanTask, __construct, arginfo_oo_gearman_task_construct, ZEND_ACC_CTOR | ZEND_ACC_PUBLIC)
-	PHP_ME(GearmanTask, __destruct, arginfo_oo_gearman_task_destruct, ZEND_ACC_DTOR | ZEND_ACC_PUBLIC)
 	PHP_ME_MAPPING(returnCode, gearman_task_return_code, arginfo_oo_gearman_task_return_code, ZEND_ACC_PUBLIC)
 	PHP_ME_MAPPING(functionName, gearman_task_function_name, arginfo_oo_gearman_task_function_name, ZEND_ACC_PUBLIC)
 	PHP_ME_MAPPING(unique, gearman_task_unique, arginfo_oo_gearman_task_unique, ZEND_ACC_PUBLIC)
@@ -1130,7 +1128,6 @@ zend_function_entry gearman_task_methods
 
 zend_function_entry gearman_worker_methods[]= {
 	PHP_ME(GearmanWorker, __construct, arginfo_oo_gearman_worker_construct, ZEND_ACC_CTOR | ZEND_ACC_PUBLIC)
-	PHP_ME(GearmanWorker, __destruct, arginfo_oo_gearman_worker_destruct, ZEND_ACC_DTOR | ZEND_ACC_PUBLIC)
 	PHP_ME_MAPPING(returnCode, gearman_worker_return_code, arginfo_oo_gearman_worker_return_code, ZEND_ACC_PUBLIC)
 	PHP_ME_MAPPING(error, gearman_worker_error, arginfo_oo_gearman_worker_error, ZEND_ACC_PUBLIC)
 	PHP_ME_MAPPING(getErrno, gearman_worker_errno, arginfo_oo_gearman_worker_errno, ZEND_ACC_PUBLIC)
@@ -1155,7 +1152,6 @@ zend_function_entry gearman_worker_metho
 };
 
 zend_function_entry gearman_job_methods[]= {
-	PHP_ME(GearmanJob, __destruct, arginfo_oo_gearman_job_destruct, ZEND_ACC_DTOR | ZEND_ACC_PUBLIC)
 	PHP_ME_MAPPING(returnCode, gearman_job_return_code, arginfo_oo_gearman_job_return_code, ZEND_ACC_PUBLIC)
 	PHP_ME_MAPPING(setReturn, gearman_job_set_return, arginfo_oo_gearman_job_set_return, ZEND_ACC_PUBLIC)
 	PHP_ME_MAPPING(sendData, gearman_job_send_data, arginfo_oo_gearman_job_send_data, ZEND_ACC_PUBLIC)
@@ -1184,28 +1180,28 @@ PHP_MINIT_FUNCTION(gearman) {
 	gearman_client_ce->create_object = gearman_client_obj_new;
 	memcpy(&gearman_client_obj_handlers, zend_get_std_object_handlers(), sizeof(gearman_client_obj_handlers));
 	gearman_client_obj_handlers.offset = XtOffsetOf(gearman_client_obj, std);
-	gearman_client_obj_handlers.free_obj = NULL;
+	gearman_client_obj_handlers.free_obj = gearman_client_free_obj;
 
 	INIT_CLASS_ENTRY(ce, "GearmanTask", gearman_task_methods);
 	gearman_task_ce = zend_register_internal_class(&ce);
 	gearman_task_ce->create_object = gearman_task_obj_new;
 	memcpy(&gearman_task_obj_handlers, zend_get_std_object_handlers(), sizeof(gearman_task_obj_handlers));
 	gearman_task_obj_handlers.offset = XtOffsetOf(gearman_task_obj, std);
-	gearman_task_obj_handlers.free_obj = NULL;
+	gearman_task_obj_handlers.free_obj = gearman_task_free_obj;
 
 	INIT_CLASS_ENTRY(ce, "GearmanWorker", gearman_worker_methods);
 	gearman_worker_ce = zend_register_internal_class(&ce);
 	gearman_worker_ce->create_object = gearman_worker_obj_new;
 	memcpy(&gearman_worker_obj_handlers, zend_get_std_object_handlers(), sizeof(gearman_worker_obj_handlers));
 	gearman_worker_obj_handlers.offset = XtOffsetOf(gearman_worker_obj, std);
-	gearman_worker_obj_handlers.free_obj = NULL;
+	gearman_worker_obj_handlers.free_obj = gearman_worker_free_obj;
 
 	INIT_CLASS_ENTRY(ce, "GearmanJob", gearman_job_methods);
 	gearman_job_ce = zend_register_internal_class(&ce);
 	gearman_job_ce->create_object = gearman_job_obj_new;
 	memcpy(&gearman_job_obj_handlers, zend_get_std_object_handlers(), sizeof(gearman_job_obj_handlers));
 	gearman_job_obj_handlers.offset = XtOffsetOf(gearman_job_obj, std);
-	gearman_job_obj_handlers.free_obj = NULL;
+	gearman_job_obj_handlers.free_obj = gearman_job_free_obj;
 
 	/* XXX exception class */
 	INIT_CLASS_ENTRY(ce, "GearmanException", gearman_exception_methods)
