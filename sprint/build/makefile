EXEC     = prg
CC       = clang++
RUN_TIME_PATH = '../../antlr4-runtime/'
SHARED_LIBRARY_PATH = '../../'
CFLAGS   = -std=c++11 -Wall -I $(RUN_TIME_PATH)
LDFLAGS =  -L$(SHARED_LIBRARY_PATH) -lantlr4-runtime
SRC      = $(wildcard *.cpp)
OBJ      = $(SRC:.cpp=.o)
ASSEMBLY_FILE = assembly.s

all: $(EXEC)

assembly:	$(ASSEMBLY_FILE)
	$(CC) $<

${EXEC}: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: do_script all assembly clean mrproper

clean:
	@rm -rf *.o *.out *.s

mrproper: clean
	@rm -rf $(EXEC)
