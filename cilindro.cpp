STR_CILINDRO cargarCilindro(float radio,float altura){
    STR_CILINDRO cilindro;
    cilindro.radio=radio;
    cilindro.altura=altura;
    return cilindro;
}

float area(STR_CILINDRO cilindro){
    return 2*3.1415*cilindro.radio*(cilindro.altura+cilindro.radio);
}

float volumen(STR_CILINDRO cilindro){
    return 3.1415*(cilindro.radio*cilindro.radio)*cilindro.altura;
}