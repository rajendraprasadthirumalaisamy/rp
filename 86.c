#include <stdio.h>
void main()
{
    char s[100];
    int i,j,count=0;
    printf("enter the string\n");
    scanf("%s",s);

    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
            count++;
               }
        }
    }
        if(count==0)
        {
        printf("it is isogram");
        }
        else{
        printf("its not isogram");
        }   
}
