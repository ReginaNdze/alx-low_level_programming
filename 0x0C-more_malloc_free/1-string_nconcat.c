#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *string_nconcat - concatinates two strings
  *@s1: first stting to concat
  *@s2: second string to concat
  *@n: number to limit string 2
  *Return: A string on suscess
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int tot1 = 0, tot2 = 0, k;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[tot1] != '\0')
{
tot1++;
}

while (s2[tot2] != '\0')
{
tot2++;
}

if (n > tot2)
n = tot2;
s = malloc((tot1 + n + 1) * sizeof(char));

if (s == NULL)
return (0);
for (k = 0; k < tot1; k++)
{
s[k] = s1[k];
}
for (; k < (tot1 + n); k++)
{
s[k] = s2[k - tot1];
}
s[k] = '\0';
return (s);
}
