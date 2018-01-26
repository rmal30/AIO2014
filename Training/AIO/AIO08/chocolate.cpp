#include <cstdio>
int main(){
	FILE*in = fopen("chocin.txt","r");
	FILE*out = fopen("chocout.txt","w");
	int n,c;
	int sum=0;
	fscanf(in,"%d",&n);
	for(int i=0; i<n; i++){
		fscanf(in,"%d",&c);
		sum+=c;
		}
		if(sum%10==0){fprintf(out,"%d",0);}
		else{fprintf(out,"%d",10-(sum%10));}
		fclose(in); fclose(out);
	}