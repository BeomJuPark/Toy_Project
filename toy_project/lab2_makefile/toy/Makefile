CC = gcc
LIB = libmain.a
TARGET = maina
OBJ_DIR = obj
OBJS = ${OBJ_DIR}/main.o ${OBJ_DIR}/system_server.o ${OBJ_DIR}/gui.o ${OBJ_DIR}/input.o ${OBJ_DIR}/web_server.o
INCDIRS = system ui web_server
CFLAGS = $(addprefix -I, ${INCDIRS})

all : ${TARGET}

${TARGET} : ${OBJS}
	${CC} -o ${TARGET} ${OBJS} 

main.o : main.c
	${CC} ${CFLAGS} -c main.c -o ${OBJ_DIR}/main.o

system_server.o : system/system_server.c
	${CC} ${CFLAGS} -c system/system_server.c -o ${OBJ_DIR}/system_server.o

gui.o : ui/gui.c
	${CC} ${CFLAGS} -c ui/gui.c -o ${OBJ_DIR}/gui.o

input.o : ui/input.c
	${CC} ${CFLAGS} -c ui/input.c -o ${OBJ_DIR}/input.o

web_server.o : web_server/web_server.c
	${CC} ${CFLAGS} -c web_server/web_server.c -o ${OBJ_DIR}/web_server.o

