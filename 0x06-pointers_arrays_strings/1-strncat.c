/**
 * _strcat function that concatinate two strings
 * @dest: pointer to destination input
 * @src: pointr to source input
 * @n: most number of bytes from @src
 * Return:  @dest
 * 
 */
 
char *_strcat(char *dest, char *src, int n)
{
int c, 1;
c = 0;
  /*find the size of dest array*/
while (dest[c])
c++;
  /*src does not have to be NULL terminated
   * if it contains n or more bytes
   */
for (i = 0; i < n && src[i] ! = '\0'; i++)
dest[c + i] = src[i];
  /*terminate dest*/
dest[c + i] = '\o';
return (dest);
}
