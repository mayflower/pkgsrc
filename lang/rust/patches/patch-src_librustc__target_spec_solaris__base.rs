$NetBSD$

Test jbk patch.

--- src/librustc_target/spec/solaris_base.rs.orig	2019-01-16 09:30:27.000000000 +0000
+++ src/librustc_target/spec/solaris_base.rs
@@ -18,6 +18,7 @@ pub fn opts() -> TargetOptions {
         has_rpath: true,
         target_family: Some("unix".to_string()),
         is_like_solaris: true,
+        eliminate_frame_pointer: false,
 
         .. Default::default()
     }
