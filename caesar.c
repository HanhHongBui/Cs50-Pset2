#include <stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, char* argv[])

{
    if (argc!=2) 
    {
        printf("Error\n"); 
        return 1;
    }
        
    int k = atoi (argv[1]);
    string p = GetString();
    for (int i = 0, n = strlen(p); i < n; i++)
        {   
            int l = p[i];
            int m = l + (k % 26);
            
            if ((l>='a') && (l<='z'))
                {
                    if(m <= 122)
                        printf("%c",m);
                    else
                        printf("%c",m-26);
                }
                
            else if ((l>='A')&& (l <='Z'))
                {
                    if(m <=90)
                        printf("%c",m);
                    else
                        printf("%c",m-26);
                }
            
            else
                printf("%c",p[i]);
        }
            
    printf("\n");
    return 0;
}