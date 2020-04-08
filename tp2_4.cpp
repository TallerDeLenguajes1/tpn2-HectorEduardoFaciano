#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 10

struct compu{
	int velocidad_de_procesamiento;
	int anio_de_fabricacion;
	char *tipo_cpu;
    int nucleos;
};

void Ver_compu(struct compu computadoras);
void Cargar_compus(struct compu *pCompus, char *pTipos, int n);
void Mostrar_compus(struct compu *pCompus, int n);
void Compu_vieja(struct compu *pCompus, int n);
void Compu_veloz(struct compu *pCompus, int n);

int main(){
	
    srand(time(NULL));
	char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
	char *pTipos = &tipos[0][0];
	struct compu computadoras[MAX];
	struct compu *pCompus = &computadoras[0];

	unsigned int n;
	
	do{
		printf("Ingrese la cantidad de PCs (no mayor a %d): ", MAX); 
        scanf("%d",&n);
	}while(n > MAX);
	printf("\n");
	
	Cargar_compus(pCompus, pTipos, n);
	Mostrar_compus(pCompus, n);
	Compu_vieja(pCompus, n);
	Compu_veloz(pCompus, n);
	
    getch();
	return 0;
}

void Ver_compu(struct compu computadoras){

	printf("Velocidad de procesamiento: %d GHz\n", computadoras.velocidad_de_procesamiento);
	printf("Anio de fabricacion: %d\n", computadoras.anio_de_fabricacion);
	printf("Cantidad de nucleos: %d\n", computadoras.nucleos);
	printf("Tipo de procesador: %s\n", computadoras.tipo_cpu);
}

void Cargar_compus(struct compu *pCompus, char *pTipos, int n){

	struct compu computadoras;
	
	for(int i = 0; i < n; i++){
		computadoras = *pCompus;

        computadoras.velocidad_de_procesamiento = rand() % 3 +1;
        computadoras.anio_de_fabricacion = rand() % 16 + 2000;
        computadoras.nucleos = rand() % 4 + 1;
        int aux = (rand() % 6)*10;
        computadoras.tipo_cpu = (pTipos+aux);

        *pCompus = computadoras;
        pCompus++;

    }
}

void Mostrar_compus(struct compu *pCompus, int n){

	for(int i = 0; i < n; i++){
		printf("Computadora #%d:\n", i+1);
		Ver_compu(*pCompus);
		pCompus++;
		printf("\n");
	}
}

void Compu_vieja(struct compu *pCompus, int n){

	struct compu vieja, computadora;
	vieja.anio_de_fabricacion = 3000;
	
	for(int i = 0; i < n; i++){
		computadora = *pCompus;
		if(computadora.anio_de_fabricacion < vieja.anio_de_fabricacion){
			vieja = computadora;
		}
		pCompus++;
	}
	
	printf("\n---Computadora Mas Vieja---\n");
	if(n != 0) Ver_compu(vieja);
}

void Compu_veloz(struct compu *pCompus, int n){

	struct compu veloz, computadora;
	veloz.velocidad_de_procesamiento = 0;
	
	for(int i = 0; i < n; i++){
		computadora = *pCompus;
		if(computadora.velocidad_de_procesamiento > veloz.velocidad_de_procesamiento){
			veloz = computadora;
		}
		pCompus++;
	}
	
	printf("\n---Computadora Mas Veloz---\n");
	if(n != 0) Ver_compu(veloz);
}