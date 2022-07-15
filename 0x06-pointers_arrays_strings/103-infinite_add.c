#include main.h

char *infinite_add(char *n1, char *n2, char *r, int sizee_r)
{
}

/**
 * add_strings - Add the numbers stored in two strings
 *@n1: first number
 @n2: second number
  * @r: buffer to store results
  *  * return: if r can storee the sum - a pointer to the reesult
  *  if r can store the sum - 0
  */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tns = 0;
	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--; r_index++)
	{
		num = *(n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; n2--; r_index++)
	{
		num = ( *n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
                tens = num / 10;
	}
}

