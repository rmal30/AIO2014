#include <cstdio>
#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	FILE*in = fopen("mallsin.txt","r");
	FILE*out= fopen("mallsout.txt","w");
	int w,h,x,y;
	int a[4],b[4];
	int count=0;
	fscanf(in,"%d %d %d %d",&w,&h,&x,&y);
	for(int i=0; i<4; i++){fscanf(in,"%d %d\n",&a[i],&b[i]);}
	count=(h-y+1)*(w-x+1);
	for(int k=0; k<4; k++){
	for(int l=0; l<k; l++){
		if(abs(a[l]-a[k])<x && abs(b[l]-b[k])<y){
			count+=(y-abs(b[l]-b[k]))*(x-abs(a[l]-a[k])); 
			printf("%d %d %d\n",l,k,count);
			}
			}
		}
	for(int k=0; k<4; k++){
		for(int i=max(x-1-a[k],0); i<min(min(x+w-1-a[k],x),w-a[k]); i++){
			for(int j=max(y-1-b[k],0); j<min(min(y+h-1-b[k],y),h-b[k]); j++){
				count--;
				//printf("%d %d\n",a[k]-x+i+1,b[k]-y+j+1);
				
				}
			}
		}
	if(count<0){fprintf(out,"%d",0);}
	else{fprintf(out,"%d",count);}
	fclose(in); fclose(out);
}