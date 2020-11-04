flags = -g -o 
fcfs: fcfsat.c
	gcc fcfsat.c  -g -o fcfsat
srtf: srtf.c
	gcc srtf.c  -g -o srtf
sjfat: sjfat.c
	gcc sjfat.c  -g -o sjfat
sjfatv2: sjfatv2.c
	gcc sjfatv2.c  -g -o sjfatv2
rr_at: rr_at.c
	gcc rr_at.c $(flags) rr_at
priority: priority_at.c
	gcc priority_at.c -g -o priority_at
