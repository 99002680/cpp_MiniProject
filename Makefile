all: all.out 
all.out: unemp.o rural.o urban.o data.o data_test.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread

data_test.o: data_test.cpp unemp.h rural.h urban.h data.h 
	g++ $< -c

data.o: data.cpp data.h unemp.h rural.h urban.h
	g++ $< -c
rural.o: rural.cpp rural.h unemp.h
	g++ $< -c
urban.o: urban.cpp urban.h unemp.h
	g++ $< -c
unemp.o: unemp.cpp unemp.h
	g++ $< -c
valgrind: ./all.out
	valgrind ./all.out
cppcheck: *.cpp
	cppcheck *.cpp
clean:
	rm -rf *.o *.out *.gch
