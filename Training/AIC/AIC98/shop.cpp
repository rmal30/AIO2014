#include <cstdio>

int main(){
	FILE*in = fopen("mallsin.txt","r");
	FILE*out= fopen("mallsout.txt","w");
	int w,h,x,y;
	int a[4],b[4];
	int count=0;
	bool pos=true;
	fscanf(in,"%d %d %d %d",&w,&h,&x,&y);
	for(int i=0; i<4; i++){fscanf(in,"%d %d\n",&a[i],&b[i]);}
	
	for(int i=0; i<w-x+1; i++){
		for(int j=0; j<h-y+1; j++){
			pos=true;
			for(int k=0; k<4; k++){
			if(i<=a[k] && a[k]<x+i && 
			   j<=b[k] && b[k]<y+j){
				   pos=false; break;
				   }
			}
			//printf("%d %d %d,",i,j,pos);
			if(pos==true){count++;}
			
		}
		//printf("%s","\n");
	}
	
	fprintf(out,"%d",count);
}