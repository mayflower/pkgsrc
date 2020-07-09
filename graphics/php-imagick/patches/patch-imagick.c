$NetBSD$

--- imagick.c.orig	2019-05-02 15:26:00.000000000 +0000
+++ imagick.c
@@ -2095,7 +2095,7 @@ static zend_function_entry php_imagickdr
 #if MagickLibVersion >= 0x700
 	PHP_ME(imagickdraw, alpha, imagickdraw_matte_args, ZEND_ACC_PUBLIC)
 #else
-	PHP_ME(imagickdraw, matte, imagickdraw_matte_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagickdraw, matte, imagickdraw_matte_args, ZEND_ACC_PUBLIC)
 #endif
 	PHP_ME(imagickdraw, polygon, imagickdraw_polygon_args, ZEND_ACC_PUBLIC)
 	PHP_ME(imagickdraw, point, imagickdraw_point_args, ZEND_ACC_PUBLIC)
@@ -2297,7 +2297,7 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, uniqueimagecolors, imagick_zero_args, ZEND_ACC_PUBLIC)
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, getimagematte, imagick_zero_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, getimagematte, imagick_zero_args, ZEND_ACC_PUBLIC)
 #endif // #if MagickLibVersion < 0x700
 #endif
 	PHP_ME(imagick, setimagematte, imagick_setimagematte_args, ZEND_ACC_PUBLIC)
@@ -2311,25 +2311,25 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, adaptivesharpenimage, imagick_adaptivesharpenimage_args, ZEND_ACC_PUBLIC)
 	PHP_ME(imagick, randomthresholdimage, imagick_randomthresholdimage_args, ZEND_ACC_PUBLIC)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, roundcornersimage, imagick_roundcornersimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, roundcornersimage, imagick_roundcornersimage_args, ZEND_ACC_PUBLIC)
 	/* This alias is due to BWC */
-	PHP_MALIAS(imagick, roundcorners, roundcornersimage, imagick_roundcornersimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_MALIAS(imagick, roundcorners, roundcornersimage, imagick_roundcornersimage_args, ZEND_ACC_PUBLIC)
 #endif
 	PHP_ME(imagick, setiteratorindex, imagick_setiteratorindex_args, ZEND_ACC_PUBLIC)
 	PHP_ME(imagick, getiteratorindex, imagick_zero_args, ZEND_ACC_PUBLIC)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, transformimage, imagick_transformimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, transformimage, imagick_transformimage_args, ZEND_ACC_PUBLIC)
 #endif // #if MagickLibVersion < 0x700
 #endif
 #if MagickLibVersion > 0x630
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, setimageopacity, imagick_setimageopacity_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, setimageopacity, imagick_setimageopacity_args, ZEND_ACC_PUBLIC)
 #endif
 #if MagickLibVersion >= 0x700
 	PHP_ME(imagick, setimagealpha, imagick_setimagealpha_args, ZEND_ACC_PUBLIC)
 #endif
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, orderedposterizeimage, imagick_orderedposterizeimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, orderedposterizeimage, imagick_orderedposterizeimage_args, ZEND_ACC_PUBLIC)
 #endif //#if MagickLibVersion < 0x700
 #endif //#if MagickLibVersion > 0x630
 #if MagickLibVersion > 0x631
@@ -2351,7 +2351,7 @@ static zend_function_entry php_imagick_c
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
 #if MagickLibVersion > 0x634
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, paintfloodfillimage, imagick_paintfloodfillimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, paintfloodfillimage, imagick_paintfloodfillimage_args, ZEND_ACC_PUBLIC)
 #endif // #if MagickLibVersion < 0x700
 #endif
 #endif
@@ -2364,13 +2364,13 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, writeimagesfile, imagick_writeimagesfile_args, ZEND_ACC_PUBLIC)
 	PHP_ME(imagick, resetimagepage, imagick_resetimagepage_args, ZEND_ACC_PUBLIC)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, setimageclipmask, imagick_setimageclipmask_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
-	PHP_ME(imagick, getimageclipmask, imagick_zero_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, setimageclipmask, imagick_setimageclipmask_args, ZEND_ACC_PUBLIC)
+	PHP_ME(imagick, getimageclipmask, imagick_zero_args, ZEND_ACC_PUBLIC)
 #endif
 	PHP_ME(imagick, animateimages, imagick_animateimages_args, ZEND_ACC_PUBLIC)
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, recolorimage, imagick_recolorimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, recolorimage, imagick_recolorimage_args, ZEND_ACC_PUBLIC)
 #endif
 #endif
 #endif
@@ -2469,7 +2469,7 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, clone, imagick_zero_args, ZEND_ACC_PUBLIC)
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, getimagesize, imagick_zero_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, getimagesize, imagick_zero_args, ZEND_ACC_PUBLIC)
 #endif // #if MagickLibVersion < 0x700
 #endif
 	PHP_ME(imagick, getimageblob, imagick_zero_args, ZEND_ACC_PUBLIC)
