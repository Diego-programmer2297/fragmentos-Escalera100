void cargarVectorManual(int v[],int tam){

    for(int i=0; i<tam; i++){

        cout<<"Ingrese valor: ";
        cin>>v[i];
        cout<<endl;
    }
}

void dosJugadores(int &puntuacionMasAlta, string &ganador){
    system("mode con cols=73 lines=25");
    system("cls");
    //j son los lanzamients del 2do jugador
    int tirada[6],ronda,j;
    char player1[30], player2[30];
    int total, total_1,total_2,maxpuntaje_1,maxpuntaje_2;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                         BIENVENIDOS"<<endl;
    cout<<endl;
    cout<<"                             JUGADOR 1"<<endl;
    cout<<"                             Ingrese nombre: ";
    cin>>player1;
    cout<<endl;
    cout<<endl;
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                         BIENVENIDOS"<<endl;
    cout<<endl;
    cout<<"                             JUGADOR 2"<<endl;
    cout<<"                             Ingrese nombre: ";
    cin>>player2;
    cout<<endl;
    cout<<endl;
    cout<<"                 Presione una tecla para Empezar el Juego...";
    system("pause>null");
    total=0;
    total_1=0;
    total_2=0;
    ronda=1;
    srand(time(NULL));
    while(total<100){


        maxpuntaje_1=1;
        maxpuntaje_2=1;
        j=0;
        for(int i=1;i<7;i++){


            if(i==1||i<4){

                if(i==1){
                    system("mode con cols=50 lines=25");
                    system("cls");
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout << "            Ronda N°: "<<ronda<<endl;
                    cout << "            Proximo Turno: "<<player1<<endl;
                    cout << "                                     "<<endl;
                    cout << "                                     "<<endl;
                    cout << "                                     "<<endl;
                    cout << "                                     " << endl;
                    cout << "            Puntaje "<<player1<<": "<<total_1<< endl;
                    cout << "            Puntaje "<<player2<<": "<<total_2<< endl;
                    cout << "                                       " << endl;
                    cout << "                                       " << endl;
                    cout << "                                       " << endl;
                    cout << "                                       "<<endl;
                    cout << "       Presione una Tecla para continuar.."<<endl;
                    system("pause>nul");
                    system("cls");

            }
                cargarVector(tirada, 6);


                if(escalera(tirada, 6)){
                    cout << "Felicidades " << player1 << " saco una escalera." << endl;
                    system("pause>null");
                    total=100;
                    break;
                }


                if(todosIguales(tirada, 6)){
                    int valorIgual= todosIguales2(tirada,6);
                    if(valorIgual!=6){
                        total_1 += tirada[0]*10;
                        if(tirada[0]*10>maxpuntaje_2){
                            maxpuntaje_2 = tirada[0]*10;
                        }
                    }

                    else{
                        total_1*=0;
                    }

                }
                else{

                    total_1 += sumarTirada(tirada, 6);
                    if(sumarTirada(tirada, 6)>maxpuntaje_1){
                        maxpuntaje_1 = sumarTirada(tirada, 6);
                    }
                }


                system("cls");
                system("mode con cols=73 lines=25");
                cout << "Jugador 1: " << player1 << " |  Ronda N°" << ronda << " |  Puntaje Total: " << total_1 << endl;
                cout << "-----------------------------------------------------------------------" << endl;
                if(maxpuntaje_1!=1){
                cout << "Maximo puntaje de la ronda: " << maxpuntaje_1 << endl;
                cout << "Lanzamiento: " << i << endl;
                }
                else cout << "Maximo puntaje de la ronda: " << endl;
                cout << "-----------------------------------------------------------------------" << endl;
                dados(tirada, 6);
                if(total_1<=100){
                    cout << endl << endl << "Presione cualquier tecla para seguir a la siguiente tirada" << endl;
                    system("pause>null");
                }
            }
            else{
                j++;
                    if(j==1){
                        system("mode con cols=50 lines=25");
                        system("cls");
                        cout<<endl;
                        cout<<endl;
                        cout<<endl;
                        cout << "            Ronda N°: "<<ronda<<endl;
                        cout << "            Proximo Turno: "<<player2<<endl;
                        cout << "                                     "<<endl;
                        cout << "                                     "<<endl;
                        cout << "                                     "<<endl;
                        cout << "                                     " << endl;
                        cout << "            Puntaje "<<player1<<": "<<total_1<< endl;
                        cout << "            Puntaje "<<player2<<": "<<total_2<< endl;
                        cout << "                                       " << endl;
                        cout << "                                       " << endl;
                        cout << "                                       " << endl;
                        cout << "                                       "<<endl;
                        cout << "      Presione una Tecla para continuar.."<<endl;
                        system("pause>nul");
                        system("cls");

            }

                cargarVector(tirada, 6);


                if(escalera(tirada, 6)){
                    cout << "Felicidades " << player2 << " saco una escalera." << endl;
                    system("pause>null");
                    total=100;
                    break;
                }

                if(todosIguales(tirada, 6)){
                    int valorIgual=todosIguales2(tirada,6);
                    if(valorIgual!=6){
                        total_2 += tirada[0]*10;
                        if(tirada[0]*10>maxpuntaje_2){
                            maxpuntaje_2 = tirada[0]*10;
                        }
                    }
                    else{
                        total_2*=0;
                    }
                }
                else{
                    total_2 += sumarTirada(tirada, 6);
                    if(sumarTirada(tirada, 6)>maxpuntaje_2){
                        maxpuntaje_2 = sumarTirada(tirada, 6);
                    }
                }

                    system("cls");
                    system("mode con cols=73 lines=25");
                    cout << "Jugador 2: " << player2 << " |  Ronda " << ronda << " | Puntaje Total: "<<total_2<< endl;
                    cout << "-----------------------------------------------------------------------" << endl;
                    if(maxpuntaje_2!=1){
                    cout << "Maximo puntaje de la ronda: " << maxpuntaje_2 << endl;
                    cout << "Lanzamiento: " << j << endl;
                    }
                    else cout << "Maximo puntaje de la ronda: " << endl;
                    cout << "-----------------------------------------------------------------------" << endl;
                    dados(tirada, 6);
                    if(total_2<=100){
                        cout << endl << endl << "Presione cualquier tecla para seguir a la siguiente tirada" << endl;
                        system("pause>null");
                    }

            }
            if(total_1>=100){
                cout<<endl;
                cout << "Felicidades " << player1 << " alcanzo los 100 puntos." << endl;
                cout << "Su puntaje total es de: " << total_1 << endl;

                if(total_1 > puntuacionMasAlta) {
                    puntuacionMasAlta = total_1;
                    ganador = player1;
                }

                total=total_1;
                system("pause>null");
                break;
            }
           else if (total_2>=100){
                cout<<endl;
                cout<< "Felicidades "<<player2 <<" alcanzo los 100 puntos."<< endl;
                cout<<"Su puntaje total es de: "<< total_2<< endl;

                if(total_2> puntuacionMasAlta){
                    puntuacionMasAlta = total_2;
                    ganador = player2;
                }
                total=total_2;
                system("pause>null");
                break;
           }
        }
        ronda++;
    }
}
void simulado2(){
    int puntuacionMasAlta=1;
    string ganador="";
    system("mode con cols=73 lines=25");
    system("cls");
    //j son los lanzamients del 2do jugador
    int tirada[6],ronda,j;
    char player1[30], player2[30];

    int total, total_1,total_2,maxpuntaje_1,maxpuntaje_2;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                         BIENVENIDOS"<<endl;
    cout<<endl;
    cout<<"                             JUGADOR 1"<<endl;
    cout<<"                             Ingrese nombre: ";
    cin>>player1;
    cout<<endl;
    cout<<endl;
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                         BIENVENIDOS"<<endl;
    cout<<endl;
    cout<<"                             JUGADOR 2"<<endl;
    cout<<"                             Ingrese nombre: ";
    cin>>player2;
    cout<<endl;
    cout<<endl;
    cout<<"                 Presione una tecla para Empezar el Juego...";

    total=0;
    total_1=0;
    total_2=0;
    ronda=1;
    srand(time(NULL));
    while(total<100){


        maxpuntaje_1=1;
        maxpuntaje_2=1;
        j=0;
        for(int i=1;i<7;i++){


            if(i==1||i<4){

                if(i==1){
                    system("mode con cols=50 lines=25");
                    system("cls");
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout << "            Ronda N°: "<<ronda<<endl;
                    cout << "            Proximo Turno: "<<player1<<endl;
                    cout << "                                     "<<endl;
                    cout << "                                     "<<endl;
                    cout << "                                     "<<endl;
                    cout << "                                     " << endl;
                    cout << "            Puntaje "<<player1<<": "<<total_1<< endl;
                    cout << "            Puntaje "<<player2<<": "<<total_2<< endl;
                    cout << "                                       " << endl;
                    cout << "                                       " << endl;
                    cout << "                                       " << endl;
                    cout << "                                       "<<endl;
                    cout << "       Presione una Tecla para continuar.."<<endl;
                    system("pause>nul");
                    system("cls");

            }
                system("cls");
                cargarVectorManual(tirada, 6);


                if(escalera(tirada, 6)){
                    cout << "Felicidades " << player1 << " saco una escalera." << endl;
                    system("pause>null");
                    total=100;
                    break;
                }


                if(todosIguales(tirada, 6)){
                    int valorIgual= todosIguales2(tirada,6);
                    if(valorIgual!=6){
                        total_1 += tirada[0]*10;
                        if(tirada[0]*10>maxpuntaje_2){
                            maxpuntaje_2 = tirada[0]*10;
                        }
                    }

                    else{
                        total_1*=0;
                    }

                }
                else{

                    total_1 += sumarTirada(tirada, 6);
                    if(sumarTirada(tirada, 6)>maxpuntaje_1){
                        maxpuntaje_1 = sumarTirada(tirada, 6);
                    }
                }


                system("cls");
                system("mode con cols=73 lines=25");
                cout << "Jugador 1: " << player1 << " |  Ronda N°" << ronda << " |  Puntaje Total: " << total_1 << endl;
                cout << "-----------------------------------------------------------------------" << endl;
                if(maxpuntaje_1!=1){
                cout << "Maximo puntaje de la ronda: " << maxpuntaje_1 << endl;
                cout << "Lanzamiento: " << i << endl;
                }
                else cout << "Maximo puntaje de la ronda: " << endl;
                cout << "-----------------------------------------------------------------------" << endl;
                dados(tirada, 6);
                if(total_1<=100){
                    cout << endl << endl << "Presione cualquier tecla para seguir a la siguiente tirada" << endl;
                    system("pause>null");
                }
            }
            else{
                j++;
                    if(j==1){
                        system("mode con cols=50 lines=25");
                        system("cls");
                        cout<<endl;
                        cout<<endl;
                        cout<<endl;
                        cout << "            Ronda N°: "<<ronda<<endl;
                        cout << "            Proximo Turno: "<<player2<<endl;
                        cout << "                                     "<<endl;
                        cout << "                                     "<<endl;
                        cout << "                                     "<<endl;
                        cout << "                                     " << endl;
                        cout << "            Puntaje "<<player1<<": "<<total_1<< endl;
                        cout << "            Puntaje "<<player2<<": "<<total_2<< endl;
                        cout << "                                       " << endl;
                        cout << "                                       " << endl;
                        cout << "                                       " << endl;
                        cout << "                                       "<<endl;
                        cout << "      Presione una Tecla para continuar.."<<endl;
                        system("pause>nul");
                        system("cls");

            }
                system("cls");
                cargarVectorManual(tirada, 6);


                if(escalera(tirada, 6)){
                    cout << "Felicidades " << player2 << " saco una escalera." << endl;
                    system("pause>null");
                    total=100;
                    break;
                }

                if(todosIguales(tirada, 6)){
                    int valorIgual=todosIguales2(tirada,6);
                    if(valorIgual!=6){
                        total_2 += tirada[0]*10;
                        if(tirada[0]*10>maxpuntaje_2){
                            maxpuntaje_2 = tirada[0]*10;
                        }
                    }
                    else{
                        total_2*=0;
                    }
                }
                else{
                    total_2 += sumarTirada(tirada, 6);
                    if(sumarTirada(tirada, 6)>maxpuntaje_2){
                        maxpuntaje_2 = sumarTirada(tirada, 6);
                    }
                }

                    system("cls");
                    system("mode con cols=73 lines=25");
                    cout << "Jugador 2: " << player2 << " |  Ronda " << ronda << " | Puntaje Total: "<<total_2<< endl;
                    cout << "-----------------------------------------------------------------------" << endl;
                    if(maxpuntaje_2!=1){
                    cout << "Maximo puntaje de la ronda: " << maxpuntaje_2 << endl;
                    cout << "Lanzamiento: " << j << endl;
                    }
                    else cout << "Maximo puntaje de la ronda: " << endl;
                    cout << "-----------------------------------------------------------------------" << endl;
                    dados(tirada, 6);
                    if(total_2<=100){
                        cout << endl << endl << "Presione cualquier tecla para seguir a la siguiente tirada" << endl;
                        system("pause>null");
                    }

            }
            if(total_1>=100){
                cout<<endl;
                cout << "Felicidades " << player1 << " alcanzo los 100 puntos." << endl;
                cout << "Su puntaje total es de: " << total_1 << endl;

                if(total_1 > puntuacionMasAlta) {
                    puntuacionMasAlta = total_1;
                    ganador = player1;
                }

                total=total_1;
                system("pause>null");
                break;
            }
           else if (total_2>=100){
                cout<<endl;
                cout<< "Felicidades "<<player2 <<" alcanzo los 100 puntos."<< endl;
                cout<<"Su puntaje total es de: "<< total_2<< endl;

                if(total_2> puntuacionMasAlta){
                    puntuacionMasAlta = total_2;
                    ganador = player2;
                }
                total=total_2;
                system("pause>null");
                break;
           }
        }
        ronda++;
    }
}

