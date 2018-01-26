#include <cstdio>

int main(){
	int d;
	int count=0;
	FILE * in  = fopen("cutein.txt","r");
	FILE*out = fopen("cuteout.txt","w");
	fscanf(in,"%d",&d);
	int n[d];
	for(int i=0; i<d; i++){
		fscanf(in,"%d",&n[i]);
		if(n[i]==0){
			count++;
			}else{
				count = 0;
				}
		}
		fprintf(out,"%d",count);
	}