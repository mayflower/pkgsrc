--- utils.c.orig
+++ utils.c
@@ -791,8 +791,14 @@ char *encode_cram_md5(char *challenge,char *user,char *secret)
     unsigned char
         hmac_md5[16];
 
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
     HMAC_CTX
         ctx;
+#else
+    /* OpenSSL 1.1.x*/
+    HMAC_CTX
+        *ctx;
+#endif
 
     const EVP_MD
         *md5=NULL;
@@ -831,11 +837,20 @@ char *encode_cram_md5(char *challenge,char *user,char *secret)
     showVerbose("Challenge After decoding: %s\n",data);
 
     /* take HMAC-MD5 of the challenge*/
+
+#if OPENSSL_VERSION_NUMBER < 0x10100000L
     md5=EVP_get_digestbyname("md5");
     HMAC_CTX_init(&ctx);
     HMAC_Init(&ctx,secret,strlen(secret),md5);
     HMAC_Update(&ctx,data,data_len);
     HMAC_Final(&ctx,hmac_md5,&hmac_len);
+#else
+    /* OpenSSL 1.1.x */
+    ctx = HMAC_CTX_new();
+    HMAC_Init_ex(ctx,secret,strlen(secret),EVP_md5(),NULL);
+    HMAC_Update(ctx,data,data_len);
+    HMAC_Final(ctx,hmac_md5,&hmac_len);
+#endif
 
     /* convert the digest to hex */
     memset(hex,0,sizeof(hex));
