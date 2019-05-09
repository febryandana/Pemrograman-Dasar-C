#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y;
	for(y=1; y<=6; y++){
		for(x=1; x<=5; x++){
			if(y==1 || y==3){
				printf("F");
			} else if((x==1) && (y==2 || y==4 || y==5 || y==6)){
				printf("F");
			} else{
				printf(" ");}
		} printf("\n");
	} printf("\n");
	for(y=1; y<=5; y++){
		for(x=1; x<=5; x++){
			if(y==1 || y==3 || y==5){
				printf("E");
			} else if((x==1) && (y==2 || y==4)){
				printf("E");
			} else{
				printf(" ");}
		} printf("\n");
	} printf("\n");
	for(y=1; y<=7; y++){
		for(x=1; x<=6; x++){
			if((x==1) && (y==1 || y==4 || y==7)){
				printf("BBBB");
			} else if((x==1 || x==5) && (y==2 || y==3 || y==5 || y==6)){
				printf("B");
			} else{
				printf(" ");}
		} printf("\n");
	}
	return 0;
}

/*
FFFFF
F
FFFFF
F
F
F

EEEEE
E
EEEEE
E
EEEEE

BBBB
B   B
B   B
BBBB
B   B
B   B
BBBB
*/
