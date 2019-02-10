$NetBSD$

Pull in ${PREFIX}/lib by default and handle for multiarch.

--- gcc/config/sol2.h.orig	2017-11-21 09:31:12.000000000 +0000
+++ gcc/config/sol2.h
@@ -170,8 +170,15 @@ along with GCC; see the file COPYING3.  
 #define SUPPORTS_INIT_PRIORITY HAVE_INITFINI_ARRAY_SUPPORT
 
 #undef STARTFILE_ARCH_SPEC
-#define STARTFILE_ARCH_SPEC "%{ansi:values-Xc.o%s} \
-			    %{!ansi:values-Xa.o%s}"
+#define STARTFILE_ARCH_SPEC \
+  "%{std=c17|std=c18|std=gnu17|std=gnu18:values-Xc.o%s values-xpg6.o%s; \
+     std=c11|std=c1x|std=gnu11|std=gnu1x:values-Xc.o%s values-xpg6.o%s; \
+     std=c99|std=c9x|std=gnu99|std=gnu9x:values-Xc.o%s values-xpg6.o%s; \
+     std=c++17|std=c++1z|std=gnu++17|std=gnu++1z:values-Xc.o%s; \
+     std=c++14|std=c++1y|std=gnu++14|std=gnu++1y:values-Xc.o%s; \
+     std=c++11|std=c++0x|std=gnu++11|std=gnu++0x:values-Xc.o%s; \
+     std=c++98|std=c++03|std=gnu++98|std=gnu++03:values-Xc.o%s; \
+     :values-Xa.o%s}"
 
 #if defined(HAVE_LD_PIE) && defined(HAVE_SOLARIS_CRTS)
 #define STARTFILE_CRTBEGIN_SPEC "%{static:crtbegin.o%s; \
@@ -241,8 +248,9 @@ along with GCC; see the file COPYING3.  
   "%{G:-G} \
    %{YP,*} \
    %{R*} \
-   %{!YP,*:%{p|pg:-Y P,%R/usr/lib/libp%R/lib:%R/usr/lib} \
-	   %{!p:%{!pg:-Y P,%R/lib:%R/usr/lib}}}"
+   -R@PREFIX@/lib \
+   %{!YP,*:%{p|pg:-Y P,%R/lib:%R/usr/lib:%R@PREFIX@/lib} \
+	   %{!p:%{!pg:-Y P,%R/lib:%R/usr/lib:%R@PREFIX@/lib}}}"
 
 #undef LINK_ARCH32_SPEC
 #define LINK_ARCH32_SPEC LINK_ARCH32_SPEC_BASE
@@ -254,8 +262,9 @@ along with GCC; see the file COPYING3.  
   "%{G:-G} \
    %{YP,*} \
    %{R*} \
-   %{!YP,*:%{p|pg:-Y P,%R/usr/lib/libp/" ARCH64_SUBDIR ":%R/lib/" ARCH64_SUBDIR ":%R/usr/lib/" ARCH64_SUBDIR "}	\
-	   %{!p:%{!pg:-Y P,%R/lib/" ARCH64_SUBDIR ":%R/usr/lib/" ARCH64_SUBDIR "}}}"
+   -R@PREFIX@/lib/" @MARCH64_SUBDIR@ " \
+   %{!YP,*:%{p|pg:-Y P,%R/lib/" ARCH64_SUBDIR ":%R/usr/lib/" ARCH64_SUBDIR ":%R@PREFIX@/lib/" @MARCH64_SUBDIR@ "} \
+	   %{!p:%{!pg:-Y P,%R/lib/" ARCH64_SUBDIR ":%R/usr/lib/" ARCH64_SUBDIR ":%R@PREFIX@/lib/" @MARCH64_SUBDIR@ "}}}"
 
 #undef LINK_ARCH64_SPEC
 #ifndef USE_GLD
