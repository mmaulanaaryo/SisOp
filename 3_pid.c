#include  <stdio.h>
#include  <string.h>
// inculde library untuk syscall


void  main(void)
{
	 // deklarasikan variabel ppid bertipe pid_t
     pid_t  pid;
	 ...
	 
	 // deklarasikan variabel i bertipe interger dan variabel buf bertipe char dengan ukuran 50 
     ...
     ...

	 // pid = panggil syscall untuk mengetahui pid
     pid = ...
	
     sprintf(buf, "pid proses ini adalah %d \n", pid);
	 write(1, buf, strlen(buf));

	 // ppid = panggil syscall untuk mengetahui ppid
     ppid = ...
	 sprintf(buf, "ppid proses ini adalah %d \n", ppid);
	 write(1, buf, strlen(buf));
}
