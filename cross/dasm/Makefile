# $NetBSD: Makefile,v 1.14 2020/09/07 16:56:48 rhialto Exp $
#

DISTNAME=	dasm-2.20.13
DIST_SUBDIR=	${PKGNAME_NOREV}
CATEGORIES=	cross
MASTER_SITES=	${MASTER_SITE_GITHUB:=dasm-assembler/}
GITHUB_TAG=	2.20.11

MAINTAINER=	xmor61@users.sourceforge.net
HOMEPAGE=	https://dasm-assembler.github.io/
COMMENT=	Multi-CPU cross-assembler for 6502, 6803 and 68HC11
LICENSE=	gnu-gpl-v2

NO_CONFIGURE=	YES
USE_TOOLS+=	gmake

INSTALLATION_DIRS=	bin share/dasm

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/dasm ${DESTDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/bin/ftohex ${DESTDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/doc/DASM.TXT ${DESTDIR}${PREFIX}/share/dasm
	${INSTALL_DATA} ${WRKSRC}/doc/FTOHEX.TXT ${DESTDIR}${PREFIX}/share/dasm

.include "../../mk/bsd.pkg.mk"
