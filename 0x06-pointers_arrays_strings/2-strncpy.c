#include "main.h"


/**
 *  * _strncpy -  function that copies a sring 
 *   *dest: buffer string the string copy
 *    * @src: the source string 
 *     * @n: max numbr of byte copied
 *      * Return: returns 
 *       */
 
 
char *_strcpy(char *dest, char *src, int n)
	int i;
	for (i = 0; i <n && src[i] != '\0'; i++)
	dest[i] = '\0';
	   
	   return (dest);
