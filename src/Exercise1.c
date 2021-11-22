/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex1(int n){
	//Your codes here
	int count = 1;
	while (n>=10){
		n = n/10;
		count++;
	}
	int len = count ;
	printf("%d ", len);
	char * ones[] = {"zero", "one", "two","three", "four",
					"five", "six", "seven", "eight", "nine"};
	char * tens[] = {"", "ten", "eleven", "twelve", "thỉteen",
					 "fourteen", "fifteen", "sixteen", "seventeen",
					 "eighteen", "nineteen"};
	char * tensmul[] = {"", "", "twenty", "thirty", "forty",
						"fifty", "sixty", "seventy", "eighty",
						"ninety"};

	if (len == 0){
		printf("no number input!!!");
	}
	if(len > 4){
		printf("number input maximum length is 4-digits!!!");
	}
	if(len == 1){ 
		printf("%s \n", ones[n]);
	}
	if(len == 2){
		if(n == 10){printf("ten");}
		else if (n<=19){
			printf("%s ", tens[n-9]);
		}
		else if(n%10 == 0 && n>=20){
			printf("%s ", tensmul[(n/10)-1]);
		}
		else if (n > 20 && n%10 != 0){
			int u = n%10;
			printf("%s %s ", tensmul[(n/10) -1], ones[u]);
		}
	}
	if(len == 3){
		int h = n%1000;
		printf("%s hundred ", ones[h/100]);
		int d = h%100;
		if (d >= 10 && d <= 19){
			printf("and %s",tens[(d)-9]);
		}
		if (d <= 9 && d != 0){
			printf("and %s", ones[d]);
		}
		if (d >= 20){
			printf("%s ", tensmul[(d)/10]);
			printf("%s ", ones[d%10]);
		}
		if (d == 0) {printf(" ");}
	}
	if(len == 4){
		int t = n/1000;
		printf("%s thousand ", ones[t]);
		int h = n%1000;
		printf("%s hundred ", ones[h/100]);
		int d = h%100;
		if (d >= 10 && d <= 19){
			printf("and %s",tens[(d)-9]);
		}
		if (d <= 9 && d != 0){
			printf("and %s", ones[d]);
		}
		if (d >= 20){
			printf("%s ", tensmul[(d)/10]);
			printf("%s ", ones[d%10]);
		}
		if (d == 0) {printf(" ");}
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
