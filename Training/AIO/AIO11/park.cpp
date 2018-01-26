#include <cstdio>
int main() {
	FILE * in = fopen("slicein.txt","r");
	FILE * out= fopen("sliceout.txt","w");
	int n,a;
	int count =1;
	int max = 1;
	fscanf(in,"%d", &n);
	int pos[n+2];
	int time[n+2];
	time[0]=0;
	time[n+1]=0;
	for(int i=1; i<=n; i++){
		fscanf(in,"%d",&a);
		pos[a]=i;
		time[i]=a;
		}
	for(int i=1; i<=n; i++){
	if(time[pos[i]-1]==0 && time[pos[i]+1]==0){count--;}	
	if(time[pos[i]-1]!=0 && time[pos[i]+1]!=0){count++;}
	if(count>max){max=count;}
	time[pos[i]]=0;
		//for(int j=1; j<=n; j++){printf("%d,",pos[j]+1);}	
		//printf("\n");
		}
	if(n==0){max=0;}
	fprintf(out,"%d",max);
	fclose(in); fclose(out);
}