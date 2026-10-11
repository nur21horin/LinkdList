#include<stdio.h>
int main(){
    //create file
    FILE*file;

    file=fopen("Testfile1.txt","w");
    fclose(file);

    file=fopen("Testfile1.txt","w");

    fprintf(file,"This is our first text.");
    fclose(file);

    file=fopen("Testfile1.txt","a");
    fprintf(file,"\n In this file we want to ....");
    fclose(file);
    file=fopen("Testfile1.txt","a");
    fprintf(file,"\n mamur beta daffodil ");

    //read text from file 
     file=fopen("Testfile1.txt","r");
     char text[100];
     while(fgets(text,100,file)){
     printf("%s",text);
     }
     fclose(file);


    
    return 0;
}