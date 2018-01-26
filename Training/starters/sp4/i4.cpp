#include <cstdio>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	char lines[10000][100];
	FILE * in;
	FILE * out;
	int error;
	//char str[10000][10000];
	in =fopen("input.txt","r");
	out=fopen("output.txt","w");
	int line=0;
	while(error!=EOF){
		if(line>10000){exit(0);}
		error =fscanf(in,"%c",&lines[line]);
		line++;	
		printf("%s",lines[]);
	}
	
	printf("%c",lines[0][0]);
	fclose(in);
	fclose(out);
}