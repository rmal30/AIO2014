#include <cstdio>

int main(){
	FILE*in=fopen("surfin.txt","r");
	FILE*out=fopen("surfout.txt","w");
	int r,c;
	int k,l;
	int count=0;
	char tmp;
	fscanf(in, "%d %d",&r,&c);
	char cells[r][c];
	bool star[r][c];
	bool pope[r][c];
	for(int i=0; i<r; i++){
		fscanf(in,"%c",&tmp);
		for(int j=0; j<c; j++){
			fscanf(in,"%c",&cells[i][j]);
			//printf("%c",cells[i][j]);
			pope[i][j]=false;
			star[i][j]=false;
			}
		}
		
		for(int i=r-1; i>=0; i--){
		for(int j=c-1; j>=0; j--){
			k=i; l=j;
			while(star[i][j]==false && pope[i][j]==false){
				if(cells[k][l]=='v'){k++;}
				else if(cells[k][l]=='>'){l++;}
				
				if(cells[k][l]=='+' || pope[k][l]==true){pope[i][j]=true;}
				else if(cells[k][l]=='*' || star[k][l]==true){star[i][j]=true; count++;}
				}
				
			}
		}
		fprintf(out,"%d",count);
	}