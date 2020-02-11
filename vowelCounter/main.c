#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
    int  vowels, constants, spaces, digits;

    printf("Enter a string: ");
    gets(str);

    ptr=str;

    vowels=constants=spaces=digits=0;

    while(*ptr!='\0')
    {
        if(*ptr == ' ')
            ++spaces;

        if(isdigit(*str))
            ++digits;

        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
            ++vowels;

        if(*ptr=='b' ||*ptr=='B' ||*ptr=='c' ||*ptr=='C' ||*ptr=='d' ||*ptr=='D' ||*ptr=='f' ||*ptr=='F' ||*ptr=='g' ||*ptr=='G'
           ||*ptr=='h' ||*ptr=='H' ||*ptr=='j' ||*ptr=='J' ||*ptr=='k' ||*ptr=='K' ||*ptr=='l' ||*ptr=='L' ||*ptr=='m' ||*ptr=='M'
           ||*ptr=='n' ||*ptr=='N' ||*ptr=='p' ||*ptr=='P' ||*ptr=='q' ||*ptr=='Q' ||*ptr=='r' ||*ptr=='R' ||*ptr=='s' ||*ptr=='S'
           ||*ptr=='t' ||*ptr=='T' ||*ptr=='v' ||*ptr=='V' ||*ptr=='w' ||*ptr=='W' ||*ptr=='x' ||*ptr=='X' ||*ptr=='y' ||*ptr=='Y'||*ptr=='z'
           ||*ptr=='Z')
            ++constants;
        ++ptr;

    }

    printf("Total number of: \nvowels: %d\nconstants: %d\ndigits: %d\nspaces: %d ",vowels,constants,digits,spaces);
    return 0;
}
