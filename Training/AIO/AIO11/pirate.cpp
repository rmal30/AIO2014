#include <cstdio>
int main() {
	FILE * in = fopen("piratein.txt","r");
	FILE * out= fopen("pirateout.txt","w");
	int l,x,y;
	fscanf(in,"%d\n %d\n %d", &l,&x,&y);
	if(2*l-x-y<x+y){ fprintf(out,"%d",2*l-x-y);}
	else{fprintf(out,"%d",x+y);}
	fclose(in); fclose(out);
}