@@ -2483,8 +2483,8 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, hasnextimage, imagick_zero_args, ZEND_ACC_PUBLIC)
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, setimageindex, imagick_setimageindex_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
-	PHP_ME(imagick, getimageindex, imagick_zero_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, setimageindex, imagick_setimageindex_args, ZEND_ACC_PUBLIC)
+	PHP_ME(imagick, getimageindex, imagick_zero_args, ZEND_ACC_PUBLIC)
 #endif // #if MagickLibVersion < 0x700
 #endif
 	PHP_ME(imagick, commentimage, imagick_commentimage_args, ZEND_ACC_PUBLIC)
@@ -2513,7 +2513,7 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, posterizeimage, imagick_posterizeimage_args, ZEND_ACC_PUBLIC)
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, radialblurimage, imagick_radialblurimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, radialblurimage, imagick_radialblurimage_args, ZEND_ACC_PUBLIC)
 #endif
 #endif
 	PHP_ME(imagick, raiseimage, imagick_raiseimage_args, ZEND_ACC_PUBLIC)
@@ -2526,7 +2526,7 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, shadowimage, imagick_shadowimage_args, ZEND_ACC_PUBLIC)
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, setimageattribute, imagick_setimageattribute_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, setimageattribute, imagick_setimageattribute_args, ZEND_ACC_PUBLIC)
 #endif // #if MagickLibVersion < 0x700
 #endif
 	PHP_ME(imagick, setimagebackgroundcolor, imagick_setimagebackgroundcolor_args, ZEND_ACC_PUBLIC)
@@ -2539,7 +2539,7 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, setimagegamma, imagick_setimagegamma_args, ZEND_ACC_PUBLIC)
 	PHP_ME(imagick, setimageiterations, imagick_setimageiterations_args, ZEND_ACC_PUBLIC)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, setimagemattecolor, imagick_setimagemattecolor_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, setimagemattecolor, imagick_setimagemattecolor_args, ZEND_ACC_PUBLIC)
 #endif // #if MagickLibVersion < 0x700
 	PHP_ME(imagick, setimagepage, imagick_setimagepage_args, ZEND_ACC_PUBLIC)
 	PHP_ME(imagick, setimageprogressmonitor, imagick_setimageprogressmonitor_args, ZEND_ACC_PUBLIC)
@@ -2570,7 +2570,7 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, motionblurimage, imagick_motionblurimage_args, ZEND_ACC_PUBLIC)
 #if MagickLibVersion < 0x700
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
-	PHP_ME(imagick, mosaicimages, imagick_zero_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, mosaicimages, imagick_zero_args, ZEND_ACC_PUBLIC)
 #endif
 #endif
 	PHP_ME(imagick, morphimages, imagick_morphimages_args, ZEND_ACC_PUBLIC)
@@ -2578,7 +2578,7 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, affinetransformimage, imagick_affinetransformimage_args, ZEND_ACC_PUBLIC)
 #if MagickLibVersion < 0x700
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
-	PHP_ME(imagick, averageimages, imagick_zero_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, averageimages, imagick_zero_args, ZEND_ACC_PUBLIC)
 #endif
 #endif
 	PHP_ME(imagick, borderimage, imagick_borderimage_args, ZEND_ACC_PUBLIC)
@@ -2591,7 +2591,7 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, coalesceimages, imagick_zero_args, ZEND_ACC_PUBLIC)
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, colorfloodfillimage, imagick_colorfloodfillimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, colorfloodfillimage, imagick_colorfloodfillimage_args, ZEND_ACC_PUBLIC)
 #endif // #if MagickLibVersion < 0x700
 #endif
 	PHP_ME(imagick, colorizeimage, imagick_colorizeimage_args, ZEND_ACC_PUBLIC)
@@ -2613,7 +2613,7 @@ static zend_function_entry php_imagick_c
 #endif // MagickLibVersion >= 0x687
 #if MagickLibVersion < 0x700
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
-	PHP_ME(imagick, flattenimages, imagick_zero_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, flattenimages, imagick_zero_args, ZEND_ACC_PUBLIC)
 #endif
 #endif
 	PHP_ME(imagick, flipimage, imagick_zero_args, ZEND_ACC_PUBLIC)
@@ -2627,7 +2627,7 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, gaussianblurimage, imagick_gaussianblurimage_args, ZEND_ACC_PUBLIC)
 #if MagickLibVersion < 0x700
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
-	PHP_ME(imagick, getimageattribute, imagick_getimageattribute_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, getimageattribute, imagick_getimageattribute_args, ZEND_ACC_PUBLIC)
 #endif
 #endif
 	PHP_ME(imagick, getimagebackgroundcolor, imagick_zero_args, ZEND_ACC_PUBLIC)
@@ -2637,7 +2637,7 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, getimagechanneldistortion, imagick_getimagechanneldistortion_args, ZEND_ACC_PUBLIC)
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, getimagechannelextrema, imagick_getimagechannelextrema_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, getimagechannelextrema, imagick_getimagechannelextrema_args, ZEND_ACC_PUBLIC)
 #endif // #if MagickLibVersion < 0x700
 #endif
 	PHP_ME(imagick, getimagechannelmean, imagick_getimagechannelmean_args, ZEND_ACC_PUBLIC)
