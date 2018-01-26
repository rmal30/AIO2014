#include <cstdio>
#include <math.h>
int main(){
	int r,c,diff;
	char tmp;
	int count=0;
	FILE*in=fopen("cartin.txt","r");
	FILE*out=fopen("cartout.txt","w");
	fscanf(in,"%d %d",&c,&r);
	char cell[c+1][r+1];
	int lenstar;
	int cross=r*c;
	bool found=true;
	int sx[cross], sy[cross];
	for(int j=0; j<r; j++){fscanf(in,"%c",&tmp); for(int i=0; i<c; i++){fscanf(in,"%c",&cell[i][j]);}}	
	for(int i=0; i<c; i++){if(cell[i][0]=='.'){sx[count]=i; sy[count]=0; cell[i][0]='*'; count++; found=true;}}
	for(int i=0; i<c; i++){if(cell[i][r-1]=='.'){sx[count]=i; sy[count]=r-1; cell[i][r-1]='*'; count++; found=true;}}
	for(int i=0; i<r; i++){if(cell[0][i]=='.'){sx[count]=0; sy[count]=i; cell[0][i]='*'; count++; found=true;}}
	for(int i=0; i<r; i++){if(cell[c-1][i]=='.'){sx[count]=c-1; sy[count]=i; cell[c-1][i]='*'; count++; found=true;}}
	if(found==false){fprintf(out,"%d",cross); return 0;}
	diff=1; lenstar=count;
	while(diff>0){
		diff=0;
		for(int l=0; l<lenstar; l++){
				if(sx[l]>0 && cell[sx[l]-1][sy[l]]=='.'){cell[sx[l]-1][sy[l]]='*'; sx[count]=sx[l]-1; sy[count]=sy[l]; count++; diff++;}
				if(sx[l]<c-1 && cell[sx[l]+1][sy[l]]=='.'){cell[sx[l]+1][sy[l]]='*'; sx[count]=sx[l]+1; sy[count]=sy[l]; count++; diff++;}
				if(sy[l]>0 && cell[sx[l]][sy[l]-1]=='.'){cell[sx[l]][sy[l]-1]='*'; sx[count]=sx[l]; sy[count]=sy[l]-1; count++; diff++;}
				if(sy[l]<r-1 && cell[sx[l]][sy[l]+1]=='.'){cell[sx[l]][sy[l]+1]='*'; sx[count]=sx[l]; sy[count]=sy[l]+1; count++; diff++;}
				if(sx[l]>0 && sy[l]>0 && cell[sx[l]-1][sy[l]-1]=='.'){cell[sx[l]-1][sy[l]-1]='*'; sx[count]=sx[l]-1; sy[count]=sy[l]-1; count++; diff++;}
				if(sx[l]>0 && sy[l]<r-1 && cell[sx[l]-1][sy[l]+1]=='.'){cell[sx[l]-1][sy[l]+1]='*'; sx[count]=sx[l]-1; sy[count]=sy[l]+1; count++; diff++;}
				if(sx[l]<c-1 && sy[l]>0 && cell[sx[l]+1][sy[l]-1]=='.'){cell[sx[l]+1][sy[l]-1]='*'; sx[count]=sx[l]+1; sy[count]=sy[l]-1; count++; diff++;}
				if(sx[l]<c-1 && sy[l]<r-1 && cell[sx[l]+1][sy[l]+1]=='.'){cell[sx[l]+1][sy[l]+1]='*'; sx[count]=sx[l]+1; sy[count]=sy[l]+1; count++; diff++;}
		}
		lenstar=count;
		}
		fprintf(out,"%d",cross-count);	
		fclose(in); fclose(out);
	}