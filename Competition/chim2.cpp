#include <cstdio>
#include <vector>
int main(){
	FILE * in = fopen("chimin.txt","r");
	FILE * out = fopen("chimout.txt","w");
	int n;
	fscanf(in,"%d",&n);
	char lion[n], snake[n], goat[n];
	int s=0; int l=0; int g=0;
	int numun = 0;
	int min;
	fscanf(in,"%s",lion);
	fscanf(in,"%s",snake);
	fscanf(in,"%s",goat);
	for(int i=0; i<n; i++){
		if(lion[i]==snake[i] && snake[i]==goat[i] && lion[i]==goat[i]){g++; s++; l++;}
		else if(lion[i]==snake[i]){s++; l++;}
		else if(snake[i]==goat[i]){s++; g++;}
		else if(goat[i]==lion[i]){l++; g++;}
		else{numun++;}
		}
	for(int i=0; i<numun; i++){
		if(l<=g && l<=s){l++;}
		else if(s<=g && s<=l){s++;}
		else if(g<=s && g<=l){g++;}
	}	
		if(l<=g && l<=s){min = l;}
		else if(s<=g && s<=l){min = s;}
		else if(g<=s && g<=l){min = g;}
		fprintf(out,"%d", min);
		fclose(in); fclose(out);
	}