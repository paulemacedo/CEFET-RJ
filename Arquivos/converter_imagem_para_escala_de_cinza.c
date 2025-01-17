#include <stdio.h>

int main (int argc, char ** argv) {
	FILE *entrada, *saida;
	
	entrada = fopen(argv[1], "rb");
	saida = fopen(argv[2], "wb");
	int contN = 0;
	int c = fgetc(entrada);	
	while(contN < 4){
		if(c == '\n'){
			contN++;
		}
		fputc(c, saida);		
		c = fgetc(entrada);
	}
	int red, green, blue;	
	red = c;
	contN = 0;
	while(contN < 300*168) {
		green = fgetc(entrada);
		blue = fgetc(entrada);
		int cinza = (30 * red + 59 * green + 11 * blue) / 100;			
		fputc(cinza, saida);
		red = fgetc(entrada);
		contN++;	
	}	
	fclose(entrada);
	fclose(saida);
	return 0;	
}

