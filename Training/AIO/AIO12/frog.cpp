#include <cstdio>
#include <stdlib.h>
#include <math.h>

using namespace std;
int findTotalShift(int n, int k, int guess, int* dist){
	int shift;
	int dist2[n-1];
	for(int m=0; m<n-1; m++){
		dist2[m] = dist[m];	
	}
	int total = abs(guess);
	dist2[0]-=guess;
	for(int j=0; j<n-2; j++){
		shift = k - dist2[j];
		total += abs(shift);
		dist2[j+1]-=shift;
	}
	total += abs(k - dist2[n-2]);
	return total;
}

int main() {
	FILE * in = fopen("frogin.txt","r");
	FILE * out= fopen("frogout.txt","w");
	int k,n;
	fscanf(in,"%d %d", &n, &k);
	
	int sum = 0;
	int dist[n-1];
	
	for(int i=0; i<n-1; i++){fscanf(in,"%d", &dist[i]); sum+=dist[i];}
	int delta = sum - (n-1)*k;
	int total;
	int guess;
	int min = 2147483647;
	int low = -k;
	int high = (delta+delta%2)/2+k;
	int sign;
	int u;
	int lTotal, hTotal;
	//printf("%d %d", low,high);
	if(high-low>0){
		sign = 1;
	}else{
		sign = -1;
	}

	while(sign*(high-low)>5000){
		u = high+low;
		lTotal = findTotalShift(n, k, low, dist);
		hTotal = findTotalShift(n, k, high, dist);
		if(lTotal<hTotal){
			high = (u+u%2)>>1;
		}else{
			low = (u-u%2)>>1;
		}
	}
	for(int j=low; j!=high; j+=sign){
		total = findTotalShift(n, k, j, dist);
		if(total<min){
			min = total;
		}
	}

	fprintf(out,"%d", min);
	fclose(in); fclose(out);
}
