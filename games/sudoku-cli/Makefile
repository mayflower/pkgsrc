# $NetBSD: Makefile,v 1.9 2018/01/14 17:34:01 rillig Exp $
#

DISTNAME=		sudoku-1.0.1
PKGREVISION=		2
PKGNAME=		${DISTNAME:S/sudoku/sudoku-cli/}
CATEGORIES=		games
#MASTER_SITES=		http://www.laurasia.com.au/downloads/
EXTRACT_SUFX=		.tgz

MAINTAINER=		pkgsrc-users@NetBSD.org
#HOMEPAGE=		http://www.laurasia.com.au/downloads/
COMMENT=		Commandline version of sudoku board game
LICENSE=		public-domain

BUILD_TARGET=		sudoku

INSTALLATION_DIRS+=	bin ${PKGMANDIR}/man6 ${SHARE_SUBDIR}

SHARE_SUBDIR=		share/sudoku-cli
SHARE_DIR=		${PREFIX}/${SHARE_SUBDIR}

MAKE_FLAGS+=		INSTALL_BIN=${INSTALL_PROGRAM:Q}
MAKE_FLAGS+=		INSTALL_DATADIR=${INSTALL_DATA_DIR:Q}
MAKE_FLAGS+=		INSTALL_DATA=${INSTALL_DATA:Q}
MAKE_FLAGS+=		INSTALL_MAN=${INSTALL_MAN:Q}
MAKE_FLAGS+=		BINDIR=${PREFIX}/bin
MAKE_FLAGS+=		LIBDIR=${SHARE_DIR}
MAKE_FLAGS+=		MAN6DIR=${PREFIX}/${PKGMANDIR}/man6
MAKE_FLAGS+=		DEFS=${CFLAGS:Q}
MAKE_FLAGS+=		SUDOKUNAME=sudoku-cli

CFLAGS+=		-DTEMPLATE="${SHARE_DIR}/template"
CFLAGS+=		-DPRECANNED="${SHARE_DIR}/precanned"

SUBST_CLASSES+=			sudoku-cli
SUBST_STAGE.sudoku-cli=		pre-build
SUBST_MESSAGE.sudoku-cli=	Correcting path names in man page
SUBST_FILES.sudoku-cli+=	sudoku.6
SUBST_SED.sudoku-cli+=		-e s,/usr/lib/sudoku,${SHARE_DIR},

.include "../../mk/curses.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
