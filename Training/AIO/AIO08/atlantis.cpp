#include <cstdio>
#include <stdio.h>



int main(){
	FILE*in = fopen("atlanin.txt","r");
	FILE*out = fopen("atlanout.txt","w");
	int n,c;
	fscanf(in,"%d",&n);
	int height[n];
	int boundheight[n];
	int newboundid[n];
	int newboundheight[n];
	int boundid[n];
	int count=0;
	int sum=0;
	int min=0;
	bool allowed[n];
	int newcount=0;
	bool uneven=true;
	bool possibly_uneven=true;
	for(int i=0; i<n; i++){
		fscanf(in,"%d",&c);
		height[i]=c;
		//printf("%d",height[i]);
		}
	for(int i=0; i<n; i++){
		if(i==0){if(height[i]>=height[i+1]){boundheight[count]=height[i]; boundid[count]=i;count++;}}
		else if(i==n-1){if(height[i]>=height[i-1]){boundheight[count]=height[i]; boundid[count]=i;count++;}}
		else{
			if((height[i]>height[i+1] && height[i]>=height[i-1])||(height[i]>=height[i+1] && height[i]>height[i-1])){
				boundheight[count]=height[i]; boundid[count]=i;count++;
				}
			}
		}
	while(uneven){
		for(int i=0; i<count; i++){allowed[i]=true;}
		possibly_uneven=false;
		for(int i=0; i<count-2; i++){
			if(boundheight[i]>=boundheight[i+1] && boundheight[i+1]<=boundheight[i+2]){
				if(count>3){possibly_uneven=true; allowed[i+1]=false;}
				}
			}
		for(int i=0; i<count; i++){
			if(allowed[i]==true){
				newboundid[newcount]=boundid[i];
				newboundheight[newcount]=boundheight[i];
				newcount++;
				}
			}
		for(int i=0; i<newcount; i++){
			boundid[i] = newboundid[i];
			boundheight[i]= newboundheight[i];
			///printf("%d %d %d %d\n", boundid[i], boundheight[i], count, newcount);
			}
		count=newcount;
		newcount=0;		
		uneven=possibly_uneven;
		}
		
	for(int i=0; i<count-1; i++){
		if(boundheight[i]<=boundheight[i+1]){min=boundheight[i];}
		if(boundheight[i]>boundheight[i+1]){min=boundheight[i+1];}
		for(int j=boundid[i]+1; j<boundid[i+1]; j++){
			//printf("%d",min);
			if(height[j]<min){sum++;}}
			//printf("%d",boundid[i]);
		}
	fprintf(out,"%d",sum);
	fclose(in); 
	fclose(out);
	}