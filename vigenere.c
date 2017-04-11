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
    // argc=2
    //check if key is letter
    
    string key = argv[1];
    int lenk = strlen(key);
    int k = 0;
    
    for (k = 0; k < lenk; k++)
        {
            if ((isalpha(key[k]))==0)
            {
                printf("Error\n"); 
                return 1;
            }
        }
    
    //printf("Please insert plaintext\n");
    string p = GetString();
    //printf("lenk = %d\n", lenk);
    int lenp = strlen(p);
    int i = 0;
    int kalpha = 0 ;
   
    
    for (i = 0; i < lenp; i++)
    {   
        if (isalpha(p[i]))
        {
                int l = p[i];
                int s = kalpha%lenk;
                int j = key[s];
                int m1 = l + j -65;
                int m2 = l + j -97;
                
                // p[i] is capital
                if ((l>='A')&&(l<='Z'))
                
                {   //key is capital
                    if((j >='A')&&(j<='Z'))
                        {
                            if(m1 <=90)
                                printf("%c",m1);
                            else
                                printf("%c",m1-26);
                        }
                    // key is lower case
                    if((j >='a')&&(j<='z'))
                        {
                            if(m2 <=90)
                                printf("%c",m2);
                            else
                                printf("%c",m2-26);
                        }    
                }
                
                // p[i] is lower case
                else
                {
                    if((j >='A')&&(j<='Z'))
                    {
                        if(m1 <=122)
                            printf("%c",m1);
                        else
                            printf("%c",m1-26);
                    }
                    
                    if((j >='a')&&(j<='z'))
                    {
                        if(m2 <=122)
                            printf("%c",m2);
                        else
                            printf("%c",m2-26);
                    }
                }
                
                //printf("p[%d] = %c key[%d] = %c  s = %d \n", i,p[i],s, key[s], s);
                kalpha = kalpha +1;
                //kalpha++;
                
        }
        else
        {
            printf("%c",p[i]); 
        }
    }

    printf("\n");    
    return 0;
}