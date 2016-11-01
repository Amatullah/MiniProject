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

char* mymemchr(char *str, char *ch, int no);
int mymemcmp(char *str1, char *str2, int n);
void mymemcpy(char *dest, char *src, int n);
void mymemmove(char *dest, char *src, int n);
void mymemset(char *str, char *ch, int n);
void myswab(char *src, char *dest, int len);
char* mystpcpy(char *dest, char *src);
char* mystpncpy(char *dest, char *src, int n);
char* mystrdup(char *src);
char* mystrndup(char *src, int n);
int mystrlen(char *str);
char* mystrfry(char *str);
char* mystrcat(char *dest, char *src);
char* mystrchr(char *str, char *ch);
int mystrcmp(char *str1, char *str2);
char* mystrcpy(char *dest, char *src);
int mystrcspn(char *str1, char *str2);
char* mystrncat(char *dest, char *src, int n);
int mystrncmp(char *str1, char *str2, int n);
char* mystrncpy(char *dest, char *src, int n);
char* mystrpbrk(char *str1, char *str2);
char* mystrrchr(char *str, char *ch);
char* mystrchrnul(char *str, char ch);
int mystrspn(char *str1, char *str2);
char* mystrstr(char *str1, char *str2);
char* mystrtok(char *str, char *delim);
