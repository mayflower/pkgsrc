# $NetBSD: Makefile,v 1.2 2011/05/28 10:15:21 cheusov Exp $

PKGNAME=	heirloom-users-${HEIRLOOM_VER}
CATEGORIES=	sysutils

MAKE_FLAGS+=	SUBDIRS="build users"

NOT_FOR_PLATFORM+=	Interix-*-*

.include "../../sysutils/heirloom-doc/Makefile.common"

DESCR_SRC+=	${.CURDIR}/DESCR

.include "../../devel/heirloom-libcommon/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
