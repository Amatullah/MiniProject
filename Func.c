/*
 **********************************************************************
 * Copyright (C) 2016  STRING LIBRARY Amatullah Sethjiwala (111503007)

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.

 *********************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "Func.h"


char* mymemchr(char *str, char *ch, int no) {
	int i;
	for(i = 0; i < no && *str; i++) {
		if(*str == ch[0])
			 return str;
		*str++;
	}
	return NULL;
} 

int mymemcmp(char *str1, char *str2, int n) {
	int diff, i;
	for(i = 0; i < n && *str1 && *str2; i++) {
		diff = (*str1++) - (*str2++);
		if(diff != 0) {
			if(diff > 0)
				return 1;
			else
				return -1;
		}
	}
	if(i >= n) 
		return 0; 
	if(*str1)
		return 1;
	if(*str2)
		return -1;
	return diff;
}

void mymemcpy(char *dest, char *src, int n) {
	int i;
	for (i = 0; i < n ; i++)
		*dest++ = *src++;
	*dest = '\0'; 
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
			*dest++ =  *src++;
		*dest = '\0';
	}
}


void mymemset(char *str, char *ch, int n) {
	int i;
	for(i = 0; i < n && *str; i++) 
		*str++ = *ch;
}

void myswab(char *src, char *dest, int len) {
	int i;
	if(len % 2 != 0)
		len--;
	for(i = 0; i < len && src[i] != '\0'; i++) {
		dest[i] = src[i+1];
		dest[i+1] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char* mystpcpy(char *dest, char *src) {
	while(*src)
		*dest++ = *src++;
	*dest = '\0';
	return dest;
}

char* mystpncpy(char *dest, char *src, int n) {
	int i;
	for (i = 0; i < n && *src; i++)
		*dest++ = *src++;
	*dest = '\0';
	return dest;
}

char* mystrdup(char *src) {
	if(src) {
		char *ptr = (char *)malloc(mystrlen(src)+1);
		mystrcpy(ptr, src);
		return ptr;
	}
	else
		return NULL;
}

char* mystrndup(char *src, int n) {
	if(src) {
		char *ptr = (char *)malloc(n+1);
		mystrncpy(ptr, src, n);
		return ptr;
	}
	else
		return NULL;

}

int mystrlen(char *str) {
	int i = 0;
	while(*str++) 
		i++;
	return i;
}

char* mystrcat(char *dest, char *src) {
	char *temp;
	temp = dest;
	if(isprint(*dest))
		while(*dest)
			dest++;
	while(*src)
		*dest++ = *src++;
	*dest = '\0';
	return temp;
}

char* mystrchr(char *str, char *ch) {
	while(*str) {
		if(*str == ch[0])
			 return str;
		*str++;
	}
	return NULL;
} 

int mystrcmp(char *str1, char *str2) {
	int diff;
	while (*str1 && *str2) {
		diff = (*str1++) - (*str2++);
		if(diff != 0) {
			if(diff > 0)
				return 1;
			else
				return -1;
		}
	}
	
	if(*str1)
		return 1;
	if(*str2)
		return -1;
	return 0;
}

char* mystrcpy(char *dest, char *src) {
	char *temp = dest;
	while(*src)
		*dest++ = *src++;
	*dest = '\0';
	return temp;
}

int mystrcspn(char *str1, char *str2) {
	int i = 0;
	while(*str1) {
	        if(mystrchr(str2,str1))
            		return i;
        	else {
			*str1++;
            		i++;
		}
	}
    	return i;
}


char* mystrncat(char *dest, char *src, int n) {
	int j; char *temp;
	temp = dest;
	if(isprint(*dest)) 
		while(*dest)
			dest++;
	for(j = 0; j < n && *src; j++)
		*dest++ = *src++;
	*dest = '\0';
	return temp;
}

int mystrncmp(char *str1, char *str2, int n) {
	int diff, i;
	for(i = 0; i < n && *str1 && *str2; i++) {
		diff = (*str1++) - (*str2++);
		if(diff != 0) {
			if(diff > 0)
				return 1;
			else
				return -1;
		}
	}
	if(i >= n) 
		return 0;
	if(*str1)
		return 1;
	if(*str2)
		return -1;
	return diff;
}

char* mystrncpy(char *dest, char *src, int n) {
	int i;
	char *temp = dest;
	for (i = 0; i < n && *src ; i++)
		*dest++ = *src++;
	*dest = '\0';
	return temp;
}

char* mystrpbrk(char *str1, char *str2) {
	while(*str1) {
		if(mystrchr(str2, str1))
			return str1;
		str1++;
	}
    	return NULL;
}

char* mystrrchr(char *str, char *ch) {
	char *res = NULL;
	while(*str) {
		if(*str == ch[0])
			 res = str;
		*str++;
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
	while(mystrchr(str2, str1++))
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
	while(mystrchr(delim, &sptr[i]) && sptr[i])
		i++;
	str = sptr + i;
	for(i = 0; str[i] != '\0';) {
	        if(mystrchr(delim, &str[i]))
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
	return str;
}


