#include<stdlib.h>
#include<stdio.h>
#include<string.h>
  
void f()
{
    printf("Not operator grammar");
    exit(0);
}
  
void main()
{
    char grm[20][20], c;
  
    // Here using flag variable,
    // considering grammar is not operator grammar
    int i, n, j = 2, flag = 0;
  
    // taking number of productions from user
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", grm[i]);
  
    for (i = 0; i < n; i++) {
        c = grm[i][2];
  
        while (c != '\0') {
  
            if (grm[i][3] == '+' || grm[i][3] == '-'
                || grm[i][3] == '*' || grm[i][3] == '/')
  
                flag = 1;
  
            else {
  
                flag = 0;
                f();
            }
  
            if (c == '$') {
                flag = 0;
                f();
            }
  
            c = grm[i][++j];
        }
    }
  
    if (flag == 1)
        printf("Operator grammar");
}
