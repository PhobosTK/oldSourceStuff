//09/02/16
//Fizz=divisible by 3
//Buzz=divisible by 5
//FizzBuzz=divisible by both

#include<stdlib.h>
#include<stdio.h>

void fizzbuzz(int num, int lim);

int main(int argc, char** argv){
	int lim, num = 0;
	puts("Where should I start? Num: ");
	scanf("%d", &num);
	puts("\nWhere should I end? Lim: ");
	scanf("%d", &lim);
	if(num > lim){
		puts("The num can't be bigger than lim");
		return(-1);
	}
	else
		fizzbuzz(num, lim);	
	return (EXIT_SUCCESS);
}

void fizzbuzz(int num, int lim){
	int i = 0;
	puts("\n\n\n");
	for(i = num; i <= lim; i++){
		if((i%3 == 0) && (i%5 == 0)){
			puts("FizzBuzz");
			}
		else
			if(i%3 == 0){
			puts("fizz");
				}
			else
				if(i%5 == 0){
				puts("buzz");
					}
				else
					printf("%d\n", i);			
		}		
}
