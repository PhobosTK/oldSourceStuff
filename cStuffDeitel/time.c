#include<stdlib.h>
#include<stdio.h>

int main(int argc, char** argv){
	printf("File: %s\n\a", __FILE__);	
	printf("Date: %s\n\a", __DATE__);
	printf("Time: %s\n\a", __TIME__);
	printf("Line: %d\n\a", __LINE__);
	printf("GNUC: %d\n\a", __GNUC__);
	printf("STDC: %d\n\a", __STDC__);
	printf("STDC_VERSION: %d\n\a", __STDC_VERSION__);
	return (EXIT_SUCCESS);
}
