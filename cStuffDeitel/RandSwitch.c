#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(int argc, char** argv){
	srand(time(NULL)); //generates seed
	int var;
	int i;
	int one,two,three,four,five,six;
	one = 0;
	two = 0;
	three = 0;
	four = 0;
	five = 0;
	six = 0;
	
	for (i = 0; i < 100; i++){
		var = ((rand() % 6) + 1);
		//printf("%d\a\n", var);
		switch (var) {
			case 1:
				one++;
				break;
			case 2:
				two++;
				break;
			case 3:
				three++;
				break;
			case 4:
				four++;
				break;
			case 5:
				five++;
				break;
			case 6:
				six++;
				break;
		}
	}
	
	printf("\n\nOnes: %d\nTwos: %d\nThrees: %d\nFours: %d\nFives: %d\nSixes: %d\n", one, two, three, four, five, six);
	printf("\nChecksum = %d\n\n\n", one + two + three + four + five + six);
	return(EXIT_SUCCESS);
}
