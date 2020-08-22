STR_PENTAGONO cargarPentagono(float lado){
    STR_PENTAGONO pentagono;
    pentagono.lado=lado;
    return pentagono;
}

float area(STR_PENTAGONO pentagono){
    return 1.72*(pentagono.lado*pentagono.lado);
}

float perimetro(STR_PENTAGONO pentagono){
    return pentagono.lado*5;
}