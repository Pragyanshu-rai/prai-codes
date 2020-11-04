cc=gcc
	
pat: printing_p.c
	$(cc) printing_p.c 
pat2: printing_p.cpp
	g++	printing_p.c
fcfs1: fcfsat.c
	$(cc) fcfsat.c -g -o fcfsat
fpt2: fptr2.c
	$(cc) fptr2.c -g -o fptr2
