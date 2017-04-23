# $NetBSD$

PKGNAMESUFFIX=		sdk
DISTNAME=		instantclient-${PKGNAMESUFFIX}-${LINUXARCH}-${ORACLEVERSION}
PKGNAME=		oracle-instantclient-${PKGNAMESUFFIX}-${ORACLEVERSION}
CATEGORIES=		databases
MASTER_SITES=		#http://www.oracle.com/technology/software/tech/oci/instantclient/
DIST_SUBDIR=		oracle
EXTRACT_SUFX=		.zip

MAINTAINER=		xaver@loppenstedt.de
HOMEPAGE=		http://www.oracle.com/technology/tech/oci/instantclient/instantclient.html
COMMENT=		Oracle 11 Linux InstantClient SDK for RDBMS 8.1.2+
LICENSE=	        oracle-binary-code-license

NO_BUILD=		yes

RESTRICTED=		Packaging prohibited by Oracle license

LINUXARCH=		linux.x64
ORACLEVERSION=		11.2.0.4.0

INCS_LIST=	ldap.h \
	nzerror.h \
	nzt.h \
	occi.h \
	occiAQ.h \
	occiCommon.h \
	occiControl.h \
	occiData.h \
	occiObjects.h \
	oci.h \
	oci1.h \
	oci8dp.h \
	ociap.h \
	ociapr.h \
	ocidef.h \
	ocidem.h \
	ocidfn.h \
	ociextp.h \
	ocikpr.h \
	ocixmldb.h \
	ocixstream.h \
	odci.h \
	oratypes.h \
	ori.h \
	orid.h \
	orl.h \
	oro.h \
	ort.h \
	xa.h

WRKSRC=			${WRKDIR}/instantclient_11_2

INSTINCSDIR=		${STAGEDIR}${PREFIX}/oracle/instant_client/${ORACLEVERSION}/sdk/include

PLIST_SUBST=		ORACLEVERSION=${ORACLEVERSION}

.include "../../mk/bsd.prefs.mk"

INTERACTIVE_STAGE=      fetch

FETCH_MESSAGE+= "Due to Oracle license restrictions, you must fetch the source"
FETCH_MESSAGE+= "distribution manually from"
FETCH_MESSAGE+= "http://www.oracle.com/technetwork/database/features/instant-client/index-097480.html"
FETCH_MESSAGE+= ", follow the link for Linux x64, download ${DISTFILES}"
FETCH_MESSAGE+= "and place it in ${DISTDIR}/${DIST_SUBDIR}"

do-install:
	${MKDIR} -m 0755 ${DESTDIR}${INSTINCSDIR}
.for i in ${INCS_LIST}
	${INSTALL_DATA} ${WRKSRC}/sdk/include/${i} ${DESTDIR}/${INSTINCSDIR}/${i}
.endfor

.include "../../mk/bsd.pkg.mk"
