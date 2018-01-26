#include <cstdio>
int main() {
	FILE * in = fopen("nortin.txt","r");
	FILE * out= fopen("nortout.txt","w");
	int h, w;
	fscanf(in,"%d %d", &w, &h);
	fprintf(out,"%d", w*h-(w*h)%2);
	fclose(in); fclose(out);
}