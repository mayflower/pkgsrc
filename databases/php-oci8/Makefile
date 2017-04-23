# $NetBSD: Makefile,v 1.4 2016/10/05 22:09:39 jdolecek Exp $

MODNAME=		oci8
CATEGORIES+=		databases
COMMENT=		PHP extension for Oracle 8 (and above) databases

USE_PHP_EXT_PATCHES=	yes

.include "../../mk/bsd.prefs.mk"

ORACLEVERSION=		11.2.0.4.0
DEPENDS+=               oracle-instantclient-basic>=${ORACLEVERSION}:../../databases/oracle-instantclient-basic
DEPENDS+=               oracle-instantclient-sdk>=${ORACLEVERSION}:../../databases/oracle-instantclient-sdk
ORACLE_HOME=		${PREFIX}/oracle/instant_client/${ORACLEVERSION}

#.if !defined(ORACLE_HOME)
#PKG_FAIL_REASON+=	"You must set ORACLE_HOME to the location of your Oracle installation"
#.elif !exists(${ORACLE_HOME})
#PKG_FAIL_REASON+=	"The location of ORACLE_HOME does not exist"
#.endif

BUILDLINK_PASSTHRU_DIRS+=       ${ORACLE_HOME}
CONFIGURE_ARGS+=		--with-${MODNAME}=shared,${ORACLE_HOME}

ONLY_FOR_PLATFORM=      Linux-*-* SunOS-*-*

.include "../../lang/php/ext.mk"
.include "../../mk/bsd.pkg.mk"
