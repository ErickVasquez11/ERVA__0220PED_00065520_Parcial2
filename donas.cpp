#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Producto {
    string nombre;
    string tipo;
    float precio;
};

struct ProductoFuerte{
    string nombre;
    string tipo;
    float precio;
};

struct Cliente {
    string apellido;
    vector<Producto> productos;
};
//Funciones
void menuDonas(queue<Producto>&donas){
    int opcion;
    bool status =true;
    Producto Donas;
    while(status){
          cout<<"\n++++++++ Menu de Donas ++++++++\n"<<endl;
          cout<<"\t1. Dona sencilla................$1.00"<<endl;
          cout<<"2. Rellena de leche................$1.25"<<endl;
          cout<<"3. Sabores especiales(Moca,caramelo).......$1.50"<<endl;
          cout<<"4. Salir"<<endl;
        cout<<"\nOpcion: ";   cin>>opcion;

        switch(opcion){
            case 1: cout<<"Tomando pedido";
                    
                   
            break;
            case 2: 
            break;
            case 3: 
            break;
            case 4: return;
            break;
            default: cout<<"Opcion no valida"<<endl; break;
        }
    }
    
}
void menuPlatosFuertes(queue<ProductoFuerte>&platosfuertes){
    int opcion;
    bool status =true;
    while(status){
          cout<<"\n++++++++ Menu de Platos Fuertes ++++++++\n"<<endl;
          cout<<"1. Desayuno.............$2.50"<<endl;
          cout<<"2. Almuerzo.............$5.00"<<endl;
          cout<<"3. Cena.................$3.50"<<endl;
          cout<<"4. Salir"<<endl;
          cout<<"\nOpcion: ";   cin>>opcion;

         switch(opcion){
            case 1: " Cuantos desayunos desea comprar: ";
                    
            break;
            case 2: 
            break;
            case 3: 
            break;
            case 4: return;
            break;
            default: cout<<"Opcion no valida"<<endl; break;
        }
    }
}
float Pedido(queue<Cliente> *colaClientes, float precio) {
    //Verificación que haya clientes en la cola
    if(colaClientes->empty()) {
        cout << "No se ha realizado ningún cobro, no hab►1a clientes en la cola" << endl;
        return 0;
    }else {
        //Recorrer la cola por medio de un while, cuya condición sea que la cola NO esté vacía
        while(!colaClientes->empty()) {
            //Asignar el cliente que se encuentra al frente de la cola a la variable cliente
            Cliente cliente = colaClientes->front();

            cout << "Factura de " << cliente.apellido<< "\t" <<endl;
            //Recorrer la lista de los productos del cliente actuales con un for
            for(int i = 0; i < cliente.productos.size(); i++) {
                //Almacenar los valores de precio del producto en la posición i en la variable pago
                precio += cliente.productos.at(i).precio;

                cout << cliente.productos.at(i).nombre << ": $" << cliente.productos.at(i).precio << endl;
            }

            //Eliminar el cliente al frente de la cola porque ya fue atendido, y avanzar en la cola
            colaClientes->pop();
        }
        return precio;
    }
}

void menu2(queue<Producto>&donas,queue<ProductoFuerte>&platosfuertes){
    queue<Cliente> colaClientes;
    Cliente cliente;
    string apellido;
    
    int opcion;
    bool status =true;
    while(status){
        cout << " Ingrese su apellido: " << endl;
        
        cout<<"1. Desea comprar Donas"<<endl;
        cout<<"2. Desea comprar Platos fuertes"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"\nDigite la opcion: ";   cin>>opcion;

        switch(opcion){
            case 1: menuDonas(donas);
            break;
            case 2: menuPlatosFuertes(platosfuertes);
            break;
            case 3: return;
            break;
            default: cout<<"Opcion no valida"<<endl; break;
        }
    }
}


int main(){
    
    queue<Producto> donas;
    queue<ProductoFuerte> platosfuertes;

   
    int totalPagado = 0;

    int opcion;
    bool status = true;
    while(status){
        cout<<endl;
        cout<<"*************MENU************"<<endl;
        cout<<"1. Atender pedidos de clientes"<<endl;
        cout<<"2. Calcular ganancias por venta de donas"<<endl;
        cout<<"3. Calcular ganancias por venta de platos fuertes"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Opcion: "; cin>>opcion;

        switch(opcion){
            
            case 1: menu2(donas,platosfuertes);
            break;
            case 2: 
            break;
            case 3: 
            break;
            case 4: cout<<"El programa ha finalizado"<<endl;
            status = false;
            break;
            default: cout<<"Opcion no valida"<<endl;
            break;
        }
    }
    return 0;

}