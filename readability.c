#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int main(){
int c=0,w=0,sent=0;
string s=get_string("Text:");
for(int i=0;s[i]!='\0';i++){
    if(isalpha(s[i])){
        c++;
    }
    if(s[i]==' '){
        w++;
    }
    if(s[i]=='.'||s[i]=='!'||s[i]=='?'){
        sent++;
    }
}
      if (strlen(s) > 1) {
        w++;
    }

float L=((float)c/w)*100;
float S=((float)sent/w)*100;
float index=0.0588 * L - 0.296 * S - 15.8;
int grade=round(index);
if(grade<1){
    printf("Before Grade 1\n");
}
else if(grade>=16){
    printf("Grade 16+\n");
}
else{
    printf("Grade %i\n",grade);
}
}
