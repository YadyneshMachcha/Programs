/*1. Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.*/
#include<stdio.h>
void DisplayASCII()
{
char ch=1;
int i=1;
for(i=1;i<127;i++)
{
    printf(" %d  %x  %o %c\n ",ch,ch,ch,ch);
    ch++;
}

}
int main()
{
DisplayASCII();
return 0;
}