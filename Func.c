#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "Func.h"

char* mymemchr(char *str, char ch, int no) {
	int i;
	for(i = 0; i < no; i++) {
		if(str[i] == ch)
			 return &str[i];
	}
	return NULL;
} 

int mymemcmp(char *str1, char *str2, int n) {
	int diff, i;
	for(i = 0; i < n; i++) {
		diff = str1[i] - str2[i];
		if(diff != 0) {
			if(diff > 0)
				return 1;
			else
				return -1;
		}
	}
	return 0;
}

void mymemcpy(char *dest, char *src, int n) {
	int i;
	for (i = 0; i < n ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}

void mymemmove(char *dest, char *src, int n) {
	int i = 0, diff = dest - src;
	int lensrc = 0;
	while(src[lensrc++] != '\0');
	if(diff < 0) 
		diff *= -1;
	if(diff < lensrc) {
		for(i = lensrc - 1; i >= 0; i--) 
			src[i + diff] = src[i];
		src[diff + n] = '\0';
	}
	else { 
		for (i = 0; i < n; i++)
			dest[i] =  src[i];
		dest[i] = '\0';
	}
}


void mymemset(char *str, char ch, int n) {
	int i;
	for(i = 0; i < n; i++) 
		str[i] = ch;
}

void myswab(char *src, char *dest, int len) {
	int i;
	if(len % 2 != 0)
		len--;
	for(i = 0; i < len; i++) {
		dest[i] = src[i+1];
		dest[i+1] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char* mystpcpy(char *dest, char *src) {
	int i;
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return &dest[i];
}

char* mystpncpy(char *dest, char *src, int n) {
	int i;
	for (i = 0; i < n ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return &dest[i];
}

char* mystrdup(char *src) {
	char *ptr = (char *)malloc(mystrlen(src)+1);
	mystrcpy(ptr, src);
	return ptr;
}

char* mystrndup(char *src, int n) {
	char *ptr = (char *)malloc(n+1);
	mystrncpy(ptr, src, n);
	return ptr;
}

int mystrlen(char *str) {
	int i = 0;
	while(str[i] != '\0') 
		i++;
	return i;
}

char* mystrcat(char *dest, char *src) {
	int i = 0 , j;
	if(isprint(dest[0])) {
		for(i = 0; dest[i] != '\0'; i++) ;
	}
	for(j = 0; src[j] !='\0'; i++, j++)
		dest[i] = src[j];
	dest[i] = '\0';
	return dest;
}

char* mystrchr(char *str, char ch) {
	int i;
	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] == ch)
			 return &str[i];
	}
	return NULL;
} 

int mystrcmp(char *str1, char *str2) {
	int diff, i;
	for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
		diff = str1[i] - str2[i];
		if(diff != 0){
			if(diff > 0)
				return 1;
			else
				return -1;
		}
	}
	
	if(i < mystrlen(str1))
		return 1;
	if(i < mystrlen(str2))
		return -1;
	return 0;
}

char* mystrcpy(char *dest, char *src) {
	int i;
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return dest;
}

int mystrcspn(char *str1, char *str2) {
	int i;
	for(i = 0; str1[i] != '\0';) {
	        if(mystrchr(str2,str1[i]))
            		return i;
        	else
            		i++;
	}
    	return i;
}


char* mystrncat(char *dest, char *src, int n) {
	int i = 0 , j;
	if(isprint(dest[0])) {
		for(i = 0; dest[i] != '\0'; i++) ;
	}
	for(j = 0; j < n; i++, j++)
		dest[i] = src[j];
	dest[i] = '\0';
	return dest;
}

int mystrncmp(char *str1, char *str2, int n) {
	int diff, i;
	for(i = 0; i < n && str1[i] != '\0' && str2[i] != '\0'; i++) {
		diff = str1[i] - str2[i];
		if(diff != 0) {
			if(diff > 0)
				return 1;
			else
				return -1;
		}
	}
	return 0;
}

char* mystrncpy(char *dest, char *src, int n) {
	int i;
	for (i = 0; i < n ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return dest;
}

char* mystrpbrk(char *str1, char *str2) {
	int i;
	for(i = 0; str1[i] != '\0'; i++) {
        	if(mystrchr(str2, str1[i]))
            		return &str1[i];
	}
    	return NULL;
}

char* mystrrchr(char *str, char ch) {
	int i;
	char *res = NULL;
	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] == ch)
			 res =  &str[i];
	}
	return res;
}

char* mystrchrnul(char *str, char ch) {
	int i;
	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] == ch)
			 return &str[i];
	}
	return &str[i];
} 
 

int mystrspn(char *str1, char *str2) {
	int i = 0;
	while(mystrchr(str2,str1[i]))
		i++;
	return i;
}

char* mystrstr(char *str1, char *str2) {
	char *begin, *substr;	
	while(*str1) {
		begin = str1;
		substr = str2;
		while(*str1 && *substr && *str1 == *substr) {
			*str1++;
			*substr++;
		}
		while(!*substr) 
			return begin;
		str1 = begin + 1;
	}
	return NULL;
}

char* mystrtok(char *str, char *delim) {
    	static char *sptr = NULL;
    	if(str != NULL)
		sptr = str;
    	else if(sptr == NULL)
        	return NULL;
	int i = 0;
	while(mystrchr(delim,sptr[i]) && sptr[i])
		i++;
	str = sptr + i;
	for(i = 0; str[i] != '\0';) {
	        if(mystrchr(delim,str[i]))
            		break;
        	else
            		i++;
	}
	sptr = str + i;
	if(sptr == str) 
	        return sptr = NULL;
	if((*sptr) != '\0') {
		*sptr = '\0'; 
		sptr = sptr + 1;
	}
	else 
		sptr = NULL;
	return str;
}

char* mystrfry(char *str) {
	srand(time(NULL));
	int i, no1, no2;
	int j = mystrlen(str);
	char temp;
	for(i = 0; i < j; i++) {
		no1 = rand() % j;
		no2 = rand() % j;
		temp = str[no1];
		str[no1] = str[no2];
		str[no2] = temp;
	}
}


