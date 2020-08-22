STR_ESFERA cargarEsfera(float radio){
    STR_ESFERA esfera;
    esfera.radio=radio;
    return esfera;
}

float area(STR_ESFERA esfera){
    return 4*3.1415*(esfera.radio*esfera.radio);
}

float volumen(STR_ESFERA esfera){
    return (1.333333)*3.1415*(esfera.radio*esfera.radio*esfera.radio);
}