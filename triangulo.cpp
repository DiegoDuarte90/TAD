STR_TRIANGULO cargarTriangulo(float lado){
    STR_TRIANGULO triangulo;
    triangulo.lado=lado;
    return triangulo;
}

float area(STR_TRIANGULO triangulo){
    return ((sqrt(3)/4)*(triangulo.lado*triangulo.lado));
}

float perimetro(STR_TRIANGULO triangulo){
    return triangulo.lado*3;
}