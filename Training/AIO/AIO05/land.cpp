#include <cstdio>

int main(){
	int r,c;
	int ix;
	int iy;
	int maxix;
	int maxiy;
	int maxfx;
	int maxfy;
	int max=0;
	int count;
	char tmp;
	FILE*in=fopen("landin.txt","r");
	FILE*out=fopen("landout.txt","w");
	fscanf(in,"%d %d",&r,&c);
	char cell[r][c];
	for(int i=0; i<r; i++){
		fscanf(in,"%c",&tmp);
		for(int j=0; j<c; j++){
			fscanf(in,"%c",&cell[i][j]);
			printf("%d ",cell[i][j]);
			}
		}
	for(int i=0; i<r; i++){
		count=0;
		ix=0;
		iy=i;
		for(int j=0; j<c; j++){
			if(cell[i][j]==46){
				if(count==0){ix=j;iy=i;}
				count++;
				if(count>max){
					max = count;
					maxix = ix+1; maxiy = iy+1;
					maxfx = j+1; maxfy = i+1;
					printf("%d %d %d %d %d\n",maxiy,maxix,maxfy,maxfx,count);
					}
			}else{count=0;}
		}
	}
	
	for(int i=0; i<c; i++){
		count=0;
		ix=i;
		iy=0;
		for(int j=0; j<r; j++){
			if(cell[j][i]==46){
				if(count==0){ix=i;iy=j;}
				count++;
				if(count>max){
					max = count;
					maxix = ix+1; maxiy = iy+1;
					maxfx = i+1; maxfy = j+1;
					printf("%d %d %d %d %d\n",maxiy,maxix,maxfy,maxfx,count);
					}
			}else{count=0;}
		}
	}
	
	
	
		fprintf(out,"%d %d %d %d",maxiy,maxix,maxfy,maxfx);
	}