#include <cstdio>
int main() {
	int n,w;
	FILE * in = fopen("manin.txt","r");
	FILE * out= fopen("manout.txt","w");
	fscanf(in,"%d %d", &n,&w);
	int p[n];
	int max = 0;
	int total[n];
	for(int i = 0; i<n; i++){fscanf(in,"%d",&p[i]);total[i]=0;}
	for(int j = 0; j<w; j++){
			//printf("%d %d\n",p[i+j],p[i]+w);
			total[0]+=p[j];
		}
	for(int i = 0; i<n; i++){
		if(i+w<n){total[i+1]=total[i]+p[i+w]-p[i];}
		//printf("%d\n",shot[i]);
		if(total[i]>max){max = total[i];}
	}
	fprintf(out,"%d",max);
	fclose(in); fclose(out);
}