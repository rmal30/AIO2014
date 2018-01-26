#include <cstdio>
#include <stdlib.h>

int main() {
	
	FILE * in;
	FILE * out;
	
	int xbl1, xr1, xl1, xtr1;
	int ybl1, yb1, yt1, ytr1;
	
	int xbl2, xr2, xl2, xtr2;
	int ybl2, yb2, yt2, ytr2;
	int sx=10000;
	int sy=10000;
	int a1, a2;
	int area;
	in = fopen("bendin.txt","r");
	out=fopen("bendout.txt","w");
	
	fscanf(in,"%d %d %d %d", &xbl1, &ybl1, &xtr1, &ytr1);
	fscanf(in,"%d %d %d %d",&xbl2, &ybl2, &xtr2, &ytr2);
	xr1 = xtr1;
	xl1 = xbl1;
	yb1 = ybl1;
	yt1 = ytr1;
	
	xr2 = xtr2;
	xl2 = xbl2;
	yb2 = ybl2;
	yt2 = ytr2;
	int posx[] = {abs(xr1-xl2),abs(xr2-xl1),abs(xr1-xl1),abs(xr2-xl2)};
	int posy[] = {abs(yt1-yb2),abs(yt2-yb1),abs(yt1-yb1),abs(yt2-yb2)};
	for(int i=0; i<4;i++){
		if(posx[i]<sx){sx=posx[i];}
		if(posy[i]<sy){sy=posy[i];}
		}
	a1 = (xr1-xl1)*(yt1-yb1);
	a2 = (xr2-xl2)*(yt2-yb2);	
	if(xr1<xl2||xr2<xl1||yt1<yb2||yt2<yb1){
		area = a1+a2;
		}else{area = a1 + a2 - sx*sy;}
	printf("%d", area);
	fprintf(out,"%d", area);
	
	fclose(in);
	fclose(out);
	
	return 0;
}