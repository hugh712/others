#include <stdio.h>

int main(void)
{

	
	printf("********************Interger***************************\n");
	printf("ziseof(\"int\")=%zu\n",sizeof(int));
	printf("ziseof(\"int*\")=%zu\n",sizeof(int*));
	printf("ziseof(\"unsigned int\")=%zu\n",sizeof(unsigned int));
	printf("ziseof(\"unsigned int*\")=%zu\n\n",sizeof(unsigned int*));
	
	printf("ziseof(\"short int\")=%zu\n",sizeof(short int));
	printf("ziseof(\"short int*\")=%zu\n",sizeof(short int*));
	printf("ziseof(\"unsigned short int\")=%zu\n",sizeof(unsigned short  int));
	printf("ziseof(\"unsigned short int*\")=%zu\n\n",sizeof(unsigned short int*));
	
	printf("ziseof(\"long int\")=%zu\n",sizeof(long int));
	printf("ziseof(\"long int*\")=%zu\n",sizeof(long int*));
	printf("ziseof(\"unsigned long int\")=%zu\n",sizeof(unsigned long int));
	printf("ziseof(\"unsigned long int*\")=%zu\n\n",sizeof(unsigned long int*));

	printf("ziseof(\"short\")=%zu\n",sizeof(short));
	printf("ziseof(\"short*\")=%zu\n",sizeof(short*));
	printf("ziseof(\"unsigned short\")=%zu\n",sizeof(unsigned short));
	printf("ziseof(\"unsigned short*\")=%zu\n\n",sizeof(unsigned short*));
	
	printf("ziseof(\"long\")=%zu\n",sizeof(long));
	printf("ziseof(\"long*\")=%zu\n",sizeof(long*));
	printf("ziseof(\"unsigned long\")=%zu\n",sizeof(unsigned long));
	printf("ziseof(\"unsigned long*\")=%zu\n\n",sizeof(unsigned long*));

	printf("********************Single Precision***************************\n");
	printf("ziseof(\"float\")=%zu\n",sizeof(float));
	printf("ziseof(\"float*\")=%zu\n\n",sizeof(float*));

	printf("********************Double Precision***************************\n");
	printf("ziseof(\"double\")=%zu\n",sizeof(double));
	printf("ziseof(\"double*\")=%zu\n",sizeof(double*));
	printf("ziseof(\"long double\")=%zu\n",sizeof(long double));
	printf("ziseof(\"long double*\")=%zu\n\n",sizeof(long double*));
	
	
	printf("********************Character***************************\n");
	printf("ziseof(\"char\")=%zu\n",sizeof(char));
	printf("ziseof(\"char*\")=%zu\n",sizeof(char*));
	printf("ziseof(\"unsigned char\")=%zu\n",sizeof(unsigned char));
	printf("ziseof(\"unsigned char\")=%zu\n\n",sizeof(unsigned char*));
	
	
	
	return 0;
}
