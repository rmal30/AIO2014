#include <cstdio>
#include <stdlib.h>
int main(){
	FILE*in=fopen("sculpin.txt","r");
	FILE*out=fopen("sculpout.txt","w");
	int l;
	fscanf(in, "%d", &l);
	int x[l];
	int a[l];
	int y[l];
	int b[l];
	int count=0;
	int top[(l+l%2)/2];
	int dist[l];
	bool visited[l];
	int vcount=0;
	
	for(int i=0; i<l; i++){
		visited[l]=false;
		fscanf(in,"%d %d %d %d", &a[i],&x[i],&b[i],&y[i]);
		//printf("%d %d %d %d", a[i],x[i],b[i],y[i]);
		if(a[i]==0 && x[i]==0 && b[i]==0 && y[i]==0){
			top[count]=i+1;
			count++;
			}
		}
	for(int i=0; i<count; i++){	
		printf("%d", top[i]);	
	}
	dist[0]=0;
	while(vcount<l){
		
		vcount++;
		}
	
	
	
}