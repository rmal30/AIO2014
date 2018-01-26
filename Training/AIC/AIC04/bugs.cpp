#include <cstdio>

int main(){
	int year;
	FILE*in = fopen("bugsin.txt","r");
	FILE*out = fopen("bugsout.txt","w");
	fscanf(in,"%d",&year);
	fprintf(out,"%d",(year/7)*7+7);
	fclose(out);
	}