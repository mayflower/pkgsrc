# $NetBSD: Makefile,v 1.5 2017/09/04 18:08:27 wiz Exp $

DISTNAME=	sshguard-1.5
PKGREVISION=	1
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=sshguard/}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://www.sshguard.net/
COMMENT=	Protect networked hosts from brute force attacks
LICENSE=	modified-bsd

GNU_CONFIGURE=	yes

RCD_SCRIPTS=	sshguard

.include "options.mk"

# Claiming to be an X/Open applications hides inet_pton(3) under NetBSD
# which this application needs.
BUILDLINK_TRANSFORM.NetBSD+=	rm:-D_XOPEN_SOURCE

.include "../../mk/bsd.pkg.mk"
