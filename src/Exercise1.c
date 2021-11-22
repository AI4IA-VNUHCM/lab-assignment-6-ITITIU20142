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

char *parseB_Number(int number) {
  char *nums[] = {"one",   "two",   "three", "four", "five",   "six",
                  "seven", "eight", "nine",  "ten",  "eleven", "twelve"};
  return nums[number - 1];
}
char *parseE_Number(int number) {
  char *nums[] = {" ",   "twen",  "thir", "four", "fif",
                  "six", "seven", "eight", "nine"};
  return nums[number - 1];
}
void Ex1(int n){
	//Your codes here
	int num = n%10, tens = (n/10)%10, 
	hunds = (n/100)%10, thous = (n/1000)%10;

	if (n<0){
		printf("invalid number input!!!");
	}
	if(n > 9999){
		printf("number input maximum length is 4-digits!!!");
	}
	if (thous != 0){
		printf("%s thousand ", parseB_Number(thous));
	}
	if (hunds != 0) {
    printf("%s hundred ", parseB_Number(hunds));
  }

  if (tens == 1) {
    if (num > 2) {
      printf("%steen ", parseE_Number(num));
    } else
      printf("%s", parseB_Number(tens * 10 + num));
  } else if (tens == 2) {
    printf("%sty ", parseE_Number(tens));
  } else if (tens != 0) {
    printf("%sty ", parseE_Number(tens));
  }

  if (num != 0 && tens != 1) {
    printf("%s ", parseB_Number(num));
  }
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
