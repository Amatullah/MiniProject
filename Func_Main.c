#include <stdio.h>
#include <string.h>
#include "Func.h"
#include <stdlib.h>

int str_funcs(char *func, char *line) {
	char *str1, *str2, *delim, *str3, *str4, ch, *token;
	int i, val;
	if(strcmp(func, "mymemcmp") == 0) {
		str1 = strtok(NULL," ");
		str2 = strtok(NULL," "); 
		delim = strtok(NULL, " ");
		i = atoi(delim);
		val = mymemcmp(str1, str2, i);
		token = strtok(NULL, " ");
		i = atoi(token);
		if(val == i)
			return 1;
		else
			return 0;
	}
	else if(strcmp(func, "mystrcmp") == 0) {
		str1 = strtok(NULL," ");
		str2 = strtok(NULL," "); 
		val = mystrcmp(str1, str2);
		token = strtok(NULL, " ");
		i = atoi(token);
		if(val == i)
			return 1;
		else
			return 0;
	}
	else if(strcmp(func, "mystrncmp") == 0) {
		str1 = strtok(NULL," ");
		str2 = strtok(NULL," "); 
		delim = strtok(NULL, " ");
		i = atoi(delim);
		val = mystrncmp(str1, str2, i);
		token = strtok(NULL, " ");
		i = atoi(token);
		if(val == i)
			return 1;
		else
			return 0;
	}
	else if(strcmp(func, "mystrcat") == 0) {
		str1 = strtok(NULL," ");
		str2 = strtok(NULL," "); 
		str3 = mystrcat(str1, str2);
		token = strtok(NULL, " \n");
		i = strcmp(str3, token);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(strcmp(func, "mystrncat") == 0) {
		str1 = strtok(NULL," ");
		str2 = strtok(NULL," "); 
		delim = strtok(NULL, " ");
		i = atoi(delim);
		str3 = mystrncat(str1, str2, i);
		token = strtok(NULL, " \n");
		i = strcmp(str3, token);
		if(i == 0)
			return 1;
		else
			return 0;
	}

	/*else if(strcmp(func, "mymemcpy") == 0) {
		str1 = strtok(NULL," ");
		str2 = strtok(NULL," ");
		i = atoi(str2);
		mymemcpy(str3, str1, i);
		token = strtok(NULL, " ");
		i = strcmp(str3 , token);
		if(i == 0)
			return 1;
		else
			return 0;
	}*/
	return 2; 
}


int main(int argc, char *argv[]) {
	FILE *fp = fopen("Test.txt","r");
	char *count, *func; 
	char line[1024];
	int i;
	int j = 0;
	if(fp == NULL) 
		printf("File error.\n");
	while(fgets(line, 1024, fp)) {
		printf("%d) %s", j, line);
		j++;
		count = strtok(line, " ");
		func = strtok(NULL," ");
		//printf("%s %s\n", count, func);
		i = str_funcs(func, line);
		if(i == 1)
			printf("%s has SUCCEEDED.\n\n", count);
		else if(i == 0)
			printf("%s has FAILED.\n\n", count);
	}
	fclose(fp);
}