@@ -2650,7 +2650,7 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, getimagedistortion, imagick_getimagedistortion_args, ZEND_ACC_PUBLIC)
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, getimageextrema, imagick_zero_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, getimageextrema, imagick_zero_args, ZEND_ACC_PUBLIC)
 #endif // #if MagickLibVersion < 0x700
 #endif
 	PHP_ME(imagick, getimagedispose, imagick_zero_args, ZEND_ACC_PUBLIC)
@@ -2661,7 +2661,7 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, getimageinterlacescheme, imagick_zero_args, ZEND_ACC_PUBLIC)
 	PHP_ME(imagick, getimageiterations, imagick_zero_args, ZEND_ACC_PUBLIC)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, getimagemattecolor, imagick_zero_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, getimagemattecolor, imagick_zero_args, ZEND_ACC_PUBLIC)
 #endif //#if MagickLibVersion < 0x700
 	PHP_ME(imagick, getimagepage, imagick_zero_args, ZEND_ACC_PUBLIC)
 	PHP_ME(imagick, getimagepixelcolor, imagick_getimagepixelcolor_args, ZEND_ACC_PUBLIC)
@@ -2688,20 +2688,20 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, magnifyimage, imagick_zero_args, ZEND_ACC_PUBLIC)
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, mapimage, imagick_mapimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
-	PHP_ME(imagick, mattefloodfillimage, imagick_mattefloodfillimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, mapimage, imagick_mapimage_args, ZEND_ACC_PUBLIC)
+	PHP_ME(imagick, mattefloodfillimage, imagick_mattefloodfillimage_args, ZEND_ACC_PUBLIC)
 #endif // #if MagickLibVersion < 0x700
 #endif
 #if MagickLibVersion < 0x700
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
-	PHP_ME(imagick, medianfilterimage, imagick_medianfilterimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, medianfilterimage, imagick_medianfilterimage_args, ZEND_ACC_PUBLIC)
 #endif
 #endif
 	PHP_ME(imagick, negateimage, imagick_negateimage_args, ZEND_ACC_PUBLIC)
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, paintopaqueimage, imagick_paintopaqueimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
-	PHP_ME(imagick, painttransparentimage, imagick_painttransparentimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, paintopaqueimage, imagick_paintopaqueimage_args, ZEND_ACC_PUBLIC)
+	PHP_ME(imagick, painttransparentimage, imagick_painttransparentimage_args, ZEND_ACC_PUBLIC)
 #endif //#if MagickLibVersion < 0x700
 #endif
 	PHP_ME(imagick, previewimages, imagick_previewimages_args, ZEND_ACC_PUBLIC)
@@ -2710,15 +2710,15 @@ static zend_function_entry php_imagick_c
 	PHP_ME(imagick, quantizeimages, imagick_quantizeimages_args, ZEND_ACC_PUBLIC)
 #if !defined(MAGICKCORE_EXCLUDE_DEPRECATED)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, reducenoiseimage, imagick_reducenoiseimage_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, reducenoiseimage, imagick_reducenoiseimage_args, ZEND_ACC_PUBLIC)
 #endif
 #endif
 	PHP_ME(imagick, removeimageprofile, imagick_removeimageprofile_args, ZEND_ACC_PUBLIC)
 	PHP_ME(imagick, separateimagechannel, imagick_separateimagechannel_args, ZEND_ACC_PUBLIC)
 	PHP_ME(imagick, sepiatoneimage, imagick_sepiatoneimage_args, ZEND_ACC_PUBLIC)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, setimagebias, imagick_setimagebias_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
-	PHP_ME(imagick, setimagebiasquantum, imagick_setimagebiasquantum_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, setimagebias, imagick_setimagebias_args, ZEND_ACC_PUBLIC)
+	PHP_ME(imagick, setimagebiasquantum, imagick_setimagebiasquantum_args, ZEND_ACC_PUBLIC)
 #endif
 	PHP_ME(imagick, setimageblueprimary, imagick_setimageblueprimary_args, ZEND_ACC_PUBLIC)
 	PHP_ME(imagick, setimagebordercolor, imagick_setimagebordercolor_args, ZEND_ACC_PUBLIC)
@@ -2817,7 +2817,7 @@ static zend_function_entry php_imagick_c
 #if MagickLibVersion >= 0x680
 	PHP_ME(imagick, morphology, imagick_morphology_args, ZEND_ACC_PUBLIC)
 #if MagickLibVersion < 0x700
-	PHP_ME(imagick, filter, imagick_filter_args, ZEND_ACC_PUBLIC | ZEND_ACC_DEPRECATED)
+	PHP_ME(imagick, filter, imagick_filter_args, ZEND_ACC_PUBLIC)
 #endif // #if MagickLibVersion < 0x700
 #endif // #if MagickLibVersion >= 0x680
 	PHP_ME(imagick, setantialias, imagick_setantialias_args, ZEND_ACC_PUBLIC)
