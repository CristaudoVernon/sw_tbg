#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class Character{
private:
    string name;
    int age;
public:
    void setName(string cName){ //setter
        name = cName;
    }
    string getName(){ //getter
        return name;
    }
    void setAge (int cAge){
        age = cAge;
    }
    int getAge(){
        return age;
    }

    Character (string cName, int cAge){
        name = cName;
        age = cAge;
    }
};

int main()
{
    Character pj = Character ("name", 00);


    cout << "Despiertas luego de estar inconsciente en una zona completamente desertica..." << endl;
    cout << endl;

    cout << "\n----------------------Presione cualquier tecla para continuar----------------------" << endl;
    _getch();
    system("cls");

    cout << "Intentas recordar como terminaste en esta situacion pero solo recuerdas tu nombre y tu edad: " << endl;

    string nName;
    cout << "Ingrese un nombre: ";
    getline(cin, nName);
    pj.setName(nName);
    cout << endl;

    int aAge;
    cout << "Ingresa una edad: ";
    cin >> aAge;
    pj.setAge(aAge);

    cout << "\n----------------------Presione cualquier tecla para continuar----------------------" << endl;
    _getch();
    system("cls");

    cout << "Palpando tus extremidades para checkear tu integridad fisica te encuentras con algunos objetos que estaban contigo: " << endl;
    cout << "Una tarjeta la cual esta completamente en blanco de ambos lados y un sable de luz." << endl;

    cout << "\n----------------------Presione cualquier tecla para continuar----------------------" << endl;
    _getch();
    system("cls");

    int itemCheck;
    cout << "# Que objeto quieres inspeccionar primero?" << endl;
    cout << "\t >> Ingresa '1' para inspeccionar la Tarjeta" << endl;
    cout << "\t >> Ingresa '2' para inspeccionar el Sable de luz" << endl;
    cout << "\t >> Ingresa '3' para finalizar las inspecciones" << endl;
    retry:
    cout << endl;
    cout << "Ingresa tu eleccion: ";
    cin >> itemCheck;

    if(itemCheck == 1){
        cout << "Es una tarjeta con ambos lados en blanco, no imagino porque tengo esto conmigo";
        cout << endl;
        cout << "Si quieres finalizar la inspeccion puedes presionar 3";
        goto retry;
    }else if (itemCheck == 2){
        cout << "Es un sable de luz... ¿Acaso soy un Jedi? Aunque me encantaria encenderlo, me da un poco de miedo hacerlo" << endl;
        cout << endl;
        cout << "Si quieres finalizar la inspeccion puedes presionar 3";
        goto retry;
    }else{
        cout << "Finalizaste de inspeccionar tus objetos" << endl;
        cout << endl;
    }

    cout << "\n----------------------Presione cualquier tecla para continuar----------------------" << endl;
    _getch();
    system("cls");

    cout << "Luego de la inspeccion de ambos objetos, ves tres figuras acercarse rapidamente..." << endl;
    cout << endl;

    cout << "\n----------------------Presione cualquier tecla para continuar----------------------" << endl;
    _getch();
    system("cls");

    cout << "Son tres niños que estaban jugando cerca, uno de ellos se acerca con asombro mientras ve tu sable de luz y pregunta: " << endl;
    cout << "\"Wooow, mira ese sable de luz! Eres un Jedi de verdad? Creiamos que eran solo una leyenda\"." << endl;
    cout << endl;
    cout << pj.getName() << " contesta con duda: " << endl;
    cout << "\"No lo se, ninio. Es posible que lo sea\"." << endl;
    cout << endl;

    cout << "\n----------------------Presione cualquier tecla para continuar----------------------" << endl;
    _getch();
    system("cls");

    cout << "Aprovechas para sacarte algunas dudas" << endl;
    int itemCheck2;
    cout << "# Sobre que quieres saber?" << endl;
    cout << "\t >> Ingresa '1': Que es este lugar?" << endl;
    cout << "\t >> Ingresa '2': Alguno vio como termine aqui?" << endl;
    cout << "\t >> Ingresa '3' para finalizar la conversacion" << endl;
    retry2:
    cout << endl;
    cout << "Ingresa tu eleccion: ";
    cin >> itemCheck2;

    if(itemCheck2 == 1){
        cout << "Uno de los ninios contesta: " << endl;
        cout << "\"Estamos en Tatooine, aproximadamente a 5 minutos del pueblo mas cercano\"." << endl;
        cout << endl;
        cout << "Si quieres finalizar la conversacion puedes ingresar '3'" << endl;
        goto retry2;
    }else if(itemCheck2 == 2){
        cout << "Uno de los ninios contesta: " << endl;
        cout << "\"Estabamos jugando cerca y te vimos caer del cielo! Es por eso que vinimos a ver\"." << endl;
        cout << endl;
        cout << "Si quieres finalizar la conversacion puedes ingresar '3'" << endl;
        goto retry2;
    }else{
        cout << "Luego de las preguntas, logras pararte y pides a los ninios indicaciones de como llegar al pueblo cercano" << endl;
        cout << endl;
    }

    cout << "\n----------------------Presione cualquier tecla para continuar----------------------" << endl;
    _getch();
    system("cls");

    cout << "Tras un viaje a pie hasta el pueblo mas cercano comienzas a escuchar ruidos a multitud y ves muchas tiendas con criaturas de" << endl;
    cout << "todos tamanios siendo comercializados como alimento, asi como tiendas de droides, naves y repuestos de todo tipo" << endl;
    cout << endl;

    cout << "\n----------------------Presione cualquier tecla para continuar----------------------" << endl;
    _getch();
    system("cls");

    int itemCheck3;
    cout << "# Quieres buscar informacion sobre lo que te sucedio, pero no sabes por donde comenzar: " << endl;
    cout << "\t >> Ingresa '1' para ir a la tienda de alimentos" << endl;
    cout << "\t >> Ingresa '2' para ir a la tienda de droides" << endl;
    cout << "\t >> Ingresa '3' para ir a la tienda de naves" << endl;
    retry3:
    cout << endl;
    cout << "Ingresa tu eleccion: ";
    cin >> itemCheck3;

    if (itemCheck3 == 1){
        cout << "Al acercarte notas que el \"chef\" no habla tu mismo idioma, por lo cual vuelves a la busqueda en otro lugar" << endl;
        goto retry3;
    }else if(itemCheck3 == 2){
        cout << "Te aproximas al dueño de la tienda y le dices: " << endl;
        cout << "\"Hola, mi nombre es " << pj.getName() << " y estoy buscando a alguien que me ayude con informacion" << endl;
        cout << endl;
        cout << "El comerciante de raza toydariana que esta vez si habla tu idioma te contesta: " << endl;
        cout << "\"No se de donde vienes, pero aqui las respuestas se dan si hay dinero, sino vete de mi tienda\"." << endl;
        cout << endl;
        cout << "Contestas: " << endl;
        cout << "\"No traigo dinero\".";
        cout << endl;
        cout << "Miras la tarjeta blanca" << endl;
        cout << endl;
        cout << "\"Podria darte esta tarjeta como pago\".";
        cout << endl;
        cout << "Comerciante: " << endl;
        cout << "\"Y para que quiero una tarjeta que no dice nada?\"." << endl;
        cout << "\"Si no tienes dinero, vete de mi tienda, no me hagas perder el tiempo\"." << endl;
        goto retry3;
    }else if (itemCheck3 == 3){
        cout << "Entras a la tienda de naves, pero no ves a nadie...";
        cout << endl;
        cout << "Exclamas: " << endl;
        cout << "\"H-Hola? Hay alguien aqui?\"." << endl;
        cout << endl;
        cout << "No parece haber nadie en la tienda" << endl;
        cout << endl;
        cout << "Cuando estabas por retirarte se escucha a lo lejos una voz" << endl;
        cout << "...ya voy!" << endl;
        cout << endl;
    }else{
    cout << "viva peron";
    }

    _getch();
    system("cls");

    if(itemCheck3 == 3){
        cout << "Cuando estabas por retirarte se escucha a lo lejos una voz" << endl;
        cout << "\"...ya voy!\"." << endl;
        cout << endl;
        cout << "Se aproxima a paso ligero un droide de protocolo un poco descuidado" << endl;
        cout << "\"Hola! Soy C-3PO, en que puedo ayudarte? Si estas buscando una nave usada, tenemos las mejores...";
        cout << endl;
        cout << "Contestas: " << endl;
        cout << "\"No realmente, pero ya que estas aqui, podrias decirme para que sirve esta tarjeta?" << endl;
        cout << endl;
    }

    cout << "\n----------------------Presione cualquier tecla para continuar----------------------" << endl;
    _getch();
    system("cls");

    cout << "El droide contesta: " << endl;
    cout << "\"Claro! Esta tarjeta es...\"." << endl;
    cout << endl;

    cout << "\n----------------------Presione cualquier tecla para continuar----------------------" << endl;
    _getch();
    system("cls");

    cout << "De pronto ingresan a la tienda dos stormtroopers" << endl;
    cout << endl;
    cout << "Y uno de los stormtrooper grita: " << endl;
    cout << "\"Alto ahi " << pj.getName() << " ,tu vienes con nosotros\"." << endl;
    cout << endl;

    cout << "\n----------------------Presione cualquier tecla para continuar----------------------" << endl;
    _getch();
    system("cls");

    cout << "El nombre del pj es: " << pj.getName() << endl;

    return 0;
}
