#include <cstdio>
#include <string>
using namespace std;

int main() {
	
	bool none = true;
	
	FILE * in = fopen("meow.in","r");
	FILE * out=fopen("meow.out","w");
	int n,a;
	fscanf(in,"%d", &n);
	for(int i = 0; i<n; i++){
		none = true;
		for(int j = 0; j<n;j++){
			fscanf(in,"%d ", &a);
			if(a>0){
				fprintf(out,"%d ",j+1);
				none = false;
				}
			}
			if(none){
				fprintf(out,"%s", "Purr");
				}
			fprintf(out,"%s","\n");	
		}
		
	fclose(in);
	fclose(out);
}