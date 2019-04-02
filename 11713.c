#include <stdio.h>


int main()
{
    char test;
    scanf("%hd", &test);

    getchar();

    while(test--)
    {
        char name1[25], name2[25], value;
        scanf("%s", name1);
        getchar();
        scanf("%s", name2);
        getchar();

        if ( strlen(name1) == strlen(name2) )

        {
            int i;
            for ( i = 0; i < strlen(name1); i++)
            {
                if(name1[i] != name2[i])
                {

                    if((name1[i] == 'a' || name1[i] == 'e' || name1[i] == 'i' || name1[i] == 'o' || name1[i] == 'u') && (name2[i] == 'a' || name2[i] == 'e' || name2[i] == 'i' || name2[i] == 'o' || name2[i] == 'u') )
                        value = 'y';

                    else
                    {
                        value = 'n';
                        break;
                    }


                }
                else value = 'y';
            }
        }


        else value = 'n';

        if(value == 'y') printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
