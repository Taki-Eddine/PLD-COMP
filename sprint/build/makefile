EXEC     = prg
CC       = clang++
RUN_TIME_PATH = '../../runtime'
SHARED_LIBRARY_PATH = '../../'
CFLAGS   = -std=c++11 -I $(RUN_TIME_PATH)
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

.PHONY: do_script all assembly clean mrproper

clean:
	@rm -rf *.o *.out IR/*.o

mrproper: clean
	@rm -rf $(EXEC) *.s *.ir
