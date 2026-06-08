#include <string>
#include <iostream>
#include <vector>


int main(int argc, char** argv) {
    std::string filename = "instances/gap/gap_a/a05100";
    std::cout << "Reading file " << filename << std::endl;



Idea general: por cada vendedor(fijarse en las matrices deposito), revisar cual deposito tiene menor costo, 
                el que tiene menor costo y le entran los paquetes, restarle a un vector que contenga las capacidades de cada deposito
                el tamaño del paquete y pushearle al vector de tal deposito el vendedor que entro




vector<int> heuristica1(){


    vector capacidades => un vector que tenga la cantidad de posiciones de los depositos, con las capacidades maximas(
    vamos a utilizar copias de la matriz costos
    vector de vendedores con depositos

    for(vendedores){ //aclaro vector vendedores esta ordenado
        int depoMin=-1//auxiliar para comparar los costos de los depositos y quedarnos con el min
        for(depositos){
            recorremos los depositos y comparamos con el costo de depoAux
            if(capacidadDepositos-paqueteActual>=0){
                if(depoMin>costoDepoActual){
                    depoMin= DepoActual
                }
            }
        }
        vendedoresConDepositos[vendedor] =depoMin//lo pusheamos
        vectorCapacidades[depoMin]-=paqueteActual//restamos a ese vector
        
    }
    )

vector<int> heuristica1(vector<vector<int>> matrizCostos,vector<vector<int>
                         matrizDemandas, vector<int> capacidades, int vendedores
                        int depositos){
    //esta indezado uno a la derecha, el valor 0 es invalido, pero el vendedor 
    vector<int> depositos(vendedores, -1);  
    
    for(int i=0; i<vendedores; i++){//itera sobre los vendedores
        int depoMin= infinite; //que deposito se usa

        for(int j=0; j<depositos; j++){ // itera sobre los depositos
            
            //si el costo de la j es menor a la actual
            if(matrizCostos[i][depoMin] > matrizCostos[i][j]){
                //Si entra(si la capacidad - lo que demanda el vendedor i en el deposito j)
                if(capacidades[j]-matrizDemandas[i][j]>=0){
                    depoMin= j;
                }
            }

        }//si queda en infinite, es que no se asigno deposito, por lo que no cambio nada
        if(depoMin != infinite){
            //actualizo la capacidad si realmente le asigna a algo
            capacidades[depoMin]-= matrizDemandas[i][j];

            //lo pone en el vector
            depositos[i]= depoMin;
        }
        

    }

    return depositos;


    }



}








    

    return 0;
}