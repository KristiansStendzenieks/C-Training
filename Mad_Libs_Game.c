#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s %s", celebrityF, celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);


    return 0;
}

/*---------------------------
// using fgets() instead of scanf()

char color[50];
char pluralNoun[50];
char celebrity[50];

printf("Enter color: ");
fgets(color, 50, stdin);

printf("Enter plural noun: ");
fgets(pluralNoun, 50, stdin);

printf("Enter celebrity: ");
fgets(celebrity, 50, stdin);

printf("Roses are %s \n", color);
printf("%s are blue \n", pluralNoun);
printf("I love %s \n", celebrity);*/
