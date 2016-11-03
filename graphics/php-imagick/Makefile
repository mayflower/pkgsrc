# $NetBSD: Makefile,v 1.27 2020/08/17 20:19:07 leot Exp $

MODNAME=		imagick
PECL_VERSION=		3.4.4
CATEGORIES+=		graphics

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://pecl.php.net/package/imagick/
COMMENT=		PHP extension for ImageMagick graphics library
PKGREVISION=		3
LICENSE=		php

CONFIGURE_ARGS+=	--with-imagick=${BUILDLINK_PREFIX.ImageMagick6}

TEST_TARGET=		test

.include "../../graphics/ImageMagick6/buildlink3.mk"
.include "../../lang/php/ext.mk"
.include "../../mk/bsd.pkg.mk"
