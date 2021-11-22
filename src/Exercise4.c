/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	 int b= 0;
    int e= 0;
    while(str[e]!='\0') ++e;
    e--;
    while(str[b]== ' ') b++;
    while(str[e]== ' ') e--;
    char *temp;
    int len= e-b+2;
    temp= (char*)malloc(len);
    memset(temp, 0, sizeof(temp));
    for(int i= b; i<= e; i++)
        temp[i-b]= str[i];
    temp[len-1]= '\0';
    printf("%s", temp);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}