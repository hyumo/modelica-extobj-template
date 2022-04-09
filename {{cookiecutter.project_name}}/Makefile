CLEANUP = rm -f
MKDIR = mkdir -p
TARGET_EXTENSION=out

CC=gcc
CFLAGS=-std=c89
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Wpointer-arith
CFLAGS += -Wcast-align
CFLAGS += -Wwrite-strings
CFLAGS += -Wswitch-default
CFLAGS += -Wunreachable-code
CFLAGS += -Winit-self
CFLAGS += -Wmissing-field-initializers
CFLAGS += -Wno-unknown-pragmas
CFLAGS += -Wstrict-prototypes
CFLAGS += -Wundef
CFLAGS += -Wold-style-definition

PATHS = src/
PATHT = tests/
PATHU = tests/unity/

TARGET = test_{{cookiecutter.project_name}}

SRC = $(wildcard $(PATHS)*.c)
SRC = $(wildcard $(PATHT)*.c)
SRC += $(wildcard $(PATHU)*.c)

INCLUDES = -Isrc -I$(PATHU)

.PHONY: clean
.PHONY: test

test:
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o $(TARGET)
	- ./$(TARGET) -v

clean:
	rm -rvf *.o *~ ${TARGET}
	
