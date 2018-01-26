#include <cstdio>


int main() {
	
	FILE * in;
	FILE * out;
	
	int n,d,a,b;
	
	in = fopen("mixin.txt","r");
	out=fopen("mixout.txt","w");
	
	fscanf(in,"%d %d", &n, &d);
	//fscanf(in,"%d",&b);
	a = n/d;
	b = n%d;
	//if(c>b){c=b; l=0;}
	if(b!=0){
	fprintf(out,"%d %d/%d", a, b,d);
}else{
	fprintf(out,"%d", a);
	}
	//fprintf(out,"%d %d", c, l);
	
	fclose(in);
	fclose(out);
	
	return 0;
}