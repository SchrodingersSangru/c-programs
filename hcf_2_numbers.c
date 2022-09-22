#include <stdio.h>
int main()
{
    int num1, num2, i, hcf;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    for(i=1; i <= num1 && i <= num2; ++i)
    {
        // Checks if i is factor of both integers
        if(num1%i==0 && num2%i==0)
            hcf = i;
    }

    printf("G.C.D of %d and %d is %d", num1, num2, hcf);

    return 0;
}
