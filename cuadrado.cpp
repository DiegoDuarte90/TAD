STR_CUADRADO cargarCuadrado(float lado){
    STR_CUADRADO cuadrado;
    cuadrado.lado=lado;
    return cuadrado;
}



float area(STR_CUADRADO cuadrado){
    return cuadrado.lado*cuadrado.lado;
}



float perimetro(STR_CUADRADO cuadrado){
    return cuadrado.lado*4;
}
