# $NetBSD: Makefile,v 1.2 2020/09/29 19:36:12 jperkin Exp $

DISTNAME=	eth-typing-2.2.2
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	finance python
MASTER_SITES=	${MASTER_SITE_GITHUB:=ethereum/}
GITHUB_PROJECT=	eth-typing
GITHUB_TAG=	v${PKGVERSION_NOREV}
DIST_SUBDIR=	${GITHUB_PROJECT}

MAINTAINER=	khorben@defora.org
HOMEPAGE=	https://github.com/ethereum/eth-typing
COMMENT=	Common type annotations for ethereum python packages
LICENSE=	mit

BUILD_DEPENDS+=	${PYPKGPREFIX}-bumpversion-[0-9]*:../../devel/py-bumpversion
#BUILD_DEPENDS+=	# TODO: pytest-watch>=4.1.0,<5
BUILD_DEPENDS+=	${PYPKGPREFIX}-wheel-[0-9]*:../../devel/py-wheel
BUILD_DEPENDS+=	${PYPKGPREFIX}-twine-[0-9]*:../../net/py-twine
BUILD_DEPENDS+=	${PYPKGPREFIX}-ipython-[0-9]*:../../devel/py-ipython
#BUILD_DEPENDS+=	# TODO: pytest>=4.4,<4.5
#BUILD_DEPENDS+=	# TODO: pytest-xdist>=0
BUILD_DEPENDS+=	${PYPKGPREFIX}-tox-[0-9]*:../../devel/py-tox
BUILD_DEPENDS+=	${PYPKGPREFIX}-flake8-[0-9]*:../../devel/py-flake8
BUILD_DEPENDS+=	${PYPKGPREFIX}-isort-[0-9]*:../../devel/py-isort
BUILD_DEPENDS+=	${PYPKGPREFIX}-mypy-[0-9]*:../../lang/py-mypy
BUILD_DEPENDS+=	${PYPKGPREFIX}-docstyle-[0-9]*:../../devel/py-docstyle
BUILD_DEPENDS+=	${PYPKGPREFIX}-sphinx-[0-9]*:../../textproc/py-sphinx
BUILD_DEPENDS+=	${PYPKGPREFIX}-sphinx-rtd-theme-[0-9]*:../../textproc/py-sphinx-rtd-theme

USE_LANGUAGES=	# none

PYTHON_VERSIONS_INCOMPATIBLE=	27 # py-mypy py-twine

# TODO: Migrate MASTER_SITES to MASTER_SITE_PYPI
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
