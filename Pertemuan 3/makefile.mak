soal1 : soal_1.o
		g++ -o soal1 soal_1.o

soal_1.o : soal_1.cpp
		g++ -c soal_1.cpp


soal2 : soal_2.o
		g++ -o soal2 soal_2.o

soal_2.o : soal_2.cpp
		g++ -c soal_2.cpp

clean: rm -f soal1 soal_1.o
clean: rm -f soal2 soal_2.o