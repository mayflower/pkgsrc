$NetBSD$

--- doc/examples/tlsproxy/crypto-gnutls.c.orig	2018-10-03 20:21:52.080413002 +0000
+++ doc/examples/tlsproxy/crypto-gnutls.c
@@ -49,7 +49,7 @@ OTHER DEALINGS IN THE SOFTWARE.
 #define FALSE 0
 #define TRUE 1
 
-typedef struct tlssession
+struct tlssession
 {
   gnutls_certificate_credentials_t creds;
   gnutls_session_t session;
@@ -58,7 +58,7 @@ typedef struct tlssession
   int (*erroutfn) (void *opaque, const char *format, va_list ap);
   int debug;
   void *opaque;
-} tlssession_t;
+};
 
 #define BUF_SIZE 65536
 #define BUF_HWM ((BUF_SIZE*3)/4)
