/*Program Name : program to Start
Author : Mr.Chakrit Thammakeasorn
Date : 8/18/63
*/
#include<stdio.h>//Link section : from library stdio.h
void message();//Function phototype declaration section
void cat();//Function phototype declaration section

void main(){
    int animal=5;//Variable declarcation
    printf("Hello World\n");//Executetable part
    printf("%i",animal);//Executetable part
    message();//Function call
    cat();//Function call
}

//Sub function : message
void message(){
    printf("We can take mor sub function\n");
}

//Sub functoin : cat
void cat(){
    printf("I Love My Cat\n");
}
