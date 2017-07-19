# $NetBSD$

VERSION=	3.5.3
PKGNAME=	liquibase-oracle-${VERSION}
CATEGORIES=	databases

NO_BUILD=	yes
AUTO_MKDIRS=	yes
WRKSRC=		${WRKDIR}

MAINTAINER=	michael.moll@mayflower.de
HOMEPAGE=	https://github.com/liquibase/liquibase/
COMMENT=	Liquibase JDBC driver for Oracle
LICENSE=	apache-2.0

DEPENDS+=	liquibase>=${VERSION}:../../databases/liquibase

ORACLEVERSION=	11.2.0.4.0
DEPENDS+=	oracle-instantclient-basic>=${ORACLEVERSION}:../../databases/oracle-instantclient-basic
DEPENDS+=	oracle-instantclient-sdk>=${ORACLEVERSION}:../../databases/oracle-instantclient-sdk

do-install:
	${DO_NADA}

post-install:
	${LN} -sf ${PREFIX}/oracle/instant_client/${ORACLEVERSION}/ojdbc6.jar ${DESTDIR}${PREFIX}/share/liquibase/lib/ojdbc6.jar

.include "../../mk/bsd.pkg.mk"
