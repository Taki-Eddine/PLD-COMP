EXEC     = prg
CC       = g++
RUN_TIME_PATH = '../../runtime'
SHARED_LIBRARY_PATH = '/usr/lib'
CFLAGS   = -std=c++11 -w -I $(RUN_TIME_PATH)
LDFLAGS =  -L$(SHARED_LIBRARY_PATH) -lantlr
SRC      = $(wildcard *.cpp) $(wildcard IR/*.cpp)
OBJ      = $(SRC:.cpp=.o)
ASSEMBLY_FILE = assembly.s

all: $(EXEC)

assembly:	$(ASSEMBLY_FILE)
	$(CC) $<

${EXEC}: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: all assembly clean mrproper

clean:
	@rm -rf *.o *.out IR/*.o

mrproper: clean
	@rm -rf $(EXEC) *.s *.ir
