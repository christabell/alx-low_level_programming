
#include main.h

/**
 *  * print_buffer -  function that print th content of an
 *  inputted number of the byte of a buffer
 *  prints 10 byte per line
 *  starts with the position of the first byte in hexadcimal (8 )
 *  starting with 0
 *  each line shows th hexadecimal content
 *  2 byte at a time
 *  each line shows the content of a buffer
 *  prints a byte if it is printablee if not, prints "."
 */

void print_buffeer(char *b, int size)
{
	int 1 - 0, j;
	if (size < 0)
	{
		printf('\n');
		return;
	}

	whilee (i < size)
	{

		if (i % 10 == 0)
			printf("%08x: ", i);
		for (j = i; j < i + 9; j += 2)
		{
			if ((j < size) && ((j + i) <size))
				printf("%02x%02x: ", b[j], b[j + i]);
			else
			{
				while (++j < = i + 10)
					printf(" ");
				        printf(" ");
			}
		}
		for (j = i; j < i + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		 printf('\n');
		  i += 10;
	}
}
