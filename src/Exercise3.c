/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	int len = strlen(str);
	int start_i = 0, end_i = 0;
	int min_len=len, min_index=0, max_len=0, max_index=0;
	while (end_i<=len){
		if(end_i<len && str[end_i] != '\0')
		end_i++;
		else{
			int cur_len = end_i-start_i;
			if (cur_len<min_len){
				min_len=cur_len;
				min_index=start_i;
			}
			if (cur_len>max_len){
				max_len=cur_len;
				max_index=start_i;
			}
			end_i++;
			start_i = end_i;
		}
	}
	char minstr[min_len];
	memcpy( minstr, &str[min_index], min_len);
	char maxstr[max_len];
	memcpy( maxstr, &str[max_index], max_len);
	printf("Shortest word: %s\n", minstr);
	printf("Longest word: %s", maxstr);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
