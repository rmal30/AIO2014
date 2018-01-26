#include <cstdio>


int main() {
	
	FILE * in;
	FILE * out;
	bool loop = true;
	int e = 1;
	int f;
	in = fopen("countin.txt","r");
	out=fopen("countout.txt","w");
	
	fscanf(in,"%d", &f);
	while(loop){
		
		if(e<f){
			printf("%d\n",e);
			fprintf(out,"%d\n",e);
			e++;
			}else if(e==f){
				printf("%d",e);
				fprintf(out,"%d",e);
				e++;
				}
		else{
			loop=false;
			fclose(in);
			fclose(out);
			return 0;
			}
		}
}