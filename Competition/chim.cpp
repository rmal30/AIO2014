#include <cstdio>
#include <vector>
#include <algorithm>
int main(){
	FILE * in = fopen("chimin.txt","r");
	FILE * out = fopen("chimout.txt","w");
	int n;
	fscanf(in,"%d",&n);
	char lion[n];
	char snake[n];
	char goat[n];
	char chimera[n];
	int unknown[n];
	int numun = 0;
	int s=0;
	int l=0;
	int g=0;
	int min;
	fscanf(in,"%s",lion);
	fscanf(in,"%s",snake);
	fscanf(in,"%s",goat);
	for(int i=0; i<n; i++){
		if(lion[i]==snake[i] && snake[i]==goat[i]){chimera[i]=lion[i]; g++; s++; l++;}
		else if(lion[i]==snake[i]){chimera[i]=snake[i]; s++; l++;}
		else if(snake[i]==goat[i]){chimera[i]=goat[i];s++; g++;}
		else if(goat[i]==lion[i]){chimera[i]=lion[i]; l++; g++;}
		else{unknown[numun]=i;numun++;}
		}
	for(int i=0; i<numun; i++){
		if(l<=g && l<=s){chimera[unknown[i]]=lion[unknown[i]]; l++;}
		else if(s<=g && s<=l){chimera[unknown[i]]=snake[unknown[i]]; s++;}
		else if(g<=s && g<=l){chimera[unknown[i]]=goat[unknown[i]]; g++;}
		}	
		if(l<=g && l<=s){min = l;}
		else if(s<=g && s<=l){min = s;}
		else if(g<=s && g<=l){min = g;}
		fprintf(out,"%d", min);
	}