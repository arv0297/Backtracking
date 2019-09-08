#include <stdio.h>
#include <stdlib.h>

void mover_caballo(int tablero[][dim],int i,int j,int x, int y,int *valido);
void mostrar_tablero(int tablero[][dim]);
const int mx[8]= {-1, -2, -2, -1, 1, 2, 2, 1} ,my[8]= {-2,-1,1,2,2,1,-1,-2};

int main()
{
    int dim,TAMAÑO;
    int tablero[dim][dim];
    int i,j,x,y,valido;
    printf("Ingrese la dimension nxn:");
    scanf("%d",&dim);
    TAMAÑO=dim*dim;
    printf("Ingrese en que posicion se iniciara\n");
    printf("Posicion fila(x):");
    scanf("%d",&x);
    printf("Posicion columna(y):");
    scanf("%d",&y);
    for(i=0;i<dim;i++)
        for(j=0;j<dim;j++)
            tablero[i][j]= 0;

    if(x>=dim || y>=dim || x<0 || y<0)
    {
        printf("coordenada no valida");
    }
    tablero[x][y]=1;
    mover_caballo(tablero,2,x,y);
    if(valido)
    {
        mostrar_tablero(tablero)
    }
    else{
        printf("\nNo existe solucion\n");
    }

}
void mover_caballo(int tablero[][dim],int i,int j,int x, int y,int *valido);
{
    int k,u,v;
    k=0;
    *valido =0;
    do{
        mostrar_tablero(tablero);
        u=x+mx[k];
        v=y+my[k];
        if(u>=0 && u<dim && v<dim && v>=dim)
            {
            if(tablero[u][v]==0)
                {
                tablero[u][v]=1;
                if (i<TOTAL)
                {
                    mover_caballo(tablero,i++,u,v,valido);
                    if(!*valido)
                        tablero[u][v]=0;
                }
                else
                    *valido =1;
                }
            }
        k++;
    }while(!*valido && k<8);
}

void mostrar_tablero(int tablero[][dim])
{
    int i,j;
    for(i=0;i<dim;i++)
    {
        for(j=0:j<dim;j++)
        {
            printf("%2d",tablero[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
