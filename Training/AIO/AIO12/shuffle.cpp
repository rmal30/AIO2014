#include <cstdio>

int main(){
	FILE*in=fopen("shufflein.txt","r");
	FILE*out=fopen("shuffleout.txt","w");
	int n,k;
	int pm=0;
	int last;
	fscanf(in,"%d %d",&n,&k);
	int c[k];
	int m[k+1];
	int min[k+1];
	int total=k;
	for(int i=0; i<k; i++){fscanf(in," %d",&c[i]);}
	for(int i=0; i<=k; i++){fscanf(in," %d",&m[i]);}
	
	while(total>0){
	for(int i=0; i<=k; i++){
		if(c[0]==m[i]){pm = i+1; c[0]=n+2; m[i]=n+1; total--;}
		if(m[i]!=n+1){
		for(int j=1; j<k; j++){
			if(c[j]==m[i]){c[j]=n+2; m[i]=n+1; total--;}	
			}
		}
			if(m[i]<=n){m[i]=(m[i]%n)+1;}
			printf("%d ",m[i]);
		}
		printf("%s","\n");
	}
	for(int i=0; i<k; i++){if(m[i]<=n){last=i+1;break;}}
	fprintf(out,"%d\n%d",pm,last);
	}