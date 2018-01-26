#include <cstdio>


int main() {
	
	FILE * in;
	FILE * out;
	
	int r,s,c,b,l;
	
	in = fopen("sitin.txt","r");
	out=fopen("sitout.txt","w");
	
	fscanf(in,"%d %d", &r, &s);
	fscanf(in,"%d",&b);
	
	c=s*r;
	l=b-c;
	if(c>b){c=b; l=0;}
	printf("%d %d", c,l);
	fprintf(out,"%d %d", c, l);
	
	fclose(in);
	fclose(out);
	
	return 0;
}