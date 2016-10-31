#include <stdio.h>
//#include <string.h>
#include "Func.h"
#include <stdlib.h>

int str_funcs(char *func, char *line) {
	char *str1, *str2, *delim, *str3, *str4, *token;
	int i, val;
	if(mystrcmp(func, "mymemcmp") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t"); 
		delim = mystrtok(NULL, " \t");
		i = atoi(delim);
		val = mymemcmp(str1, str2, i);
		token = mystrtok(NULL, " \t");
		i = atoi(token);
		if(val == i)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mystrcmp") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t"); 
		val = mystrcmp(str1, str2);
		token = mystrtok(NULL, " \t");
		i = atoi(token);
		if(val == i)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mystrncmp") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t"); 
		delim = mystrtok(NULL, " \t");
		i = atoi(delim);
		val = mystrncmp(str1, str2, i);
		token = mystrtok(NULL, " \t");
		i = atoi(token);
		if(val == i)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mystrcat") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t"); 
		str3 = mystrcat(str1, str2);
		token = mystrtok(NULL, " \n");
		i = mystrcmp(str3, token);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mystrncat") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t"); 
		delim = mystrtok(NULL, " \t");
		i = atoi(delim);
		str3 = mystrncat(str1, str2, i);
		token = mystrtok(NULL, " \n");
		i = mystrcmp(str3, token);
		if(i == 0)
			return 1;
		else
			return 0;
	}

	else if(mystrcmp(func, "mymemcpy") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t");
		i = atoi(str2);
		str3 = (char *)malloc(i+1);
		mymemcpy(str3, str1, i);
		token = mystrtok(NULL, " \n");
		i = mystrcmp(str3 , token);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mymemmove") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t");
		i = atoi(str2);
		str3 = (char *)malloc(i+1);
		mymemmove(str3, str1, i);
		token = mystrtok(NULL, " \n");
		i = mystrcmp(str3 , token);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mystrdup") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrdup(str1);
		token = mystrtok(NULL, " \n");
		i = mystrcmp(str2 , token);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mystrndup") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t");
		i = atoi(str2);
		str3 = mystrndup(str1, i);
		token = mystrtok(NULL, " \n");
		i = mystrcmp(str3 , token);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mystrcpy") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = (char *)malloc(mystrlen(str1) + 1);
		str2 = mystrcpy(str2, str1);
		token = mystrtok(NULL, " \n");
		i = mystrcmp(str2 , token);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mystrncpy") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t");
		i = atoi(str2);
		str3 = (char *)malloc(i+1);
		str3 = mystrncpy(str3, str1, i);
		token = mystrtok(NULL, " \n");
		i = mystrcmp(str3, token);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mymemchr") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t");
		str3 = mystrtok(NULL," \t");
		i = atoi(str3);
		str4 = mymemchr(str1, str2, i);
		token = mystrtok(NULL, " \n");
		i = mystrcmp(str4, token);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mystrchr") == 0 || mystrcmp(func, "mystrrchr") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t");
		if(mystrcmp(func, "mystrchr") == 0)
			str3 = mystrchr(str1, str2);
		else
			str3 = mystrrchr(str1, str2);
		token = mystrtok(NULL, " \n");
		i = mystrcmp(str3, token);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mystrspn") == 0 || mystrcmp(func, "mystrcspn") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t");
		if(mystrcmp(func, "mystrspn") == 0)
			i = mystrspn(str1, str2);
		else
			i = mystrcspn(str1, str2) + 1;
		token = mystrtok(NULL, " \n");
		val = atoi(token);
		if(i == val)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mystrpbrk") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t");
		str3 = mystrpbrk(str1, str2);
		token = mystrtok(NULL, " \n");
		i = mystrncmp(str3, token, 1);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mystrstr") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t");
		str3 = mystrstr(str1, str2);
		token = mystrtok(NULL, " \n");
		i = mystrcmp(str3, token);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mymemset") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t");
		str3 = mystrtok(NULL," \t");
		i = atoi(str3);
		mymemset(str1, str2, i);
		token = mystrtok(NULL, " \n");
		i = mystrcmp(str1, token);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "myswab") == 0) {
		str1 = mystrtok(NULL," \t");
		str2 = mystrtok(NULL," \t");
		i = atoi(str2);
		str3 = (char *)malloc(i+1);
		myswab(str1, str3, i);
		token = mystrtok(NULL, " \n");
		i = mystrcmp(str3, token);
		if(i == 0)
			return 1;
		else
			return 0;
	}
	else if(mystrcmp(func, "mystrlen") == 0) {
		str1 = mystrtok(NULL," \t");
		val = mystrlen(str1);
		token = mystrtok(NULL, " \t");
		i = atoi(token);
		if(val == i)
			return 1;
		else
			return 0;
	}
	return 2; 
}


int main(int argc, char *argv[]) {
	FILE *fp = fopen("Test.txt","r");
	char *count, *func; 
	char line[1024];
	int i;
	int j = 1;
	if(fp == NULL) 
		printf("File error.\n");
	while(fgets(line, 1024, fp)) {
		printf("%d) %s", j, line);
		j++;
		count = mystrtok(line, " \t");
		func = mystrtok(NULL," \t");
		//printf("%s %s\n", count, func);
		i = str_funcs(func, line);
		if(i == 1)
			printf("%s has SUCCEEDED.\n\n\n", count);
		else if(i == 0)
			printf("%s has FAILED.\n\n\n", count);
		else
			printf("\n");
	}
	fclose(fp);
}
