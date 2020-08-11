$NetBSD$

--- tests/gearman_task_006.phpt.orig	2020-08-11 21:46:29.046122087 +0000
+++ tests/gearman_task_006.phpt
@@ -0,0 +1,21 @@
+--TEST--
+unserialize(serialize(GearmanTask))
+--SKIPIF--
+<?php if (!extension_loaded("gearman")) print "skip"; ?>
+--FILE--
+<?php
+
+$i = 0;
+while ($i <= 5) {
+    echo $i;
+    $client = new GearmanTask();
+    unserialize(serialize($client));
+    $i++;
+}
+print PHP_EOL;
+
+print "OK";
+?>
+--EXPECT--
+012345
+OK
