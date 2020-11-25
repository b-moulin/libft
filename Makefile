
SRCS	= *.c

OBJS	= ${SRCS:.c=.o}

all:	${OBJS}
		cc -o hello ${OBJS}