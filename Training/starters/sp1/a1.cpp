#include <cstdio>

FILE *in;
FILE*out;
int a,b,c;

int main(){
	in = fopen("addin.txt","r");
	out=fopen("addout.txt","w");
	fscanf(in,"%d %d", &a, &b);
	c=a+b;
	fprintf(out,"%d",c);
	fclose(in);
	fclose(out);
	return 0;
	}