#include<iostream>
using namespace std;
int main(){
  /*menú de monedas, distancia y peso*/
  int eleccion, moneda, distancia, peso;
  float dinero, dolar = 18.91, euro = 20.42, yen = 6.78, quetzal = 2.41, sol = 4.93, km, in = 39370.1, ft = 3280.84, cm = 100000, nm = 1e+12, ly = 1.057e-13, kg, to = 0.001, oz = 35.274, lb = 2.20462, mcg = 1e+9, tg = 1e-9;
  
  cout<<"\nElige con que tipo de medida quieres trabajar. Monedas(1), Distancia(2), Peso(3): ";
  cin>>eleccion;
  switch(eleccion){
      case 1:
        cout<<"\nHas elegido monedas. Ingresa la cantidad de dinero (MXN): ";
        cin>>dinero;
        cout<<"\n¿A que tipo de moneda deseas convertirlo? Dolar(1), Euro (2), Yen (3), Quetzal(4), Sol (5): ";
        cin>>moneda;
        switch(moneda){
            case 1:
                dinero = dinero / dolar;
                cout<<"\nLa cantidad convertida a dolares es: "<<dinero;
                break;
            case 2:
                dinero = dinero / euro;
                cout<<"\nLa cantidad convertida a euros es: "<<dinero;   
                break;
            case 3:
                dinero = dinero * yen;
                cout<<"\nLa cantidad convertida a yenes es: "<<dinero;   
                break;
            case 4:
                dinero = dinero / quetzal;
                cout<<"\nLa cantidad convertida a quetzales es: "<<dinero;   
                break;
            case 5:
                dinero = dinero / sol;
                cout<<"\nLa cantidad convertida a soles es: "<<dinero;   
                break;
            default:
                cout<<"\nERROR! Tiene que introducir una opción válida";
        }
        return 0;
      case 2:
        cout<<"\nHas elegido distancias. Ingresa la distancia (km): ";
        cin>>km;
        cout<<"\nElige la medida a la cual quieres transformar: pulgadas(1), pies(2), centímetros(3), nanómetros(4), años luz(5): ";
        cin>>distancia;
        switch(distancia){
            case 1:
                km = km * in;
                cout<<"\nLa distancia convertida a pulgadas es: "<<km;
                break;
            case 2:
                km = km * ft;
                cout<<"\nLa distancia convertida a pies es: "<<km;
                break;    
            case 3:
                km = km * cm;
                cout<<"\nLa distancia convertida a centimetros es: "<<km;
                break;
            case 4:
                km = km * nm;
                cout<<"\nLa distancia convertida a nanómetros es: "<<km;
                break;
            case 5:
                km = km * ly;
                cout<<"\nLa distancia convertida a años luz es: "<<km;
                break; 
            default:
                cout<<"\nERROR! Tiene que introducir una opción válida";
            
        }
        return 0;
      case 3:
        cout<<"\nHas elegido pesos. Ingresa el peso (kg): ";
        cin>>kg;
        cout<<"\nElige la medida a la cual quieres transformar: toneladas(1), onzas(2), libras(3), microgramos(4), teragramos(5): ";
        cin>>peso;
        switch(peso){
            case 1:
                kg = kg * to;
                cout<<"\nLa distancia convertida a toneladas es: "<<kg;
                break;  
            case 2:
                kg = kg * oz;
                cout<<"\nLa distancia convertida a onzas es: "<<kg;
                break;   
            case 3:
                kg = kg * lb;
                cout<<"\nLa distancia convertida a libras es: "<<kg;
                break;    
            case 4:
                kg = kg * mcg;
                cout<<"\nLa distancia convertida a microgramos es: "<<kg;
                break;   
            case 5:
                kg = kg * tg;
                cout<<"\nLa distancia convertida a teragramos es: "<<kg;
                break;
            default:
                cout<<"\nERROR! Tiene que introducir una opción válida";      
        }
  }
   return 0;
}
