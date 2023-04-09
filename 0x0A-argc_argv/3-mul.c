#include<stdio.h>
#include<stdlib.h>
#include"main.h"
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
