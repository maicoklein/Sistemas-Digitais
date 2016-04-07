#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;

// Função que calcula a area de um triangulo com base nos pontos x,y
float areaTriangulo (Ponto a, Ponto b, Ponto c){
    return fabs(((b.x - a.x)*(c.y - a.y) - (c.x - a.x) * (b.y - a.y))/2);
}

// Função que verifica se o ponto D esta dentro do triangulo ABC
// Se estiver dentro retorna 1 senão retorna 0
int PontoDentroTriangulo (Ponto a, Ponto b, Ponto c, Ponto d){
    float ABC = areaTriangulo (a,b,c);
    float ACT = areaTriangulo (a,c,d);
    float ABT = areaTriangulo (a,b,d);
    float CTB = areaTriangulo (c,d,b);

    if(ABC == ACT+ABT+CTB)
        return 1;

    return 0;
}

int main(int argc, char * argv[])
{
    Ponto a, b, c; // Lados do triangulo
    Ponto d; // Ponto

    printf("Digite as coordenadas p1(x,y) do triangulo: ");
    scanf("%f%f",&a.x, &a.y);
    printf("Digite as coordenadas p2(x,y) do triangulo: ");
    scanf("%f%f",&b.x, &b.y);
    printf("Digite as coordenadas p3(x,y) do triangulo: ");
    scanf("%f%f",&c.x, &c.y);
    printf("Digite as coordenadas de um ponto qualquer(x,y): ");
    scanf("%f%f",&d.x, &d.y);


//    a.x = 1; a.y = 1;
//    b.x = 3; b.y = 1;
//    c.x = 2; c.y = 3;
//    d.x = 2; d.y = 2;

    if (PontoDentroTriangulo (a,b,c,d)){
        printf("O ponto esta dentro do triangulo\n");
    }
    else {
        printf("O ponto esta fora do triangulo\n");
    }

    return 0;
}
