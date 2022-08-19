#include <stdio.h>
#include <string.h>

int main()
{
    //Length-----------------------------------------------
    char t[6] = "AAAAAAA";
    printf("Length of <%s> is %d.\n", t, (int)strlen(t));
    //-----------------------------------------------------

    //Copy-------------------------------------------------
    char s1[100], s2[100];
    strcpy(s1, "First String");
    strcpy(s2, "Second String");

    puts( "\nOriginal strings: " );
    puts(s1);
    puts(s2);

    strcpy(s2,s1);

    puts( "\nNew strings: " );
    puts(s1);
    puts(s2);

    strcpy(s1, "Third String");
    strncpy(s2, s1, 3);
    puts("\nNew strings: ");
    puts(s1);
    puts(s2);
    //-----------------------------------------------------

    //Concatenation----------------------------------------
    strcpy(s1, "abcde");
    strcpy(s2, "xyz");
    strcat(s1, s2);
    puts("\nConcatenated strings: ");
    puts(s1);
    //-----------------------------------------------------

    //Comparison-------------------------------------------
    strcpy(s1, "abcde");
    strcpy(s2, "adcde");

    printf("Difference is: %d\n", strcmp(s2, s1));
    //-----------------------------------------------------
}
