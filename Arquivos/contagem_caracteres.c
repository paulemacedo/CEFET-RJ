#include <stdio.h>

// stdout, stdin, stderr

int main(int argc, char** argv)
{
	FILE *entrada, *saida;
	int cont[255];
	for(int i=0; i<255; i++){
		cont[i]=0;
	}

	if(argc != 2)
	{
		fprintf(stderr,"Erro na chamada do comando.\n");
		fprintf(stderr,"Uso: %s [ARQUIVO ORIGEM] [ARQUIVO DESTINO].\n", argv[0]);
		return 1;
	}

	entrada = fopen(argv[1],"rb");
	if(!entrada)
	{
		fprintf(stderr,"Arquivo %s não pode ser aberto para leitura\n", argv[1]);
		return 1;
	}
	int c;
	c = fgetc(entrada);
	while(c != EOF){
	cont[c]++;
		c = fgetc(entrada);
	}
for(int j=0; j<255; j++){
	if(cont[j]>0){
		printf("O caracter %d se repetiu %d vezes.\n", j, cont[j]);
			}
	}

	fclose(entrada);
	fclose(saida);
	return 0;
}

