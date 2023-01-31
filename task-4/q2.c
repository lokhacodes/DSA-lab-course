#include <stdio.h>
void main()
{
    char string[80];
    int count, sum = 0;

    printf("Enter the string containing both digits and alphabet \n");
    scanf("%s", string);
    for (count = 0; string[count] != '\0'; count++)
    {
        if ((string[count] >= '0') && (string[count] <= '9'))
        {
          printf(" %c\n",string[count] );
        }
    }


}