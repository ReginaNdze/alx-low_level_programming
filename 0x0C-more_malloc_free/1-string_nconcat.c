#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *string_nconcat - concatinates two strings
  *@s1: first stting to concat
  *@s2: second string to concat
  *Return: A string on suscess
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *TotalString;
	unsigned int i;
	unsigned int j;
	unsigned int len1;
	unsigned int len2;

	len1 = strlen(s1);
	len2 = strlen(s2);
TotalString = malloc(sizeof(char) * (len1 + len2));

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
/*while (s1[i] != '\0')
*{
*	len1++;
*	i++;
*}
*while (s2[j] !='\0')
*{
*	len2++;
*	j++;
}
*/
if (len2 > n)
	len2 = n;
if (TotalString == NULL)
	return (NULL);
for (i = 0; i < len1; i++)
{
	TotalString[i] = s1[i];
}
for (j = 0; j < len2; j++, i++)
{
	TotalString[i] = s2[j];
}
TotalString[len1 + len2] = '\0';
return (TotalString);
}
