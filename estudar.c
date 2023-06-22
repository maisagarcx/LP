#include <stdio.h>
#include <stdlib.h>
//JUNTAR LISTA A COM LISTA B, ORDENAR UMA LISTA EM CRESCENTE
struct lista
{
    int info;
    struct lista *prox;
};

typedef struct lista Lista;


/* função imprime: imprime valores dos elementos */
void imprime (Lista *l)
{
    Lista *p; /* variável auxiliar para percorrer a lista */
    for (p = l; p != NULL; p = p->prox)
        printf("info = %d, end = %x \n", p->info, p);
}

/* função imprime: imprime valores dos elementos */
void Soma (Lista *l)
{
    Lista *p; /* variável auxiliar para percorrer a lista */
    int soma = 0;
    for (p = l; p != NULL; p = p->prox)
        soma += p->info;
    
    printf("Soma = %d \n", soma);
}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
 int vazia (Lista *l)
{
    if (l == NULL)
        return 1;
    else
        return 0;
}

/* função busca: busca um elemento na lista */
Lista* busca (Lista *l, int v)
{
    Lista* p;
    for (p=l; p!=NULL; p=p->prox)
        if (p->info == v)
            return p;
    return NULL; /* não achou o elemento */
}


/* função retira: retira elemento da lista */
Lista* retira (Lista *l, int v) // l = 3000 v = 100
{
    Lista *ant = NULL; /* ponteiro para elemento anterior */
    Lista *p = l; /* ponteiro para percorrer a lista*/  // p = 3000
    
    /* procura elemento na lista, guardando anterior */
    while (p != NULL && p->info != v)
    {
        ant = p;  // ant = 1000
        p = p->prox; // p = NULL
        
    }
    
    /* verifica se achou elemento */
    if (p == NULL)
        return l; /* não achou: retorna lista original */
        /* retira elemento */
    if (ant == NULL)
            /* retira elemento do inicio */
        l = p->prox; // 3000
    else
            /* retira elemento do meio da lista */
        ant->prox = p->prox; // p->prox =
    free(p); //
    return l;
}


void libera (Lista *l)
{
    Lista *p = l, *t;
    while (p != NULL)
    {
        t = p->prox; /* guarda referência para o próximo elemento*/
        free(p); /* libera a memória apontada por p */
        p = t; /* faz p apontar para o próximo */
    }
}

/* inserção no início: retorna a lista atualizada */
Lista* insere (Lista *l, int i)
{
    Lista *novo; //ponteiro "novo" do tipo Lista (que é uma struct)
    novo = (Lista *) malloc(sizeof(Lista)); //(Lista*) é o jeito que eu transformo o endereço que malloc me da em (Lista *)
    if(novo == NULL)
    {
        printf("erro de alocação");
        exit(0);
    }
    
    novo->info = i; //*novo.idade = i
    novo->prox = l; //*novo.prox = l
    
    return novo;
}


int main (void)
{
    Lista *l; /* declara uma lista não iniciada  l = start */
    l = NULL; // esta vazia
    
    l = insere(l, 23); // insere na lista o elemento 23, l = 1000
    
    l = insere(l, 45); // insere na lista o elemento 45, l = 2000
    
    l = insere(l, 56); // insere na lista o elemento 56, l = 3000
    
    l = insere(l, 78); // insere na lista o elemento 78, l = 4000

    imprime(l); // imprimirá: 78 56 45 23
    
    Soma(l);
    
    printf("\n \n");
    
    l = retira(l, 78); // l = 3000 , 100
    imprime(l);
    printf("\n \n");
    
    l = retira(l, 45);
     imprime(l); // imprimirá: 56 23
    
    libera(l);

    return 0;
}

