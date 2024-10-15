//
// Created by yagoa on 14/10/2024.
//

#ifndef RESOLU_O_DAS_LISTAS_ED2_EXERCICIO1_H
#define RESOLU_O_DAS_LISTAS_ED2_EXERCICIO1_H

struct registro_lista{
    struct listaGeneralizada *cabeca;
    struct listaGeneralizada *cauda;
};

union informacao_lista{
    char informacao[8];
    struct registro_lista lista;
};

struct listaGeneralizada{
    char terminal;
    union informacao_lista no;
};
typedef struct listaGeneralizada ListaGen;

ListaGen *CriaT(char *info){
    ListaGen *L = (ListaGen*)malloc(sizeof(ListaGen));
    L->terminal = 1;
    strcpy(L->no.informacao, info);
    return L;
}

char Nula(ListaGen *L){
    return L==NULL;
}

char Atomo(ListaGen *L){
    return !Nula(L) && L->terminal;
}

ListaGen *Cons(ListaGen *H,ListaGen *T){
    if(Atomo(T)){
        printf("Cons: Segundo argumento nao pode ser Atomo!");
        return NULL;
    }else{
        ListaGen *L = (ListaGen*)malloc(sizeof(ListaGen)) ;
        L->terminal = 0;
        L->no.lista.cabeca = H;
        L->no.lista.cauda = T;
        return L;
    }
}

ListaGen *Head(ListaGen *L){
    if( Nula(L) || Atomo(L) ){
        printf("Head: argumento deve ser lista não vazia!");
        return NULL;
    }else
        return L->no.lista.cabeca;
}

ListaGen *Tail(ListaGen *T){
    if( Nula(T) || Atomo(T)){
        printf("Tail: argumento deve ser lista não vazia!");
        return NULL;
    }else
        return T->no.lista.cauda;
}



#endif //RESOLU_O_DAS_LISTAS_ED2_EXERCICIO1_H
