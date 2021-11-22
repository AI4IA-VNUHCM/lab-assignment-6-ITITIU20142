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
	char *p = strtok(str, " ");
 	int n = 0;
  	char *w[100];
  	while (p != NULL) {
    	w[n] = p;
    	printf("%s\n", w[n]);
    	p = strtok(NULL, " ");
    	n++;
  	}
	int longest_w = strlen(w[0]);
  	int longest_i = 0;
		for (int i = 0; i < n; i++){
			if (strlen(w[i]) > longest_w){
			longest_w = strlen(w[i]);
			longest_i = i;
			}
		}
	int shortest_w = strlen(w[0]);
  	int shortest_i = 0;
  		for (int i = 0; i < n; i++){
			if (strlen(w[i]) < shortest_w){
				shortest_w = strlen(w[i]);
				shortest_i = i;
			}
		}
	printf("Shortest word: %s\n", w[shortest_i]);
	printf("Longest word: %s\n", w[longest_i]);
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
