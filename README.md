STRING LIBRARY: 

Name : Amatullah Fakhruddin Sethjiwala
MIS : 111503007	
Description : Implements all functions of String Library


        char* mymemchr(char *str, char ch, int no)
          Searches for the first occurrence of the character ch in the first no bytes of the string pointed to, by the argument str. 	

        int mymemcmp(char *str1, char *str2, int n)
          Compares the first n bytes of str1 and str2.	

        void mymemcpy(char *dest, char *src, int n)
          Copies n characters from src to dest.

        void mymemmove(char *dest, char *src, int n)
          Another function to copy n characters from src to dest but can handle overlapping memory blocks.

        void mymemset(char *str, char ch, int n)
          Copies the character ch to the first n characters of the string pointed to, by the argument str.

        void myswab(char *src, char *dest, int len)
          The function swab copies len bytes from the location referenced by src to the location referenced by dst, swapping adjacent 			bytes.

        char* mystpcpy(char *dest, char *src)
          Copy a string from src to dest, returning a pointer to the end of the resulting string at dest.

        char* mystpncpy(char *dest, char *src, int n)
          Copies at most n characters from the string pointed to by src, including the terminating null byte ('\0'), to the array pointed 		to by dest.

        char* mystrcat(char *dest, char *src)
              	Append the string src to the string dest, returning a pointer dest.

        char* mystrchr(char *str, char ch)
              	Return a pointer to the first occurrence of the character ch in the string str.

	      char* mystrchrnul(char *str, char ch)
		            Similar to strchr(), but retruns the null byte at end of str if ch not found rather than NULL.

        int mystrcmp(char *str1, char *str2)
              	Compare the strings str1 with str2.

        char* mystrcpy(char *dest, char *src)
              	Copy the string src to dest, returning a pointer to the start of dest.

        int mystrcspn(char *str1, char *str2)
              	Calculate the length of the initial segment of str1 which does not contain any of bytes in str[2],

        char* mystrdup(char *src)
              	Return a duplicate of the string src s in memory allocated using malloc(3).

	      char* mystrndup(char *src, int n)
		            Similar to strdup(), but copies at most n bytes. If src is longer than n, only n bytes are copied, and a terminating null byte 			('\0') is added.

 	      char* mystrfry(char *str)
              	Randomly swap the characters in string str.

        int mystrlen(char *str)
              	Return the length of the string str.

        char* mystrncat(char *dest, char *src, int n)
              	Append at most n characters from the string src to the string dest, returning a pointer to dest.

        int mystrncmp(char *str1, char *str2, int n)
              	Compare at most n bytes of the strings str1 and str2.

        char* mystrncpy(char *dest, char *src, int n)
              	Copy at most n bytes from string src to dest, returning a pointer to the start of dest.

        char* mystrpbrk(char *str1, char *str2)
              	Return a pointer to the first occurrence in the string str1 of one of the bytes in the string str2.

        char* mystrrchr(char *str, char ch)
              	Return a pointer to the last occurrence of the character ch in the string str.

        int mystrspn(char *str1, char *str2)
              	Calculate the length of the starting segment in the string str1 that consists entirely of str2.

        char* mystrstr(char *str1, char *str2)
              	Find the first occurrence of the substring str2 in the string str1, returning a pointer to the found substring.

        char* mystrtok(char *str, char *delim)
              	Extract tokens from the string str that are delimited by one of the bytes in delim.
