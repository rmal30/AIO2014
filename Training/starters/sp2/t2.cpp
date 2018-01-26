#include <cstdio>


int main() {
	
	FILE * in;
	FILE * out;
	bool loop = true;
	int e = 0;
	int f;
	in = fopen("taktakin.txt","r");
	out=fopen("taktakout.txt","w");
	
	fscanf(in,"%d", &f);
	while(loop){
		printf("%d %d\n",e,f);
		if(f%11==1){
			fprintf(out,"%d %d",e,f);
			loop=false;
			fclose(in);
			fclose(out);
			return 0;
			}
		else{
			f = f*2;
			e++;
			}
		}
}