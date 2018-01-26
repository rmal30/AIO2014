#include <cstdio>


int main() {
	
	FILE * in;
	FILE * out;
	int d,w;
	bool found = false;
	in = fopen("dictin.txt","r");
	out=fopen("dictout.txt","w");
	
	fscanf(in,"%d %d", &d, &w);
	int ild[d], wnld[d], trl[w];
	//int x[q];
	for(int i=0; i<d; i++){fscanf(in, "%d %d", &ild[i], &wnld[i]);}
	for(int j=0; j<w;j++){fscanf(in, "%d", &trl[j]);}
	for(int k=0; k<w; k++){
		found = false;
		for(int l=0; l<d; l++){
			if(trl[k]==ild[l]){
				printf("%d\n",wnld[l]);
				fprintf(out,"%d\n",wnld[l]);
				found = true;
				}
			}
			if(found ==false){
				printf("%s\n","C?");
				fprintf(out,"%s\n","C?");
				}
		}
			
			fclose(in);
			fclose(out);
			return 0;
}