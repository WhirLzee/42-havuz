#include <unistd.h>
//#include <stdio.h>
 void print(char c)
{
    write(1, &c,1);
} 
int	ft_strlen(char *str) 
{
    int i;
    i = 0;
     
    while(str[i] != '\0')
        i++;
    char a;
    a = i + '0';
    print(a);

    return(i);
    
}
int main(void)
{
    char *c = "asdasd";
    ft_strlen(c);
}
/*
int main(void)
{
    char *c = "asdasd";
    printf("%d",ft_strlen(c));
}
*/