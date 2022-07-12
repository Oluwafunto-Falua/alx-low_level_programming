#include "main.c"
/**
* _strlen - returns length of string
* @s: string
* Return: length of string
*/
int _strlen(char *s)
{
i
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
