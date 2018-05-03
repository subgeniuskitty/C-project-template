# © 2017 Aaron Taylor <ataylor at subgeniuskitty dot com>
# See LICENSE file for copyright and license details.

####################################################################################################
# Executables

CC              = gcc

####################################################################################################
# Flags

CC_FLAGS        += -Wall -std=c99

####################################################################################################
# Targets

all: aout

aout: 
	$(CC) $(CC_FLAGS) -o a.out main.c

clean:
	@rm a.out
