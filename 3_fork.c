#include  <stdio.h>
// include library untuk mengolah string (misal: strlen(), dll)
#include  <stdlib.h>
//include library untuk memanggil syscall


#define   MAX_COUNT  20

void  main(void)
{
	 // buat variabel bernama pid dengan tipe pid_t
	 // buat variabel bernama i dengan tipe integer
	 // buat variabel bernama buf dengan tipe char yang berukuran 50	


     // panggil syscall untuk membuat proses baru. proses baru mempunyai kode yang sama dengan parent process
     pid = getpid();
     
     for (i = 1; i <= MAX_COUNT; i++) {
          sprintf(buf, "Proses dengan pid %d, nilai = %d\n", pid, i);
          // panggil syscall untuk menulis variabel buf ke terminal (fd = 1)
     } 
     
     //panggil syscall untuk keluar dari proses
}

/*
Compile kode ini. 
kode ini disebut sebagai fork bomb
Peringatan: simpan semua pekerjaan Anda sebelum menjalankan program ini.

#include  <stdio.h>
#include  <sys/types.h>
#include  <unistd.h>

int main(){
	while(1){
		fork();
	}
	return 0;
}

*/
