
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void f()
{
    printf("Not operator precedence grammar");
    exit(0);
}

void main()
{

    printf("SHIVAM GUGLANI\n");
    printf("1816110190\n");
    char grm[20][20], c;

    int i, n, j = 2, flag = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", grm[i]);

    for (i = 0; i < n; i++)
    {
        c = grm[i][2];

        while (c != '\0')
        {

            if (grm[i][3] == '+' || grm[i][3] == '-' || grm[i][3] == '*' || grm[i][3] == '/')

                flag = 1;

            else
            {

                flag = 0;
                f();
            }

            if (c == '$')
            {
                flag = 0;
                f();
            }

            c = grm[i][++j];
        }
    }

    if (flag == 1)
        printf("Operator precedence grammar");
}