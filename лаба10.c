#include <stdio.h>
#include <string.h>
int fun(int n)
{
    if(!n)
        return 0;
    return (n % 10) + fun(n / 10);
}
char SpaceKill(char* str, int i ) {
    int n = strlen(str) - 1;
    int j;
    if (str[i]==' ' && str[i+1]==' ') {
        SpaceKill(str, i + 1);
    }
    if (str[i]=="." && str[i+1]== " ") {
        SpaceKill(str, i + 1);
    }
    if (str[i]=="'" && str[i + 1]== "'" ) {
        SpaceKill(str, i + 1 );
    }
    if (str[i]=="(" && str[i + 1]== ")" ) {
        SpaceKill(str, i + 1 );
    }
    for (j = i; j < n; j++)
    {
        str[j]=str[j + 1];
    }
    str[j] = 0;
}
int main() {
    // 4 задание
   /*int num,result;
   printf("Ввидите число ");
    scanf("%d", &num);
    result=fun(num);
    printf("%d\n",result);
    */

    //5 задание
    char str[228];
    int i;
    printf("Введите строку: ");
    gets (str);
    int n = strlen(str);
    for ( i = 0 ; i <  n ;++i) {
        if (str[i] ==' ' && str[i+1] == ' ') {
             (str, i + 1 );
        }
    }
    printf("%s", str);

    return 0;
}