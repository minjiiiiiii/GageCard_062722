all: GageAcquire

CC = gcc

# where the include files are
INCLUDE = -I../../Include -I../CsAppSupport -I../C_Common -I../../Include/Public


# options for development
CFLAGS = -g -Wall

#options for release
#CFLAGS = -O -Wall

LDFLAGS = -lCsSsm -lCsAppSupport


GageAcquire: Acquire.o CsSdkMisc.o
	$(CC) Acquire.o CsSdkMisc.o $(LDFLAGS) -o GageAcquire

#Acquire.o: Acquire_mj.c
#	$(CC) $(INCLUDE) $(CFLAGS) -c Acquire_mj.c

Acquire.o: Acquire.c
	$(CC) $(INCLUDE) $(CFLAGS) -c Acquire.c	

CsSdkMisc.o: ../C_Common/CsSdkMisc.c
	$(CC) $(INCLUDE) $(CFLAGS) -c ../C_Common/CsSdkMisc.c

.PHONY : clean install uninstall

clean:
	rm -rf *.o GageAcquire

install: all
#	cp GageAcquire ../../Bin/

uninstall: clean
#	rm -rf ../../Bin/GageAcquire


##############################original makefile for full scenario#####################
#CC = gcc
#CFLAGS = -Wall -O2 -m32

#OBJS = main.o daq.o tx.o motor.o

#main: $(OBJS)
#	$(CC) $(CFLAGS) -o main $(OBJS) -lpthread -lrt -lm
