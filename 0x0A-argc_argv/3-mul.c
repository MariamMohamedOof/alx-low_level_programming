#include"main.h"
#include<stdio.h>
/**
 * _atoi - convert string to integer.
 * @s:the string to be converted.
 *
 * Return: the integer value of converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do{
		if(*s == '-')
			sign*=-1;

		else if(*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	}
	while (*s++);

	return (num * sign);
}
/**
 * main - prints the multiplication of 2 numbers
 * @argc:number of arguments
 * @argv:array of arguments
 * Return:0-success, non-zero-fail.
 */
int main(int argc, char *argv[])
{
        int mul;

        if (argc == 3)
        {
                mul = atoi(argv[1] * atoi(argv[2]);
                printf("%d\n", mul);
        }
        else
        {
        printf("Error\n");
        return (1);
        }
}
