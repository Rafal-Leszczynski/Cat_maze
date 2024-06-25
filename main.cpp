#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <algorithm>
#include <string>
#include <conio.h>
#include <cctype>
#include "headlines.hpp"

using namespace std;


string inst, pass, haslo, res;
long int drzwi, bezpiecznik;



//zrobic blokade na odpowiedzi co do przechodzenia miedzy pokojami, uzupelnic zawartosci pokoi, petla dziala w 1 i 2 etapie, 3 etap sprawdzic, sprawdzic dzialanie gry z hasla
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//          SPRAWDZIC CALY PROGRAM BO SIE ZROBILY DZIURY!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
int main()
{

    //SetWindow ();         <<==    TUTAJ PROBA USTALENIA WIELKOSCI
    //gogo ();              <<==    OKNA RECZNIE W PROGRAMIE< FIASKO

    kolor (7);
    //setlocale(LC_ALL,""); poslie znaki dzia³a  w main, ale nie dzia³a w void
       // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1000);
       {
           SetConsoleTitle("Koci Labirynt"); //zmiana nazwy konsoli (tytu³u)
       }
    do
      {
        drzwi=80;
        bezpiecznik=drzwi;
        cout <<""<<endl<< "Prawa autorskie: Rafal Leszczynski"                               <<endl<<""<<endl;          //ustawic kolory (tutaj test, problem z polskimi znakami w voidach
        cout <<" Witam w grze: "<<'"'<<"Koci Labirynt"<<'"'                                  <<endl<<""<<endl;
        cout <<" (w pliku z gra zapisano txt. z lnkami do ilustracji rzeczy wystepujacyh w grze.)"     <<endl;
        // zapis (); tymczasowow, odblokowac na koncu!!!!!!!!!!!!!!
    do
      {
        cout <<""<<endl<< "Czy chcesz zapoznac sie z instrukcja gry?  tak/nie"               <<endl<<""<<endl;
        cout <<" W kazdym momencie trwania gry mozesz wezwac instukcje."                     <<endl;
        cout <<" Podaj wtedy "<<'"'<<"0"<<'"'<<" (zero)."                                    <<endl<<""<<endl;
     //   cin  >>inst;                                                                                              POTEM SKASOWAC !!!!!!!!!!!!!
                                                                                                                    inst="nie";

        transform(inst.begin(),inst.end(),inst.begin(),::toupper);
    if ((inst!="TAK")&&(inst!="NIE")) zla_komenda ();
      }while ((inst!="TAK")&&(inst!="NIE"));
    if (inst=="TAK")    //INSTRUKCJA VOID
      {
          {
          //   sndPlaySound( "C:\Users\Vini i Kama\Documents\code blocks projekty\dosc duze projekty\Labirynt-gra\snd.wav", SND_ASYNC );  problem z dzwiekiem, ogarnac !!!!!!!!!!!!!!!!!!!!!!!!
          }
        instrukcja ();
      }
    do                  //CZY HASLO
      {
        cout << "Czy chcesz podac haslo dla pozniejszych etapow? tak/nie"                      <<endl;
       // cin  >>pass;                                                                                              POTEM SKASOWAC !!!
                                                                                                                    pass="tak";
        transform(pass.begin(),pass.end(),pass.begin(),::toupper);
    if ((pass!="TAK")&&(pass!="NIE")) zla_komenda ();
      }while ((pass!="TAK")&&(pass!="NIE"));
    if (pass=="TAK")    //WARUNEK DLA BLEDNEGO HASLA (KOMUNIKAT)
      {
        drzwi=90;
    do                  //POPRAWNOSC HASLA
      {
        cout <<""                                                                   <<endl;
        cout <<"Podaj haslo: (jesli chcesz zrezygnowac napisz ``XXXX``)"            <<endl;
       // cin  >>haslo;                                                                                                 POTEM SKASOWAC !!!
                                                                                                                        haslo="CHIMERA";
        transform(haslo.begin(),haslo.end(),haslo.begin(),::toupper);
    if ((haslo!="LESZY")&&(haslo!="CHIMERA")&&(haslo!="PERYT")&&(haslo!="XXXX")) zla_komenda ();
        } while ((haslo!="LESZY")&&(haslo!="CHIMERA")&&(haslo!="PERYT")&&(haslo!="XXXX"));
    if (haslo=="XXXX") haslo="LESZY";
      }
    else haslo="LESZY";
        cout <<""<<endl<<"ZACZYNAMY GRE?"                                                     <<endl<<""<<endl;
        system ("pause>nu1l");

        system("cls");




//////////////////PIERWSZY ETAP GRY////////////////////////////////////////////////////////////////////////////////
    if (haslo=="LESZY")
      {

        cout <<"Haslo do pierwszego poziomu to: LESZY"                                       <<endl<<""<<endl;
        cout <<"Twoim celem tego etapu jest tylko odnalesc pokoj nr 10 w labiryncie pokoji." <<endl;
        cout << "Podaj kolejny numer pokoju:"                                                <<endl<<""<<endl;
        drzwi=1;
        cout <<""                                                                            <<endl;
    do
      {
    if (drzwi==0)
        {
        instrukcja ();
        }
        if ((drzwi==888)||(drzwi==999)) inv=drzwi, inventory();
        bezpiecznik=drzwi;
        gra1 ();
        cout <<""                                                                            <<endl;
      }while (drzwi!=12345);
        cout <<""                                                                            <<endl;
      }
      system("cls");
///////////////////DRUGI ETAP GRY////////////////////////////////////////////////////////////////////////////// ZROBIC
    if (haslo=="CHIMERA")
      {
        drzwi=12345;
    do
      {
    if (drzwi==0)
        {
        instrukcja ();
        }
        gra2 ();
        cout <<""                                                                            <<endl;
      }while (drzwi!=98987);
        cout <<""                                                                            <<endl;
      }
      system("cls");
////////////////////TRZECI ETAP GRY///////////////////////////////////////////////////////////////////////////////////////////
    if (haslo=="PERYT")
      {
        drzwi=98987;
    do
      {
    if (drzwi==0)
        {
        instrukcja ();
        }
        gra3 ();
        cout <<""                                                                            <<endl;
      }while (drzwi!=56238);
        cout <<""                                                                            <<endl;
      }
//////////////////////////RESTART GRY//////////////////////////////////////////////////////////////////////////
        cout <<"Czy chcesz zrestartowac gre? tak/nie"                                        <<endl<<""<<endl;
        cin  >>res;
        transform(res.begin(),res.end(),res.begin(),::toupper);
      }while (res!="NIE");
        cout <<"koniec gry"                                                                  <<endl;

///////////////////DANE INFORMACYJNE//////////////////
    cout <<""                    <<endl<<""<<endl<<""<<endl;
    cout <<"DANE INFORMACYJNE:"  <<endl;
    cout <<haslo<<" haslo"       <<endl;
    cout <<drzwi<<" dzwi"        <<endl;
    cout <<res  <<" res"         <<endl;
    cout <<pass <<" pass"        <<endl;
    cout <<inst <<" inst"        <<endl;

    return 0;
}
