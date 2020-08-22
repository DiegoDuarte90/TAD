STR_CIRCULO cargarCirculo(float radio){
    STR_CIRCULO circulo;
    circulo.radio=radio;
    return circulo;
}

float area(STR_CIRCULO circulo){
    return (circulo.radio*3.1415)*(circulo.radio*3.1415);
}

float perimetro(STR_CIRCULO circulo){
    return 2*3.1415*circulo.radio;
}