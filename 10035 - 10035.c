#include <stdio.h>

int main()
{

    while(1)
    {
        char num1[12], num2[12];
        char num_carry = 0; /*for counting carry*/
        char carry = 0;/* at the initiation of addition the carry is zero*/

        scanf("%s %s", num1, num2);

        if (num1[0] == '0' && num2[0] == '0') break;

        char null1, null2, i;

        for( i = 0 ; i < 12; i++)/*for finding the null char*/
        {
            if ( num1[i] == '\0')
            {
                null1 = i;
                break;
            }
        }

        for( i = 0 ; i < 12; i++)/*for finding the null char*/
        {
            if ( num2[i] == '\0')
            {
                null2 = i;
                break;
            }
        }


        for ( i = 1; (null1 - i) >= 0  || (null2 - i) >= 0; i++)
        {

            short dig1, dig2;


            if (null1 - i < 0) dig1 = 0;
            else  dig1 = num1[null1 - i] - 48;

            if (null2 - i < 0) dig2 = 0;
            else  dig2 = num2[null2 - i] - 48;


            if ( dig1 + dig2 + carry > 9)
            {
                num_carry++;
                carry = 1;
            }
            else carry = 0;

        }
        switch (num_carry)
        {
        case 0 :
            printf("No carry operation.");
            break;
        case 1:
            printf("1 carry operation.");
            break;

        default :
            printf("%hd carry operations.", num_carry);
            break;
        }

        printf("%c", '\n');
    }

    return 0;
}
