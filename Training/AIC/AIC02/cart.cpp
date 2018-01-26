#include <cstdio>

int main(){
	int h,w;
	int count; 
	int sum=0;
	char tmp;
	FILE*in=fopen("cartin.txt","r");
	FILE*out = fopen("cartout.txt","w");
	fscanf(in,"%d %d",&w,&h);
	char cells[h+1][w+1];
	for(int i=0; i<h; i++){
		fscanf(in,"%c",&tmp);
		for(int j=0; j<w; j++){
			fscanf(in,"%c", &cells[i][j]);
			}
		}
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			count = 0; 
			
			if(cells[i][j]=='#'){
				if(j>0 && cells[i][j-1]==35){count++;}
				if(i>0 && cells[i-1][j]==35){count++;}
				if(cells[i][j+1]==35){count++;}
				if(cells[i+1][j]==35){count++;}
				sum+=4-count;
					//printf("%d",cells[i][j]);
				}
		
			}
			//printf("%s","\n");
		}
		fprintf(out,"%d",sum);
		fclose(in);
		fclose(out);
	}