WAITER_OBJS=waiter.o
SENDER_OBJS=sender.o
SENDER485_OBJS=sender485.o
BRAIN_OBJS=brain.o
LEDSEND_OBJS=ledsend.o
LEDSEND2_OBJS=ledsend2.o
RATETEST_OBJS=ratetest.o
OBJS=${WAITER_OBJS} ${SENDER_OBJS} ${SENDER485_OBJS} ${BRAIN_OBJS} ${LEDSEND_OBJS} ${RATETEST_OBJS}

TARGETS=waiter sender sender485 brain ledsend ledsend2 ratetest poofertest

all: ${TARGETS}

waiter: ${WAITER_OBJS}
	${LINKXX}

sender: ${SENDER_OBJS}
	${LINKXX}

sender485: ${SENDER485_OBJS}
	${LINKXX} -lftdi

brain: ${BRAIN_OBJS}
	${LINKXX}

ledsend: ${LEDSEND_OBJS}
	${LINKXX} -lftdi

ledsend2: ${LEDSEND2_OBJS}
	${LINKXX} -lftdi

ratetest: ${RATETEST_OBJS}
	${LINKXX} -lftdi

poofertest: poofertest.o
	${LINKXX} -lftdi



waiter: ${FLG_DIR}/lib/cxx/libflgxx.a ${FLG_DIR}/lib/c/libflg.a ${FLG_DIR}/lib/lua/src/liblua.a
sender: ${FLG_DIR}/lib/cxx/libflgxx.a ${FLG_DIR}/lib/c/libflg.a ${FLG_DIR}/lib/lua/src/liblua.a
sender485: ${FLG_DIR}/lib/cxx/libflgxx.a ${FLG_DIR}/lib/c/libflg.a ${FLG_DIR}/lib/lua/src/liblua.a
brain: ${FLG_DIR}/lib/cxx/libflgxx.a ${FLG_DIR}/lib/c/libflg.a ${FLG_DIR}/lib/lua/src/liblua.a
ledsend: ${FLG_DIR}/lib/cxx/libflgxx.a ${FLG_DIR}/lib/c/libflg.a ${FLG_DIR}/lib/lua/src/liblua.a
ledsend2: ${FLG_DIR}/lib/cxx/libflgxx.a ${FLG_DIR}/lib/c/libflg.a ${FLG_DIR}/lib/lua/src/liblua.a
ratetest: ${FLG_DIR}/lib/cxx/libflgxx.a ${FLG_DIR}/lib/c/libflg.a ${FLG_DIR}/lib/lua/src/liblua.a
poofertest: ${FLG_DIR}/lib/cxx/libflgxx.a ${FLG_DIR}/lib/c/libflg.a ${FLG_DIR}/lib/lua/src/liblua.a

include ${FLG_DIR}/rules.mk
