#include "main.h"


/**
 *  * _strcat - concatenates the string to by @src
 *   *dest: appnded string
 *    * @src: string to be concatenated
 *     * Return: returns pointer to @dest
 *      */
 
 
char *_strcat(char *dest, char *src)

	   int index = 0, dest_len = 0;
	      while (dest[index++])
	   dest[dest_len++] = src[index];
	      
	      return (dest);
