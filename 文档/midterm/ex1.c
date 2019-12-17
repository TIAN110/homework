#include <stdio.h>
#define MAXLINE 50
int main(void)
{
    int n1=0;
    int n2=0;
    int m =0;

    char s[MAXLINE];

    while ((s[m] =getchar())!=EOF)
    {
        if (s[m] == '\n')
        {
            break;
        }
        m++;
    }
    for (m = 0; s[m] != '\n'; m++){
        if (s[m] == '0'){
            n2++;
        }
    }
    for (m = 0; s[m] != '\n'; m++){
        if (s [m]== 'a'||s[m] == 'A'){
        n1++;
        }
    }
    printf("The number of a is :%d and the number of 0 is:%d\n",n1,n2);
}