
#include <iostream>

using namespace std;

int main()
{
    int opcion;
   cout<<"Elige la opción que desees: \n";
   cout<<"(1)Programa que pida 10 números y los muestre en orden inverso al que fueron agregados\n";
   cout<<"(2)Programa que pida 10 números, calcule su media y luego muestre los que están por encima de la media\n";
   cout<<"(3)Programa que pida 10 números, para que calcule cuál es el mayor de ellos\n";
   cin>>opcion;
   
   switch(opcion)
   {
   {
       case 1:
       int v1[9];
        int i;
        
        for (i=0;i<10; i++)
        {
            cout<<"Introduce el valor para la lista: ";
            cin>>v1[i];
        }
    
        for (i = 9;i>-1; i--)
        {
            cout<<v1[i]<<", ";
        }    
       return 0;
   }  
   {
       case 2:

    int k;
    float suma = 0, v2[9], promedio;
    
    for (k=0;k<10; k++)
    {
        cout<<"Introduce el valor para la lista: ";
        cin>>v2[k];
    }
    for (k=0;k<10; k++)
    {
        suma = v2[k] + suma;
    }
    promedio = suma/10;
    for (k=0;k<10;k++)
    {
        if (v2[k] > promedio)
        {
            cout<<v2[k]<<", ";
        }
    }   
        
    }
    {
case 3:
 int e, c;
 float v3[9], grande = 0;
 for (e=0;e<10; e++)
    {
        cout<<"Introduce el valor para la lista: ";
        cin>>v3[e];
    }
    for (e=0;e<10; e++)
    {
            if (v3[e] >= grande){
                grande = v3[e];
                
        }
    }
    cout<<"El número mayor es: "<<grande;
return 0;
}
}
}
