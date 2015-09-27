PRGNAME     = mednafen

# define regarding OS, which compiler to use
CC        	= nspire-gcc
CCP         = nspire-g++
LD          = nspire-gcc

# change compilation / linking flag options
F_OPTS		=  -I./include -DLSB_FIRST -DSIZEOF_DOUBLE=8 -DHAVE_MKDIR -DPSS_STYLE=1 -DMEDNAFEN_VERSION=\"0.9.38.6\" -DMEDNAFEN_VERSION_NUMERIC=0x000938 -DPACKAGE=""

DEFINES 	=  -D _GLIBCXX_ATOMIC_BUILTINS -D__GCC_ATOMIC_INT_LOCK_FREE=2 
DEFINES    += -DHAVE_CXX11=1 -DSIZEOF_CHAR=1 -DSIZEOF_SHORT=2 -DSIZEOF_INT=4 -DSIZEOF_LONG=8 -DSIZEOF_DOUBLE=8 -DSIZEOF_LONG_LONG=8 -DSIZEOF_OFF_T=8 
DEFINES    += -I/usr/include/SDL -DWITHOUT_TRIO
DEFINES    +=  -DWANT_PCE_FAST_EMU=1

CC_OPTS		= -O2 $(F_OPTS) $(DEFINES)
CFLAGS		= $(CC_OPTS) -std=gnu11
CXXFLAGS	= $(CC_OPTS) -std=gnu++11
LDFLAGS     = -lSDL -lm -lz -lstdc++

# Files to be compiled
SRCDIR    = src src/video src/string src/demo src/demo src/resampler src/hash src/compress src/desa86 src/hash src/trio src/drivers_ src/video src/hw_cpu src/hw_misc src/hw_video src/mpcdec src/quicklz src/sound_ src/sexyal src/cdrom_ src/cdplay src/sexyal/drivers 
SRCDIR   += src/hw_misc/arcade_card src/pce_fast src/hw_video/huc6270 src/hw_sound/pce_psg src/hw_cpu/huc6280
VPATH     = $(SRCDIR)
SRC_C   = $(foreach dir, $(SRCDIR), $(wildcard $(dir)/*.c))
SRC_CP   = $(foreach dir, $(SRCDIR), $(wildcard $(dir)/*.cpp))
OBJ_C   = $(notdir $(patsubst %.c, %.o, $(SRC_C)))
OBJ_CP   = $(notdir $(patsubst %.cpp, %.o, $(SRC_CP)))
OBJS     = $(OBJ_C) $(OBJ_CP)

# Rules to make executable
all: $(PRGNAME) gen

gen:
	genzehn --input $(PRGNAME) --output med.t --compress
	make-prg med.t mednafen.tns 
	rm med.t
	rm $(PRGNAME) 


$(PRGNAME): $(OBJS)  
	$(LD) $(CFLAGS) -o $(PRGNAME) $^ $(LDFLAGS)

$(OBJ_C) : %.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_CP) : %.o : %.cpp
	$(CCP) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(PRGNAME) *.o
