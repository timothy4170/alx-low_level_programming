#include "main.h"
/**
 * 0_strcat cocatenates two strings
 * @ dest: input value
 * @src: input value
 *
 * return: void

*/ 

char *_strcat(char * dest, char *src)
{
	int i;
	int j;
	i=0;
	while (dest[i])
	{
			i++;
	}
	j=0;
	while (scr[j] !='\0')
	{
			dest[i]=src[j];
				i++;
				j++;
	}
	dest [i]=0
	return(dest);
}
