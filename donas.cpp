#include <iostream>
#include <queue>
#include <vector>
#include <stdlib.h>

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
void menuDonas(queue<Cliente>&donas){
    int opcion;
    bool status =true;
    Cliente cliente;
    while(status){
          cout<<"\n+++++++++++++ Menu de Donas +++++++++++++"<<endl;
          cout<<"1. Dona sencilla_____________________________$1.00"<<endl;
          cout<<"2. Rellena de leche_____________________________$1.25"<<endl;
          cout<<"3. Sabores especiales(Moca,caramelo)_____________________________$1.50"<<endl;
          cout<<"4. Salir"<<endl;
        cout<<"\nOpcion: ";   cin>>opcion;

        switch(opcion){
            case 1: cout<<"Tomando pedido"<<endl;
                    cout<<"Ingrese el apellido:";
                    getline(cin,cliente.apellido);
                    cin.ignore();
                    cout<<"Producto: Dona Sencilla";
                    donas.push(cliente);                  
            break;
            case 2: cout<<"Tomando pedido"<<endl;
                    cout<<"Ingrese el apellido:";
                    getline(cin,cliente.apellido);
                    cin.ignore();
                    cout<<"Producto: Rellena de leche";
                    donas.push(cliente); 
            break;
            case 3: cout<<"Tomando pedido"<<endl;
                    cout<<"Ingrese el apellido:";
                    getline(cin,cliente.apellido);
                    cin.ignore();
                    cout<<"Producto: Sabores especiales";
                    donas.push(cliente); 
            break;
            case 4: return;
            break;
            default: cout<<"Opcion no valida"<<endl; break;
        }
    }
    
}
void menuPlatosFuertes(queue<Cliente>&platosfuertes){
    int opcion;
    bool status =true;
    Cliente cliente;
    while(status){
          cout<<"\n+++++++++++++ Menu de Platos Fuertes +++++++++++++"<<endl;
          cout<<"1. Desayuno_____________________________$2.50"<<endl;
          cout<<"2. Almuerzo_____________________________$5.00"<<endl;
          cout<<"3. Cena_____________________________$3.50"<<endl;
          cout<<"4. Salir"<<endl;
          cout<<"\nOpcion: ";   cin>>opcion;

         switch(opcion){
            case 1: cout<<"Tomando pedido"<<endl;
                    cout<<"Ingrese el apellido:";
                    getline(cin,cliente.apellido);
                    cin.ignore();
                    cout<<"Producto: Desayuno";
                    platosfuertes.push(cliente); 
            break;
            case 2:cout<<"Tomando pedido"<<endl;
                    cout<<"Ingrese el apellido:";
                    getline(cin,cliente.apellido);
                    cin.ignore();
                    cout<<"Producto: Almuerzo";
                    platosfuertes.push(cliente);  
            break;
            case 3: cout<<"Tomando pedido"<<endl;
                    cout<<"Ingrese el apellido:";
                    getline(cin,cliente.apellido);
                    cin.ignore();
                    cout<<"Producto: Cena";
                    platosfuertes.push(cliente); 
            break;
            case 4: return;
            break;
            default: cout<<"Opcion no valida"<<endl; break;
        }
    }
}

void menu2(queue<Cliente>&donas,queue<Cliente>&platosfuertes){
    int opcion;
    bool status =true;
    while(status){
        cout<<"\n1. Desea comprar Donas"<<endl;
        cout<<"2. Desea comprar Platos fuertes"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"\nOpcion: ";   cin>>opcion;

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
    queue<Cliente> donas;
    queue<Cliente> platosfuertes;

   int opcion;
    bool status = true;
    while(status){
        cout<<endl;
        cout<<"+++++++++++++ MENU +++++++++++++"<<endl;
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
            default: cout<<"Opcion NO valida"<<endl;
            break;
        }
    }
    return 0;

}