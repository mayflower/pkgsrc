# $NetBSD: Makefile,v 1.6 2020/10/04 11:41:16 js Exp $

DISTNAME=	mautrix-python-0.7.11
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/-python//}
CATEGORIES=	chat python
MASTER_SITES=	${MASTER_SITE_GITHUB:=tulir/}
GITHUB_PROJECT=	mautrix-python
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	js@pkgsrc.org
HOMEPAGE=	https://github.com/tulir/mautrix-python
COMMENT=	Python 3 asyncio Matrix framework
LICENSE=	mpl-2.0

PYTHON_VERSIONS_INCOMPATIBLE=	27

DEPENDS+=	${PYPKGPREFIX}-aiohttp>=3<4:../../www/py-aiohttp
DEPENDS+=	${PYPKGPREFIX}-attrs>=18.1.0:../../devel/py-attrs
DEPENDS+=	${PYPKGPREFIX}-yarl>=1.5.1:../../www/py-yarl

USE_LANGUAGES=	# none
EGG_NAME=	mautrix-${PKGVERSION_NOREV}

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
