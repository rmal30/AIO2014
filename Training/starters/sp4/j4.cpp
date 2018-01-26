#include <cstdio>
#include <string>
using namespace std;

int main(int argc,char* argv[]) {
	int n;
	
	FILE * in = fopen("jelly.in","r");
	FILE * out=fopen("jelly.out","w");
	
	fscanf(in,"%d", &n);
	int c[n],o[n],t[n],s[n];
	for(int i = 0; i<n; i++){ fscanf(in, "%d %d %d %d",&c[i],&o[i],&t[i],&s[i]);}
	for(int i=0; i<n;i++){fprintf(out,"%d ",c[i]);}
	fprintf(out,"%s","\n");	
	for(int i=0; i<n;i++){fprintf(out,"%d ",o[i]);}
	fprintf(out,"%s","\n");
	for(int i=0; i<n;i++){fprintf(out,"%d ",t[i]);}
	fprintf(out,"%s","\n");
	for(int i=0; i<n;i++){fprintf(out,"%d ",s[i]);}
	fclose(in);
	fclose(out);
}