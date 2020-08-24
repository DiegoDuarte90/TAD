#include <stdio.h>
#include <cmath>

#include "cuadrado.h"
#include "cuadrado.cpp"

#include "circulo.h"
#include "circulo.cpp"

#include "triangulo.h"
#include "triangulo.cpp"

#include "pentagono.h"
#include "pentagono.cpp"

#include "esfera.h"
#include "esfera.cpp"

#include "cilindro.h"
#include "cilindro.cpp"


int main(){
    int opcion;
    float medida;

    printf("Ingrese opcion: \n1 Cuadrado\n2 Circulo\n3 Triangulo\n4 Pentagono\n5 Esfera\n6 Cilindro\n");
    scanf("%d",&opcion);
    switch (opcion) {
    case 1:{
        printf("Ingrese un medida del cuadrado: \n");
        scanf("%f",&medida);
        STR_CUADRADO cuadrado=cargarCuadrado(medida);
        printf("Cuadrado:\nArea: %f\nPerimetro: %f\n",area(cuadrado),perimetro(cuadrado));
        break;
        };
    case 2:{
        printf("Ingrese el radio del circulo:\n");
        scanf("%f",&medida);
        STR_CIRCULO circulo=cargarCirculo(medida);
        printf("Circulo:\nArea: %f\nPerimetro: %f\n",area(circulo),perimetro(circulo));
        break;
        };
    case 3:{
        printf("Ingrese el lado del triangulo equilatero:\n");
        scanf("%f",&medida);
        STR_TRIANGULO triangulo=cargarTriangulo(medida);
        printf("Triangulo:\nArea: %f\nPerimetro: %f\n",area(triangulo),perimetro(triangulo));
        break;
        };
    case 4:{
        printf("Ingrese el lado de pentagono regular:\n");
        scanf("%f",&medida);
        STR_PENTAGONO pentagono=cargarPentagono(medida);
        printf("Pentagono:\nArea: %f\nPerimetro: %f\n",area(pentagono),perimetro(pentagono));
        break;
        };
    case 5:{
        printf("Ingrese el radio de la esfera:\n");
        scanf("%f",&medida);
        STR_ESFERA esfera=cargarEsfera(medida);
        printf("Esfera:\nArea: %f\nVolumen: %f\n",area(esfera),volumen(esfera));
        break;
        };
    case 6:{
        printf("Ingrese el radio del cilindro:\n");
        scanf("%f",&medida);
        float medida2;
        printf("Ingrese la altura del cilindro:\n");
        scanf("%f",&medida2);
        STR_CILINDRO cilindro=cargarCilindro(medida,medida2);
        printf("Cilindro:\nArea: %f\nVolumen: %f\n",area(cilindro),volumen(cilindro));
        break;
        };
    };
    return 0;
}
