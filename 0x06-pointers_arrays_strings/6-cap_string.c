#include "main.h"


/**
 *  *  cap_string - function that capitalize first charactre of a word
 *   * @str: string to capitalize
 *    * Return: return a capitalized string
 *     
 *      */

char *cap_string(char *str)
{
	int index = o;
	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1]  == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == '\,' ||
                                str[index - 1] == '\.' ||
                                str[index - 1] == '\;' ||
                                str[index - 1] == '\!' ||
                                str[index - 1] == '\?' ||
				 str[index - 1] == '\"' ||
				 str[index - 1] == '\(' ||
				 str[index - 1] == '\)' ||
				 str[index - 1] == '\{' ||
				  str[index - 1] == '\}' ||)
			str[index] -= 32;
		return (str);


