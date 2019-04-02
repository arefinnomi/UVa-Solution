#include <stdio.h>


int main()
{
    char test;
    scanf("%d", &test);

    while(test--)
    {
        char word[6];
        scanf("%s", word);

        char count; /*for counting the length of string*/

        char num;

        for(count = 1 ; word[count-1] != '\0'; count++) ;


        if (count == 6) num = 3;

        else if( word[0] == 'o' || word[0] == 'n' || word[0] == 'e') num = 1;

        else num = 2;

        printf("%d\n", num);

    }

    return 0;
}
