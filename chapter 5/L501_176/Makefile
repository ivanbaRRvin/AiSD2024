CXX=gcc

ifeq ($(OS),Windows_NT)
	RM=del
	EXT=.exe
else
	RM=rm
	EXT=

endif

L501176.exe: L501_176.o
	$(CXX) -o L501176.exe L501_176.o

L501_176.o: L501_176.cpp
	$(CXX) -c 501_176.cpp

clean:
	$(RM) L501_176.o L501176.exe

