# $NetBSD$

PKGNAMESUFFIX=		sdk
DISTNAME=		instantclient-${PKGNAMESUFFIX}-${LINUXARCH}-${ORACLEVERSION}dbru
PKGNAME=		oracle-instantclient-${PKGNAMESUFFIX}-${ORACLEVERSION}
CATEGORIES=		databases
MASTER_SITES=		#http://www.oracle.com/technology/software/tech/oci/instantclient/
DIST_SUBDIR=		oracle
EXTRACT_SUFX=		.zip

MAINTAINER=		xaver@loppenstedt.de
HOMEPAGE=		http://www.oracle.com/technology/tech/oci/instantclient/instantclient.html
COMMENT=		Oracle 19 Linux InstantClient SDK for RDBMS 8.1.2+
LICENSE=	        oracle-binary-code-license

NO_BUILD=		yes

RESTRICTED=		Packaging prohibited by Oracle license

LINUXARCH=		linux.x64
ORACLEVERSION=		19.5.0.0.0

INCS_LIST=	xmlproc.h \
	xmlctx.hpp \
	xml.hpp \
	oraxsd.hpp \
	ociap.h \
	xmldf.h \
	xmlurl.h \
	oci1.h \
	ociextp.h \
	ldap.h \
	orastruc.h \
	oraxsd.h \
	xmlsoapc.hpp \
	odci.h \
	ocixstream.h \
	occi.h \
	ori.h \
	xmldav.h \
	ort.h \
	occiData.h \
	xmlsoap.hpp \
	nzerror.h \
	oci8dp.h \
	occiControl.h \
	xmlotn.h \
	oci.h \
	ociapr.h \
	occiCommon.h \
	xmlerr.h \
	ocidfn.h \
	oraxmlcg.h \
	ocikpr.h \
	xml.h \
	occiObjects.h \
	oraxml.h \
	orid.h \
	oratypes.h \
	xmlxvm.h \
	oro.h \
	ocidef.h \
	xa.h \
	xmlev.h \
	xmlsoap.h \
	occiAQ.h \
	ocidem.h \
	ocixmldb.h \
	xmlsch.h \
	xmlxsl.h \
	nzt.h \
	oraxml.hpp \
	xmlotn.hpp \
	xmlxptr.h \
	ociver.h \
	orl.h

WRKSRC=			${WRKDIR}/instantclient_19_5

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
