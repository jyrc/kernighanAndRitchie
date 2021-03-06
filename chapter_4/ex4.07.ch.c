/* ex4.07.ch.c
   This file contains the two functions used for buffered character input by the inverse Polish calculator. It also includes
the ungets file for exercise 4.07*/

#include <stdio.h>
#define BUFSIZE 100

//Define external variables used by both functions.
char buf[BUFSIZE]; //Buffer
int bufp=0; //Next free position in |buf|.

//get a character from the buffer, unless that is empty. In that case, get a character from standard input.
int getch(void){
  return((bufp>0) ? buf[--bufp]:getchar());
}

//put a character into the buffer
void ungetch(int c){
  if(bufp>=BUFSIZE)
    printf("ungetch: too many chacters\n");
  else
    buf[bufp++]=c;
}

void ungets(char s[]){

  int i,size;
  //Calculate the string's size.
  for(size=0;s[size]!='\0';size++);

  //Put the string onto the stack backwards so that it pops off as intended.
  for(i=size-1;i>=0;i--) ungetch(s[i]);

}
