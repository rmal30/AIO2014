#include <cstdio>

int main(){
	int f;
	FILE *in = fopen("listin.txt","r");
	FILE * out = fopen("listout.txt","w");
	fscanf(in, "%d",&f);
	int a,b;
	int freq[1001];
	int max = 0;
	for(int id=0; id<1001; id++){freq[id] = 0;}
	for(int i=0; i<f; i++){
		fscanf(in, "%d %d", &a,&b);
		freq[a]++;
		freq[b]++;
		}
	
	for(int i=0; i<1001;i++){
		if(freq[i]>=max){max = freq[i];}
		}
	for(int i=0; i<1001;i++){
		if(freq[i]==max){fprintf(out,"%d\n",i);}
		}	
	
	fclose(in);
	fclose(out);
	}