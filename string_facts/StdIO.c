/*
Compiled On: Codebolocks 13.12;
Source Code: C 
Platfrom: I use Ubuntu 14.04 LTS but this code will run in several platfrom using compiler of that platfrom
Programmer: Md. Mukit Khan
Email: mukitkhan07@gmail.com.

N.B for New Coders:
               " Never use gets(). Because it is impossible to tell without knowing the data 
                in advance how many characters gets() will read,
                and because gets() will continue to store characters past the end of the buffer, 
                it is extremely dangerous to use. It has been used to break computer security. Use fgets() instead."
                  &&
                  scanf(" %[^\n]s",name);

                      \n just sets the delimiter for the scanned string.
                      &&
                  
                  scanf ("%[^\n]%*c", name) ;

The [] is the scanset character. [^\n] tells that while the input is not a newline ('\n') take input. 
Then with the %*c it reads the newline character from the input buffer (which is not read), and 
the * indicates that this read in input is discarded (assignment suppression), as you do not need it
, and this newline in the buffer does not create any problem for next inputs that you might take.



*/

#include<stdio.h>
#include<string.h>
#define size 1000000
int main(){
int length, cas;
char A[size];
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

scanf("%d\n",&cas);

while(cas--){
//fgets (A, 1000000, stdin);
scanf(" %[^\n]s",A);// remember to use sapce before  %[^\n]s

length=strlen(A);
printf("%s\n",A);




}
return 0;

}
