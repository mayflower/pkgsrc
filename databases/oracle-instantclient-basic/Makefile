# $NetBSD$

PKGNAMESUFFIX=		basic
DISTNAME=		instantclient-${PKGNAMESUFFIX}-${LINUXARCH}-${ORACLEVERSION}dbru
PKGNAME=		oracle-instantclient-${PKGNAMESUFFIX}-${ORACLEVERSION}
CATEGORIES=		databases
MASTER_SITES=		#http://www.oracle.com/technology/software/tech/oci/instantclient/
DIST_SUBDIR=		oracle
EXTRACT_SUFX=		.zip

MAINTAINER=		xaver@loppenstedt.de
HOMEPAGE=		http://www.oracle.com/technology/tech/oci/instantclient/instantclient.html
COMMENT=		Oracle 19 Linux InstantClient basics for RDBMS 8.1.2+
LICENSE=	        oracle-binary-code-license

NO_BUILD=		yes

RESTRICTED=		Packaging prohibited by Oracle license

LINUXARCH=		linux.x64
ORACLEVERSION=		19.5.0.0.0

BINS_LIST=		adrci genezi uidrvci

DOCS_LIST=		BASIC_README

LIBS_LIST=		libclntshcore.so.19.1	\
			libclntsh.so.10.1	\
			libclntsh.so.11.1	\
			libclntsh.so.12.1	\
			libclntsh.so.18.1	\
			libclntsh.so.19.1	\
			libipc1.so		\
			libmql1.so		\
			libnnz19.so		\
			libocci.so.10.1		\
			libocci.so.11.1		\
			libocci.so.12.1		\
			libocci.so.18.1		\
			libocci.so.19.1		\
			libociei.so		\
			libocijdbc19.so		\
			liboramysql19.so	\
			libclntsh.so		\
			libocci.so		\
			ojdbc8.jar		\
			ucp.jar			\
			xstreams.jar

WRKSRC=			${WRKDIR}/instantclient_19_5

INSTBINSDIR=		${STAGEDIR}${PREFIX}/oracle/instant_client/${ORACLEVERSION}
INSTDOCSDIR=		${STAGEDIR}${PREFIX}/oracle/instant_client/${ORACLEVERSION}
INSTLIBSDIR=		${STAGEDIR}${PREFIX}/oracle/instant_client/${ORACLEVERSION}

PLIST_SUBST=		ORACLEVERSION=${ORACLEVERSION}

.include "../../mk/bsd.prefs.mk"

INTERACTIVE_STAGE=      fetch

FETCH_MESSAGE+= "Due to Oracle license restrictions, you must fetch the source"
FETCH_MESSAGE+= "distribution manually from"
FETCH_MESSAGE+= "http://www.oracle.com/technetwork/database/features/instant-client/index-097480.html"
FETCH_MESSAGE+= ", follow the link for Linux x64, download ${DISTFILES}"
FETCH_MESSAGE+= "and place it in ${DISTDIR}/${DIST_SUBDIR}"

do-install:
	${MKDIR} -m 0755 ${DESTDIR}${INSTBINSDIR}
	${MKDIR} -m 0755 ${DESTDIR}${INSTDOCSDIR}
	${MKDIR} -m 0755 ${DESTDIR}${INSTLIBSDIR}
.for i in ${BINS_LIST}
	${INSTALL_PROGRAM} ${WRKSRC}/${i} ${DESTDIR}${INSTBINSDIR}/${i}
.endfor
#.for i in ${DOCS_LIST}
	#${INSTALL_PROGRAM} ${WRKSRC}/${i} ${INSTDOCSDIR}/${i}
#.endfor
.for i in ${LIBS_LIST}
	${INSTALL_DATA} ${WRKSRC}/${i} ${DESTDIR}/${INSTLIBSDIR}/${i}
.endfor
	(cd ${DESTDIR}/${INSTLIBSDIR}; ln -s libclntshcore.so.19.1 libclntshcore.so)


.include "../../mk/bsd.pkg.mk"
