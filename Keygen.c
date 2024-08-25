#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


int main()
{
	unsigned long serial = 0x979033;
	
	srand((unsigned)time(NULL));
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf(" ANOTHER MiN0R UPDATERs SUX RELEASE \n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\nAcoustica MP3 CD Burner v1.091\n");

	serial *= (rand()%9)+2;
	printf("Your registration code is : %lu", serial);
	getch();
	return 0;
}