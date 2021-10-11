/*5. Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65
Octal 0101
Hexadecimal 0X41
*/

#include<stdio.h>
void Display(char ch)
{
if(ch>=65&&ch<=90)
{
    
    printf("Character :%c\nDecimal:%d\nOctal:%o\nHexadecimal:%x",ch,ch,ch,ch);
}
else if(ch>=97&&ch<=122)
{
    
     printf("Character :%c\nDecimal:%d\nOctal:%o\nHexadecimal:%x",ch,ch,ch,ch);
}
else{
     printf("%c",ch);
}
}
int main()
{
char cValue = '\0';
printf("Enter the character");
scanf("%c",&cValue);
Display(cValue);
return 0;
}