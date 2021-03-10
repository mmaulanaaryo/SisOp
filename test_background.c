#include  <stdio.h>
#include  <sys/types.h>
#include  <fcntl.h>
#include  <string.h>
#include  <stdlib.h>

#define   MAX_COUNT  99999
#define   BUF_SIZE   100

void  main(void)
{
	 int i;
     int fd;
	 char buf[BUF_SIZE];

	 fd = open("hasil.txt",O_WRONLY | O_CREAT| O_APPEND, 0644);
	 if (fd < 0) 
	 {
		exit(1); // jika tidak berhasil dibuat file maka keluar
	 } 
 
     for (i = 1; i <= MAX_COUNT; i++) {
		  sleep(1); // tidak melakukan apapun selama 1 detik
		  snprintf(buf, sizeof buf,"Saya adalah %d \n",i); //menulis ke buf Saya adalah angka_interger
		  write(fd,buf,strlen(buf)); // menuliskan buf ke file
     } 
     close(fd);
}
