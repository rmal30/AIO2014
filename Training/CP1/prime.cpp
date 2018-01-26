#include <cstdio>
#include <cmath>


int main(){
	FILE*in=fopen("primes.in","r");
	FILE*out=fopen("primes.out","w");
	int dig[4]={1,3,7,9};
	int n;
	int sum=0;
	fscanf(in,"%d",&n);
	int len = int(floor(log10(n)))+1;
	int num[len+1];
	int newnum[len+1];
	printf("%f\n",log10(n)+1);
	for(int i=0; i<len; i++){
		num[i]=(n%int(pow(10,len-i)) - n%int(pow(10,len-i-1)))/(pow(10,floor(len-i-1)));
		newnum[i]=num[i];
		printf("%d ",num[i]);
		}
		printf("\n");
	int i=0;
	int j=0;
		while(i<len+1){
			if(dig[j]==newnum[i]){i++; j=0;}
			else if(dig[j]>newnum[i]){newnum[i]=dig[j];
				 for(int k=1; k<len-i; k++){newnum[i+k]=1;}
				  i++; j=0;}
			else{j++;}
		}
		for(int i=0; i<len; i++){sum+=newnum[i];printf("%d",newnum[i]);}
		printf("\n%d",sum);
	}
	