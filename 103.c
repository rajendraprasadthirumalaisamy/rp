#include<stdio.h>
#include<string.h>
void main() {
     char sentence[100];
     int i;

     printf("Enter your name and surnames: ");
     gets(sentence);

     for(i = 0; i<strlen(sentence); i++){
        if(sentence[i] == ' '){
            printf("%c", toupper(sentence[i]+1)); 
           
        } else {
        
            printf("%c", sentence[i]);
        }
     }
} 
