#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
void upper(string s){
  int i=0;
  while(s[i]!='\0'){
    s[i]=toupper(s[i]);
    i++;
  }
}
int Score(string s){
  int score =0;
  int i=0;
  for(i=0;s[i]!='\0';i++){
    char C = s[i];
    if(C=='A'||C=='E'||C=='I'||C=='L'||C=='N'||C=='O'||C=='R'||C=='S'||C=='T'||C=='U'){
      score+=1;
    }
    else if(C=='B'||C=='C'||C=='M'||C=='P'){
      score+=3;
    }
    else if(C=='D'||C=='G'){
      score+=2;
    }
    else if(C=='F'||C=='H'||C=='V'||C=='W'||C=='Y'){
      score+=4;
    }
    else if(C=='J'||C=='X'){
      score+=8;
    }
    else if(C=='K'){
      score+=5;
    }
    else if(C=='Q'||C=='Z'){
      score+=10;
    }
    else{
      score+=0;
    }

  }
return score;
}
int main(){
    string s1=get_string("Player 1: ");
    string s2=get_string("Player 2: ");
    upper(s1);
    upper(s2);
    int scr1=Score(s1);
    int scr2=Score(s2);
    if(scr1>scr2){
      printf("Player 1 wins!\n");
    }
    else if(scr1<scr2){
      printf("Player 2 wins!\n");
    }
    else{
      printf("Tie!\n");
    }
    return 0;
}








