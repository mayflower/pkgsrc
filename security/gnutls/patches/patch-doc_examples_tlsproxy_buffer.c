$NetBSD$

--- doc/examples/tlsproxy/buffer.c.orig	2018-10-03 20:21:42.432353711 +0000
+++ doc/examples/tlsproxy/buffer.c
@@ -29,7 +29,7 @@ OTHER DEALINGS IN THE SOFTWARE.
 
 #include "buffer.h"
 
-typedef struct buffer
+struct buffer
 {
   char *buf;
   ssize_t size;
@@ -37,7 +37,7 @@ typedef struct buffer
   ssize_t ridx;
   ssize_t widx;
   int empty;
-} buffer_t;
+};
 
 /* the buffer is organised internally as follows:
  *
