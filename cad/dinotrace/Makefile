# $NetBSD: Makefile,v 1.53 2020/10/05 22:10:01 mef Exp $
#
DISTNAME=	dinotrace-9.4f
CATEGORIES=	cad
MASTER_SITES=	${MASTER_SITE_GITHUB:=veripool/}
GITHUB_TAG=	v9.4f

MAINTAINER=	dmcmahill@NetBSD.org
HOMEPAGE=	http://www.veripool.org/dinotrace/
COMMENT=	Tool for viewing the output of digital simulators
LICENSE=	gnu-gpl-v3

GNU_CONFIGURE=		YES
INFO_FILES=		YES
USE_TOOLS+=		aclocal autoconf automake gmake perl makeinfo

pre-configure:
	cd ${WRKSRC}; aclocal
	cd ${WRKSRC}; autoconf

.include "../../mk/motif.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
