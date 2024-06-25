#ifndef POKOJE_HPP_INCLUDED
#define POKOJE_HPP_INCLUDED

#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <algorithm>
#include <string>
#include <conio.h>
#include <cctype>

using namespace std;


// dla 2 etapu:
int artef_1=0, artef_2=0, artef_3=0, lom=0, kula_n=0, kula_c=0, kula_z=0, wiadro=0, lina=0, n_klucz=0, c_klucz=0, z_klucz=0, czar_klucz=0, ele_art=0;
int szyfr=0, wazon1=0, wazon2=0, wazon3=0, dzbanek=0, karafka=0, dywan=0, barykada=0, studnia=0, pryzmat=0, konsola=0, glify=0, krata=0;
int wybor, pozycz_int, licznik, licznik2;
int mlynek=0, kowadlo=0, stojak=0, mlot=0, piec=0, skrzynka=0, d_szafa=0, biurko=0;
// dla 3 atapu:
int jutro=0, trzy=0, mroz=0, cisza=0, dzwi=0, drogowskaz=0, parter=0, noc=0, gwiazdy=0;
string jutro_st="nie ", trzy_st="nie ", mroz_st="nie ", cisza_st="nie ", dzwi_st="nie ", drogowskaz_st="nie ", parter_st="nie ", noc_st="nie ", gwiazdy_st="nie ";
string odp, odp2, pozycz_str, pozycz_tymczas;
long double room;
//ogolne
string space_23="",space_24="",space_25="",space_27="",space_28="",space_29="", save="NIE";
int ilosc;
long double inv;
extern string haslo;
extern long int drzwi, bezpiecznik;




void kolor (int colo)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colo);
}
void SetWindow(int Width, int Height)       //<<++++cos nie lezy- nie dzialaja int?! (wielkosc konsoli)
{
    _COORD coord;
    coord.X = Width;
    coord.Y = Height;

    _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = Height - 1;
    Rect.Right = Width - 1;

    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);                    //Get Handle
    SetConsoleScreenBufferSize(Handle, coord);                          //Set Buffer Size
    SetConsoleWindowInfo(Handle, TRUE, &Rect);                          //Set Window Size
}
void gogo(void)                             //<<++++cos nie lezy- nie dzialaja int?!    (wielkosc konsoli)
{
    SetWindow (1,150);
}
void zapis ()
{
    kolor (5);
    if (save=="NIE")
    {
    fstream plik;
plik.open("linki.txt",ios::out);
plik <<"ogien czerwony:     https://st.depositphotos.com/1008244/4592/v/950/depositphotos_45929061-stock-illustration-column-with-fire.jpg"     <<endl<<""<<endl;
plik <<"ogien niebieski:    https://st.depositphotos.com/1008244/4585/v/950/depositphotos_45850733-stock-illustration-column-with-blue-fire.jpg"<<endl<<""<<endl;
plik <<"ogien zielony:      https://previews.123rf.com/images/dvarg/dvarg1912/dvarg191200230/135905033-ancient-column-with-green-flame-illustration-of-a-flaming-torch-based-on-the-torches-of-ancient-gree.jpg" <<endl<<""<<endl;
plik <<"1 element klucza:   https://thumbs.dreamstime.com/z/guld-dekorativ-isolerad-blommagemkonst-designbest%C3%A5ndsdel-antik-dekor-44442598.jpg"<<endl<<""<<endl;
plik <<"2 element klucza:   https://thumbs.dreamstime.com/z/guld-dekorativ-blom-isolerad-sidagemkonst-designbest%C3%A5ndsdel-antik-dekor-44442723.jpg"<<endl<<""<<endl;
plik <<"3 element klucza:   https://thumbs.dreamstime.com/z/guld-dekorativ-blom-isolerad-sidagemkonst-designbest%C3%A5ndsdel-antik-dekor-44442724.jpg"<<endl<<""<<endl;
plik <<"lom:                https://as2.ftcdn.net/v2/jpg/01/26/52/89/1000_F_126528947_xrYOAxDvuhCiATBDMzhCQqkavuzTHVk5.jpg"<<endl<<""<<endl;
plik <<"wiadro:             https://t3.ftcdn.net/jpg/01/27/28/00/240_F_127280065_WAY61AEvTWEXXtiC8R93NqXIgfhEq3oD.jpg"<<endl<<""<<endl;
plik <<"studnia:            https://t3.ftcdn.net/jpg/01/39/00/74/240_F_139007412_Nwcy9RKwVCu1LB37PwLrS0w8CoRuwqgA.jpg"<<endl<<""<<endl;
plik <<"lina:               https://t4.ftcdn.net/jpg/01/70/31/15/240_F_170311553_VqmD0O1W7pkRMi4LtcHkIKf7NwslfJG1.jpg"<<endl<<""<<endl;
plik <<"klucze:             https://static.turbosquid.com/Preview/001281/404/KB/_600.jpg"<<endl<<""<<endl;
plik <<"glify:              https://thumbs.dreamstime.com/z/symbole-alchemiczne-planety-astrologicznej-astrologiczny-wektor-symboli-alchemicznych-205591920.jpg"<<endl<<""<<endl;
    plik.close();
    }
    cout <<"Czy wyswietlic linki do grafik w grze? tak/nie"<<endl;
    cin >>save;
    transform(save.begin(),save.end(),save.begin(),::toupper);
    if (save=="TAK")
    {
cout <<"ogień czerwony:     https://st.depositphotos.com/1008244/4592/v/950/depositphotos_45929061-stock-illustration-column-with-fire.jpg"     <<endl<<""<<endl;
cout <<"ogień niebieski:    https://st.depositphotos.com/1008244/4585/v/950/depositphotos_45850733-stock-illustration-column-with-blue-fire.jpg"<<endl<<""<<endl;
cout <<"ogień zielony:      https://previews.123rf.com/images/dvarg/dvarg1912/dvarg191200230/135905033-ancient-column-with-green-flame-illustration-of-a-flaming-torch-based-on-the-torches-of-ancient-gree.jpg" <<endl;
cout <<"1 element klucza:   https://thumbs.dreamstime.com/z/guld-dekorativ-isolerad-blommagemkonst-designbest%C3%A5ndsdel-antik-dekor-44442598.jpg"<<endl;
cout <<"2 element klucza:   https://thumbs.dreamstime.com/z/guld-dekorativ-blom-isolerad-sidagemkonst-designbest%C3%A5ndsdel-antik-dekor-44442723.jpg"<<endl;
cout <<"3 element klucza:   https://thumbs.dreamstime.com/z/guld-dekorativ-blom-isolerad-sidagemkonst-designbest%C3%A5ndsdel-antik-dekor-44442724.jpg"<<endl;
cout <<"łom:                https://as2.ftcdn.net/v2/jpg/01/26/52/89/1000_F_126528947_xrYOAxDvuhCiATBDMzhCQqkavuzTHVk5.jpg"<<endl;
cout <<"wiadro:             https://t3.ftcdn.net/jpg/01/27/28/00/240_F_127280065_WAY61AEvTWEXXtiC8R93NqXIgfhEq3oD.jpg"<<endl;
cout <<"studnia:            https://t3.ftcdn.net/jpg/01/39/00/74/240_F_139007412_Nwcy9RKwVCu1LB37PwLrS0w8CoRuwqgA.jpg"<<endl;
cout <<"lina:               https://t4.ftcdn.net/jpg/01/70/31/15/240_F_170311553_VqmD0O1W7pkRMi4LtcHkIKf7NwslfJG1.jpg"<<endl;
cout <<"klucze:             https://static.turbosquid.com/Preview/001281/404/KB/_600.jpg"<<endl;
cout <<"glify:              https://thumbs.dreamstime.com/z/symbole-alchemiczne-planety-astrologicznej-astrologiczny-wektor-symboli-alchemicznych-205591920.jpg"<<endl;
    }
    if (save=="NIE") cout <<"OK"<<endl;
    if ((save!="NIE")&&(save!="TAK")) cout <<"Bledny komunikat, krok pominiety." <<endl;
    kolor (7);
}
void inventory ()
{
    if (inv==999) //sprawdzenie inwentarza/rozwiazanych zagadek- zrobione
      {
        kolor (23);
    cout <<"999***************************************************************************"<<endl;
    if (haslo=="CHIMERA") //
        {
        cout <<"TWOJE PRZEDMIOTY:"<<endl<<""<<endl;
        cout <<"Posiadasz "<<(artef_1+artef_2+artef_3+lom+kula_n+kula_c+kula_z+wiadro+lina+n_klucz+c_klucz+z_klucz+czar_klucz)<<" przedmiotow: "<<endl;
        if (lom==1) cout <<"Lom"<<endl;
        if (lina==1) cout <<"Lina"<<endl;
        if (wiadro==1) cout <<"Wiadro"<<endl;
      if ((artef_1==1)||(artef_2==1)||(artef_3==1)) cout <<""<<endl<<"Artefakty:"<<endl;
        if (artef_1==1) cout <<"Artefakt 1 czesc"<<endl;
        if (artef_2==1) cout <<"Artefakt 2 czesc"<<endl;
        if (artef_3==1) cout <<"Artefakt 3 czesc"<<endl;
      if ((kula_n==1)||(kula_c==1)||(kula_z==1)) cout <<""<<endl<<"Kule:"<<endl;
        if (kula_n==1) cout <<"Niebieska kula"<<endl;
        if (kula_c==1) cout <<"Czerwone kula"<<endl;
        if (kula_z==1) cout <<"Zolta kula"<<endl;
      if ((n_klucz==1)||(c_klucz==1)||(z_klucz==1)||(czar_klucz==1)) cout <<""<<endl<<"Klucze:"<<endl;
        if (n_klucz==1) cout <<"Niebieski klucz"<<endl;
        if (c_klucz==1) cout <<"Czerwony klucz"<<endl;
        if (z_klucz==1) cout <<"Zolty klucz"<<endl;
        if (czar_klucz==1) cout <<"Czarny klucz"<<endl;
        }
    if (haslo=="PERYT")
        {
        (ilosc=jutro+trzy+mroz+cisza+dzwi+drogowskaz+parter+noc+gwiazdy);
        cout <<"Rozwiazane zagadki:"<<endl<<""<<endl;
        cout <<"Rozwiazales: "<<ilosc<<" zagadek z 9."<<endl<<""<<endl;
        cout <<"``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````"<<endl;
        cout <<"W pokoju 22 zagadka "<<jutro_st<<"rozwiazana."<<endl;
        cout <<"pok.23 "<<trzy_st<<"rozwiazana,"<<space_23<<"   pok.24 "<<mroz_st<<"rozwiazana,"<<space_24<<"   pok.25 "<<cisza_st<<"rozwiazana,"<<space_25<<"  pok.26 "<<dzwi_st<<"rozwiazana,"<<endl;
        cout <<"pok.27 "<<drogowskaz_st<<"rozwiazana,"<<space_27<<"   pok.28 "<<parter_st<<"rozwiazana,"<<space_28<<"   pok.29 "<<noc_st<<"rozwiazana,"<<space_29<<"  pok.30 "<<gwiazdy_st<<"rozwiazana."<<endl;
        cout <<""<<endl;
        //if ((jutro==1)&&(trzy==1)&&(mroz==1)&&(cisza==1)&&(dzwi==1)&&(drogowskaz==1)&&(parter==1)&&(noc==1)&&(gwiazdy==1)) cout <<"Pokoj 31 jest otwarty i plonie na czerwono."<<endl; stary zapis
        //if ((jutro==0)&&(trzy==0)&&(mroz==0)&&(cisza==0)&&(dzwi==0)&&(drogowskaz==0)&&(parter==0)&&(noc==0)&&(gwiazdy==0)) cout <<"Pokoj 31 jest zamkniety i plonie na zielono."<<endl; stary zapis
        if (ilosc!=9) cout <<"Pokoj 31 jest zamkniety i ogien płonie na zielono."<<endl;
        if (ilosc==9) cout <<"Pokoj 31 jest otwarty i ogień plonie na czerwono."<<endl;
        ilosc=0;
        }
    if (haslo=="LESZY")
        {
        cout <<"Brak przedmiotow do wyswietlenia w inwentarzu."<<endl;
        cout <<"Brak zagadek do rozwiazania."                  <<endl;
        }
        kolor (7);
    }



      { //STARY ZAPIS o inv==777
        cout <<""<<endl;
    /*if (inv==777) //podniesienie przedmiotu; - zrobic---aktualizacja NIE DZIALA< NA TE CHWILE GLUPI POMYSL;
      {
    cout <<"999***************************************************************************"<<endl;
        cout <<"Podniesienie przedmiotu"<<endl<<""<<endl;
    if (haslo!="CHIMERA")
        {
        cout <<"Na tym etapie gry nie masz co podniesc."<<endl<<""<<endl;
        }
    if (haslo=="CHIMERA") //
        {
        if ((lom==0)&&(bezpiecznik==11)&&(wybor==6))            cout <<"Lom"<<endl;
        if ((lina==0)&&(bezpiecznik==13))           cout <<"Lina"<<endl;
        if ((wiadro==0)&&(bezpiecznik==12))         cout <<"Wiadro"<<endl;
        if ((artef_1==0)&&(bezpiecznik==19)&&(wybor==2))        cout <<"Artefakt 1 czesc"<<endl;
        if ((artef_2==0)&&(bezpiecznik==14))        cout <<"Artefakt 2 czesc"<<endl;
        if ((artef_3==0)&&(bezpiecznik==11))        cout <<"Artefakt 3 czesc"<<endl;
        if ((kula_n==0)&&(bezpiecznik==17))         cout <<"Niebieska kula"<<endl;
        if ((kula_c==0)&&(bezpiecznik==18))         cout <<"Czerwone kula"<<endl;
        if ((kula_z==0)&&(bezpiecznik==15))         cout <<"Zolta kula"<<endl;
        if ((n_klucz==0)&&(bezpiecznik==12))        cout <<"Niebieski klucz"<<endl;
        if ((c_klucz==0)&&(bezpiecznik==16))        cout <<"Czerwony klucz"<<endl;
        if ((z_klucz==0)&&(bezpiecznik==13))        cout <<"Zolty klucz"<<endl;
        if ((czar_klucz==0)&&(bezpiecznik==20))     cout <<"Czarny klucz"<<endl;
        }
      }
        */
      }
    if (inv==888) //aktywacja/uzycie przedmiotu
      {
          kolor (71);
    cout <<"888***************************************************************************"<<endl;
        cout <<"Aktywacja/uzycie przedmiotu"<<endl<<""<<endl;
    if (haslo=="CHIMERA") //
        {
        cout <<"Ktory przedmiot chcesz uzyc:"<<endl;
        ilosc=(artef_1+artef_2+artef_3+lom+kula_n+kula_c+kula_z+wiadro+lina+n_klucz+c_klucz+z_klucz+czar_klucz);
         if (ilosc!=0)      ilosc+=1; //dodawanie jeden aby uniknac nadania "0" jakiemus itemowi.
         if (lom==1)        ilosc=(ilosc-1), cout <<ilosc<<") Lom"<<endl;
         if (lina==1)       ilosc=(ilosc-1), cout <<ilosc<<") Lina"<<endl;
         if (wiadro==1)     ilosc=(ilosc-1), cout <<ilosc<<") Wiadro"<<endl;
      if ((artef_1==1)||(artef_2==1)||(artef_3==1)) cout <<""<<endl<<"Artefakty:"<<endl;
        if (artef_1==1)     ilosc=(ilosc-1), cout <<ilosc<<") Artefakt 1 czesc"<<endl;
        if (artef_2==1)     ilosc=(ilosc-1), cout <<ilosc<<") Artefakt 2 czesc"<<endl;
        if (artef_3==1)     ilosc=(ilosc-1), cout <<ilosc<<") Artefakt 3 czesc"<<endl;
      if ((kula_n==1)||(kula_c==1)||(kula_z==1)) cout <<""<<endl<<"Kule:"<<endl;
        if (kula_n==1)      ilosc=(ilosc-1), cout <<ilosc<<") Niebieska kula"<<endl;
        if (kula_c==1)      ilosc=(ilosc-1), cout <<ilosc<<") Czerwone kula"<<endl;
        if (kula_z==1)      ilosc=(ilosc-1), cout <<ilosc<<") Zolta kula"<<endl;
      if ((n_klucz==1)||(c_klucz==1)||(z_klucz==1)||(czar_klucz==1)) cout <<""<<endl<<"Klucze:"<<endl;
        if (n_klucz==1)     ilosc=(ilosc-1), cout <<ilosc<<") Niebieski klucz"<<endl;
        if (c_klucz==1)     ilosc=(ilosc-1), cout <<ilosc<<") Czerwony klucz"<<endl;
        if (z_klucz==1)     ilosc=(ilosc-1), cout <<ilosc<<") Zolty klucz"<<endl;
        if (czar_klucz==1)  ilosc=(ilosc-1), cout <<ilosc<<") Czarny klucz"<<endl;
        //lom 13, lina, wiadro, artefakt1 artefakt2, artefakt3, niebieska kula, czerwona kula, zolta kula, niebieski klucz, czerwony klucz, zolty klucz, czarny klucz;
        cin >>drzwi;
        wybor=drzwi+100;
        cout <<"Zrobic jeszcze uycie- na te chwile z automatu drzwi = bezpiecznik"<<endl, wybor=bezpiecznik;
        ilosc=0;
        }
    if (haslo!="CHIMERA")
        {
        cout <<"Na tym etapie nie masz zadnych przedmiotow."<<endl;
        }
        kolor (7);
      }
        cout <<""<<endl;
drzwi=bezpiecznik;

}
void zla_komenda ()
{
    kolor (12);
    if      (drzwi==80)             cout <<""<<endl<<"ZLA KOMENDA!!! Wybierz tak albo nie."            <<endl<<""<<endl;
    if      (drzwi==90)             cout <<""<<endl<<"NIEPRAWIDLOWE HASLO!!!"                         <<endl<<""<<endl;
    if ((drzwi!=80)&&(drzwi!=90))   cout <<""<<endl<<"NIEPRAWIDLOWY WYBOR NUMERU POKOJU!!!"            <<endl<<""<<endl;
    kolor (7);
    drzwi=bezpiecznik;
}
void sprawdzenie()
{
    kolor (39);
    cout <<"Pokoj 31. Sprawdzasz czy da się otworzyc drzwi..."                                          <<endl<<""<<endl;
    (ilosc=jutro+trzy+mroz+cisza+dzwi+drogowskaz+parter+noc+gwiazdy);
    if (ilosc==9)
    //if ((gwiazdy==1)&&(noc==1)&&(parter==1)&&(drogowskaz==1)&&(dzwi==1)&&(cisza==1)&&(mroz==1)&&(trzy==1)&&(jutro==1)) stary zapis
    {
        drzwi=31;
    }
    if (ilosc!=9)
    //if ((gwiazdy==0)||(noc==0)||(parter==0)||(drogowskaz==0)||(dzwi==0)||(cisza==0)||(mroz==0)||(trzy==0)||(jutro==0)) stary zapis
    {
        room=21;
        drzwi=bezpiecznik;
        cout <<"Niestety, nie wszystkie zagadki są rozwiazane"<<endl<<""<<endl;
    }
    kolor (7);
}
void instrukcja()
{
    kolor (14);
        cout <<""<<endl;
        cout <<""                                                                                       <<endl;
        cout <<"                    GRA NIE OBSLUGUJE POLSKICH ZNAKOW"                                  <<endl;
        cout <<"         Gra jest podzielona na 3 etapy. Po kazdym wyswieli sie haslo."                 <<endl;
        cout <<"                Pozwoli on pozniej wznowic gre od danego etapu."                        <<endl;
        cout <<"        Gra polega na dojsciu z pokoju startowego do ostatniego pokoju."                <<endl;
        cout <<"            Zaczynasz w pokoju nr 1, a ostatni pokoj ma numer 31."                      <<endl;
        cout <<"  Pierwszy etap konczy sie na pokoju nr10, drugi etap=20 i trzeci etap na 31"           <<endl;
        cout <<"            Przechodzac do kolejnych pokoji podajesz numer pokoju."                     <<endl;
        cout <<"          Jesli wracasz do poprzedniego pokoju, tez podajesz jego numer."               <<endl;
        cout <<"                W grze nie zawsze możesz otworzyc kazde drzwi."                         <<endl;
        cout <<"              Czasem jest potrzebny klucz, kod, zagadka, etc."                          <<endl;
        cout <<"         Poprzez wezwanie nastepującyh cyfr/ciągu cyfr uzyskamy: "                      <<endl;
        cout <<""                                                                                       <<endl;
        cout <<"     Uzycie/aktywacje przedmiotu:                             "<<'"'<<"888"<<'"'        <<endl;
        cout <<"     Sprawdzenie swojego inwentarza, rozwiazanych zagadek:    "<<'"'<<"999"<<'"'        <<endl;
        cout <<"     Ponowne wezwanie instrukcji:                             "<<'"'<<"0"<<'"'<<"(zero)"<<endl;
        cout <<""<<endl;
    drzwi=bezpiecznik;
    kolor (7);
}
void gra1()  //dziala
{
                                            switch (drzwi) //przerzucic int na string i string na int, zabezpieczyc wybor drzwi jako string oraz zbyt wysoka lidzba.
    {

        case 1: //pokoj nr 0
            bezpiecznik=drzwi;
            do{
                cout << "Pokoj numer 1. Dzwi nr4, nr2, nr9"               <<endl<<""<<endl;
                cin >>drzwi;
                if ((drzwi!=4)&&(drzwi!=2)&&(drzwi!=9)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999)) zla_komenda ();
              }while ((drzwi!=4)&&(drzwi!=2)&&(drzwi!=9)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999));
        break;

        case 2:
            bezpiecznik=drzwi;
            do{
                cout << "Pokoj numer 2. Dzwi nr1, nr8, nr6"               <<endl<<""<<endl;
                cin  >>drzwi;
                if ((drzwi!=1)&&(drzwi!=8)&&(drzwi!=6)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999)) zla_komenda ();
              }while ((drzwi!=1)&&(drzwi!=8)&&(drzwi!=6)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999));
        break;

        case 3:
            bezpiecznik=drzwi;
            do{
                cout << "Pokoj numer 3. Dzwi nr5, nr8, nr4"               <<endl<<""<<endl;
                cin  >>drzwi;
                if ((drzwi!=5)&&(drzwi!=8)&&(drzwi!=4)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999)) zla_komenda ();
              }while ((drzwi!=5)&&(drzwi!=8)&&(drzwi!=4)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999));
        break;

        case 4:
            bezpiecznik=drzwi;
            do{
                cout << "Pokoj numer 4. Dzwi nr1, nr3, nr9"               <<endl<<""<<endl;
                cin  >>drzwi;
                if ((drzwi!=1)&&(drzwi!=3)&&(drzwi!=9)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999)) zla_komenda ();
              }while ((drzwi!=1)&&(drzwi!=3)&&(drzwi!=9)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999));
        break;

        case 5:
            bezpiecznik=drzwi;
            do{
                cout << "Pokoj numer 5. Dzwi nr3, nr8, nr7"               <<endl<<""<<endl;
                cin  >>drzwi;
                if ((drzwi!=3)&&(drzwi!=8)&&(drzwi!=7)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999)) zla_komenda ();
              }while ((drzwi!=3)&&(drzwi!=8)&&(drzwi!=7)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999));
        break;

        case 6:
            bezpiecznik=drzwi;
            do{
                cout << "Pokoj numer 6. Dzwi nr7, nr2, nr10"               <<endl<<""<<endl;
                cin  >>drzwi;
                if ((drzwi!=7)&&(drzwi!=2)&&(drzwi!=10)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999)) zla_komenda ();
              }while ((drzwi!=7)&&(drzwi!=2)&&(drzwi!=10)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999));
        break;

        case 7:
            bezpiecznik=drzwi;
            do{
                cout << "Pokoj numer 7. Dzwi nr6, nr5, nr9"               <<endl<<""<<endl;
                cin  >>drzwi;
                if ((drzwi!=6)&&(drzwi!=5)&&(drzwi!=9)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999)) zla_komenda ();
              }while ((drzwi!=6)&&(drzwi!=5)&&(drzwi!=9)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999));
        break;

        case 8:
            bezpiecznik=drzwi;
            do{
                cout << "Pokoj numer 8. Dzwi nr2, nr3, nr5"               <<endl<<""<<endl;
                cin  >>drzwi;
                if ((drzwi!=2)&&(drzwi!=3)&&(drzwi!=5)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999)) zla_komenda ();
              }while ((drzwi!=2)&&(drzwi!=3)&&(drzwi!=5)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999));
        break;

        case 9:
            bezpiecznik=drzwi;
            do{
                cout << "Pokoj numer 9. Dzwi nr1, nr7, nr4"               <<endl<<""<<endl;
                cin  >>drzwi;
                if ((drzwi!=1)&&(drzwi!=7)&&(drzwi!=4)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999)) zla_komenda ();
              }while ((drzwi!=1)&&(drzwi!=7)&&(drzwi!=4)&&(drzwi!=0)&&(drzwi!=888)&&(drzwi!=999));
        break;

        case 10:
            cout << "Pokoj numer 10. Koniec pierwszego etapu."         <<endl<<""<<endl;
            cout << "Haslo do 2 poziomu to: CHIMERA"                   <<endl<<""<<endl;
            haslo="CHIMERA";
            drzwi=12345;
            bezpiecznik=drzwi;
            cout <<""<<endl<<"(nacisnij ENTER)"                                                     <<endl<<""<<endl;
            system("pause>null");
            cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<""<<endl;
        break;
    }
}
void gra2 () //drugi etap nie dziala, brak sprawdzenia inventarza
{
                                        switch (drzwi) //TOTALNY CHAOS DO OGARNIECIA!!! //zrobic: itemy i zamkniecia pokoi, nie przedskakiwanie z kazdego do dowolnego pokoju, ogranicznia dla drzwi
    {
                 case 12345:
        {
            cout <<"Pokoj numer 10, w 2 etapie. Wielka sala."          <<endl;
            drzwi=10;
            //bezpiecznik=10;
        }
        break;
                case 10: //dziala wywolanie inventory, instrukcja, wychodzenie z pokoju- uzupelnic inventory oraz komendy inventory oraz instrukcji w pozostalych pokojach.
                         // zrobic osobny switch dla wyboru co robia w pokoju //int lom=0, kula_c=0, kula_z=0, kula_n=0, barykada=0, wiadro=0, lina=0, studnia=0;
                         //zrobic dzialanie 999, 888, nic nie można zrobić ponieważ
        {

            do
            {
            bezpiecznik=drzwi;
            if ((artef_1+artef_2+artef_3)==3) ele_art=1;
            cout <<""                                                                                                         <<endl;
            cout <<"Pokoj numer 10"                                                                                           <<endl;
            cout <<"Pokoje do wyboru:"                                                                                        <<endl;
            cout <<"11  12  13  14  15  16  17  18  19  20  21"                                                               <<endl;
            cout <<"Ktore drzwi wybierasz?"                                                                                   <<endl<<""<<endl;
            cin>>drzwi;
            wybor=drzwi;
            if (drzwi==10) cout <<""<<endl<<"Jestes w tym pokoju."                                                            <<endl<<""<<endl;
            if ((drzwi!=0)&&(drzwi<=9)||(drzwi>=22)&&(drzwi!=888)&&(drzwi!=999)) zla_komenda ();
            if (drzwi==21)
            {
            cout <<""<<endl<<"Probujesz dostac sie do ostatnich drzwi"<<endl;
            if ((czar_klucz==0)||(ele_art==0)) drzwi=10, cout <<"Wrota wciaz sa zamkniete"<<endl;
            }

            }while ((drzwi!=0)&&(drzwi<=9)||(drzwi>=22)&&(drzwi!=888)&&(drzwi!=999));
            if ((drzwi==888)||(drzwi==999)) inv=wybor, inventory ();
            if (drzwi==0) instrukcja ();
            if ((wybor==999)||(wybor==888)) system("pause>nul");
            wybor=NULL;

        }
        break;
                case 11:                //3 element artefaktu, lom, szyfr 50; //działa na 4.06 w 100%
        {
            do
            {
            bezpiecznik=drzwi;
            wybor=0;
            system("cls");
                            cout <<"Pokoj numer 11"                                                                                             <<endl;
                            cout <<"1)Stojacy w koncie, przepelniony od zniszczonych ubran wieszak na trzech nogach."                           <<endl;
                            cout <<"2)Na scianie wisi obraz kobiety w sukni slubne, welon zakrywa jej twarz,"                                   <<endl;
            if (artef_1==0) cout <<"Pana mloda ma przypieta wystajaca z obrazu broszke."                                                        <<endl;
            if (artef_1==1) cout <<"Na obrazie jest slad po broszce."                                                                           <<endl;
                            cout <<"3)Zamiast bukietu w rekach trzyma mala porwana w pol kartke z cyframi "<<'"'<<"5"<<'"'<<" i "<<'"'<<"0"<<'"'<<endl;
                            cout <<"4)Na czerwonym dywanie na srodku pokoju stoi okrogly stolik i dwa przewrocone krzesla."                     <<endl;
                            cout <<"5)W lewym koncie jest z duza donica z uschnietymi na wior liscmi palmowymi."                                <<endl;
            if (lom==0)     cout <<"6)Na podlodze lezy lom."                                                                                    <<endl;
            if (lom==1)     cout <<"6)Puste miejsce po lomie."                                                                                  <<endl;
                            cout <<"10)Powrot do pokoju numer 10."                                                                              <<endl;
            cout <<""<<endl;
            cout <<"Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"                                                            <<endl<<""<<endl;
            cin >>wybor;
            //artef_1
                                                    switch(wybor)
            {
            case 2:
                {
                    //broszka
                    if (artef_1==0)
                    {
                        do
                        {
                        cout <<"Czy chcesz zabrac broszke? tak/nie"<<endl;
                        cin  >>odp;
                        transform(odp.begin(),odp.end(),odp.begin(),::toupper);
                        if (odp=="TAK") artef_1=1, cout <<"Zebrano przedmiot: swietlista broszka." <<endl;
                        if (odp=="NIE") cout <<"Cofasz sie pod drzwi."<<endl;
                        if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
                        }while ((odp!="NIE")&&(odp!="TAK"));
                    }
                    else cout <<"Broszka zostala zabrana juz wczesniej."<<endl;
                }
            break;
            case 6:
                {
                    //lom
                    if (lom==0)
                    {
                        do
                        {
                        cout <<"Czy chcesz zabrac lom? tak/nie"<<endl;
                        cin  >>odp;
                        transform(odp.begin(),odp.end(),odp.begin(),::toupper);
                        if (odp=="TAK") lom=1, cout <<"Zebrano przedmiot: lom." <<endl;
                        if (odp=="NIE") cout <<"Cofasz sie pod drzwi."<<endl;
                        if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
                        }while ((odp!="NIE")&&(odp!="TAK"));
                    }
                    else cout <<"Lom zostal zabrany juz wczesniej."<<endl;
                }
            break;
            }
            if ((wybor!=2)&&(wybor!=6)&&(wybor!=10)&&(wybor!=0)&&(wybor!=999)&&(wybor!=888)) cout <<"Nie mozna nic zrobic"<<endl;
            if ((wybor!=10)&&(wybor!=999)&&(wybor!=888)&&(wybor>6)||(wybor<0)) cout<<"...poniewaz: "<<endl;
            if (wybor==10) drzwi=10, system("cls");
            if ((wybor!=1)&&(wybor!=2)&&(wybor!=3)&&(wybor!=4)&&(wybor!=5)&&(wybor!=6)&&(drzwi!=10)&&(wybor!=0)&&(wybor!=999)&&(wybor!=888)) zla_komenda ();
            if ((wybor==888)||(wybor==999)) inv=wybor, inventory ();
            if (wybor==0) instrukcja ();
            if (wybor!=10) system("pause>nul");
            }while (drzwi!=10);
        }
        break;
                case 12:                //wiadro, pod nim niebieski klucz;
        {
            do
            {
            bezpiecznik=drzwi;
            wybor=0;
            system("cls");

                                            cout <<"Pokoj numer 12"                                                             <<endl;
                                            cout <<"1)Cegla, krucha, prawie cala w kawalkach"                                   <<endl;
                                            cout <<"2)Obraz "<<'"'<<"Saturn pozerajacy wlasne dzieci"   <<'"'                   <<endl;
                                            cout <<"3)Obraz "<<'"'<<"Kiedy rozum spi, budza sie potwory"<<'"'                   <<endl;
            if (wiadro==0)                  cout <<"4)Na ziemi lezy metalowe wiadro."                                           <<endl;
            if ((wiadro==1)&&(n_klucz==0))  cout <<"4)Na ziemi w mejscu po wiadrze lezy niebieski klucz."                       <<endl;
            if (n_klucz==1)                 cout <<"4)Puste miejsce na ziemi."                                                  <<endl;
                                            cout <<"5)Obraz "<<'"'<<"Sabat czarownic"<<'"'                                      <<endl;
                                            cout <<"6)Obraz "<<'"'<<"Stare kobiety i czas"<<'"'                                 <<endl;
                                            cout <<"10)Powrot do pokoju numer 10."                                              <<endl;
            cout <<""<<endl;
            cout <<"Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"                                            <<endl<<""<<endl;
            cin>>wybor;

                                                switch(wybor)
             {
            case 4:
                {
                 {
                    //wiadro, pod nim niebieski klucz
                    if ((wiadro==1)&&(n_klucz==1)) cout <<"Miejsce jest puste."<<endl;
                    if ((wiadro==1)&&(n_klucz==0))
                    {
                        do
                        {
                        cout <<"Czy chcesz zabrac niebieski klucz? tak/nie"<<endl;
                        cin  >>odp;
                        transform(odp.begin(),odp.end(),odp.begin(),::toupper);
                        if (odp=="TAK") n_klucz=1, cout <<"Zebrano przedmiot: niebieski klucz." <<endl;
                        if (odp=="NIE") cout <<"Cofasz sie pod drzwi."<<endl;
                        if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
                        }while ((odp!="NIE")&&(odp!="TAK"));
                    }
                    if ((wiadro==0)&&(n_klucz==0))
                    {
                        do
                        {
                        cout <<"Czy chcesz zabrac wiadro? tak/nie"<<endl;
                        cin  >>odp;
                        transform(odp.begin(),odp.end(),odp.begin(),::toupper);
                        if (odp=="TAK") wiadro=1, cout <<"Zebrano przedmiot: metalowe wiadro.\nNa ziemi w mejscu po wiadrze lezy niebieski klucz."<<endl;
                        if (odp=="NIE") cout <<"Cofasz sie pod drzwi."<<endl;
                        if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
                        }while ((odp!="NIE")&&(odp!="TAK"));
                    }
                }
                }
            break;
             }

            if ((wybor!=0)&&(wybor!=4)&&(wybor!=10)) cout <<"Nie mozna nic zrobic"<<endl;
            if ((wybor!=10)&&(wybor!=999)&&(wybor!=888)&&(wybor>6)||(wybor<0)) cout<<"...poniewaz: "<<endl;
            if (wybor==10) system("cls"), drzwi=10;
            if ((wybor!=1)&&(wybor!=2)&&(wybor!=3)&&(wybor!=4)&&(wybor!=5)&&(wybor!=6)&&(drzwi!=10)&&(wybor!=0)&&(wybor!=999)&&(wybor!=888)) zla_komenda ();
            if ((wybor==888)||(wybor==999)) inv=wybor, inventory ();
            if (wybor==0) instrukcja ();
            if (wybor!=10) system("pause>nul");
            }while (drzwi!=10);
            }
        break;
                case 13:                //lina, zolty klucz pod zawinietym dywanem;
                                        //problem z inventory
        {
            do
            {
            bezpiecznik=drzwi;
            wybor=0;
            system("cls");

                                            cout <<"Pokoj numer 13"                                                     <<endl;
                                            cout <<"1)Dzieciecy taboret ze zdrapana farba"                              <<endl;
            if (dywan==0)                   cout <<"2)Na ziemi lezy dywan"                                              <<endl;
            if ((dywan==1)&&(z_klucz==0))   cout <<"2)Pod odwinietym dywanem lezy zolty klucz."                         <<endl;
            if (z_klucz==1)                 cout <<"2)Puste miejsce na ziemi."                                          <<endl;
                                            cout <<"3)Tapicerowany fotel, ma oderwany jeden bok podlokietnika"          <<endl;
                                            cout <<"4)Tapicerowany fotel z licznymi plamami"                            <<endl;
                                            cout <<"5)Stolik kawowoy bez jednej nogi"                                   <<endl;
            if (lina==0)                    cout <<"6)Z zyrandola zwisa lina z wezlem szumienicznym"                    <<endl;
            if (lina==1)                    cout <<"6)Zyrandol"                                                         <<endl;
                                            cout <<"10)Powrot do pokoju numer 10."                                      <<endl;
            cout <<""<<endl;
            cout <<"Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"                                    <<endl<<""<<endl;
            cin>>wybor;

                                                switch(wybor)
             {
            case 2:
                {
                    //wiadro, pod nim niebieski klucz
                    if ((dywan==1)&&(z_klucz==1)) cout <<"Miejsce jest puste."<<endl;
                    if ((dywan==1)&&(z_klucz==0))
                    {
                        do
                        {
                        cout <<"Czy chcesz zabrac zolty klucz? tak/nie"<<endl;
                        cin  >>odp;
                        transform(odp.begin(),odp.end(),odp.begin(),::toupper);
                        if (odp=="TAK") z_klucz=1, cout <<"Zebrano przedmiot: zolty klucz." <<endl;
                        if (odp=="NIE") cout <<"Cofasz sie pod drzwi."<<endl;
                        if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
                        }while ((odp!="NIE")&&(odp!="TAK"));
                    }
                    if ((dywan==0)&&(z_klucz==0))
                    {
                        do
                        {
                        cout <<"Czy chcesz zajrzec pod dywan? tak/nie"<<endl;
                        cin  >>odp;
                        transform(odp.begin(),odp.end(),odp.begin(),::toupper);
                        if (odp=="TAK") dywan=1, cout <<"Odwinieto dywan.\nNa ziemi pod dywanem lezal zolty klucz."<<endl;
                        if (odp=="NIE") cout <<"Cofasz sie pod drzwi."<<endl;
                        if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
                        }while ((odp!="NIE")&&(odp!="TAK"));
                    }
                }
            break;
            case 6:
                {
                if (lina==1) cout <<"Nie siegasz juz do samego zyrandola"<<endl<<""<<endl;
                if (lina==0)
                {
                    do
                    {
                    cout <<"Czy chcesz sciagnac line? tak/nie" <<endl;
                    cin  >>odp;
                    transform(odp.begin(),odp.end(),odp.begin(),::toupper);
                    if (odp=="TAK") lina=1, cout <<"Zebrano przedmiot: lina." <<endl;
                    if (odp=="NIE") cout <<"Cofasz sie pod drzwi."<<endl;
                    if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
                    }while ((odp!="NIE")&&(odp!="TAK"));
                }
                }
            break;
             }

            if ((wybor!=10)&&(wybor!=999)&&(wybor!=888)&&(wybor!=6)||(wybor!=2)) cout<<"Nie mozna nic zrobic. "<<endl;
            if ((wybor!=10)&&(wybor!=999)&&(wybor!=888)&&(wybor>6)||(wybor<0)) cout<<"...poniewaz: "<<endl;
            if (wybor==10) system("cls"), drzwi=10;
            if ((wybor!=1)&&(wybor!=2)&&(wybor!=3)&&(wybor!=4)&&(wybor!=5)&&(wybor!=6)&&(drzwi!=10)&&(wybor!=0)&&(wybor!=999)&&(wybor!=888)) zla_komenda ();
            if ((wybor==888)||(wybor==999)) inv=wybor, inventory ();
            if (wybor==0) instrukcja ();
            if (wybor!=10) system("pause>nul");
            }while (drzwi!=10);
            }
        break;
                case 14:                //czesc szyfru 16, 2 element artefaktu w 1 wazonie (grupa 5 wazonow);
        {
            do
        {
            bezpiecznik=drzwi;
            wybor=0;
            system("cls");

                                            cout <<"ZROBIC POPRAWKI, POKOJ AWARYJNY"<<endl;
                                            cout <<"Pokoj numer 14"                                                                 <<endl;
            if (wazon1==0)                  cout <<"1)Sredni wazon, kolor zielony"                                                  <<endl;
            if (wazon1==1)                  cout <<"1)Rozbity wazon, kawalki koloru zielonego"                                      <<endl;
            if (wazon2==0)                  cout <<"2)Maly wazon, kolor niebieski"                                                  <<endl;
            if (wazon2==1)                  cout <<"2)Rozbity wazon, kawalki koloru niebieskiego"                                   <<endl;
            if (wazon3==0)                  cout <<"3)Duzy wazon, kolor czerwony"                                                   <<endl;
            if ((wazon3==1)&&(artef_2==0))  cout <<"3)Rozbity wazon, kawalki koloru czerwonego i zlotego"                           <<endl;
            if ((wazon3==1)&&(artef_2==1))  cout <<"3)Rozbity wazon, kawalki koloru czerwonego"                                     <<endl;
            if (dzbanek==0)                 cout <<"4)Gliniany dzbanek, kolor zolty-biale, glownie malunki wojownikow greckich"     <<endl;
            if (dzbanek==1)                 cout <<"4)Rozbity gliniany dzbanek"                                                     <<endl;
            if (karafka==0)                 cout <<"5)Szklana karawka pelna czarnej cieczy"                                         <<endl;
            if (karafka==1)                 cout <<"5)Rozbita szklana karawka, ciecz cuchnie zgnilymi jajami, pelno w niej larw"    <<endl;
            if (szyfr ==1)                  cout <<"6) Obraz Pana Mlodego"                                                          <<endl;
            if (szyfr ==0)                  cout <<"6) Obraz Pana Mlodego, w butonierce wystaje mu kartka"                          <<endl;
                                            cout <<"10)Powrot do pokoju numer 10."                                                  <<endl;
            cout <<""<<endl;
            cout <<"Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"                                    <<endl<<""<<endl;
            cin>>wybor;

                                                switch(wybor)
{
case 1:
    {
        if (wazon1==1) cout <<"Nie mozna nic juz z tym zrobic"<<endl;
        if (wazon1==0)
            {
            cout <<"czy chczesz stluc wazon? tak/nie"<<endl;
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") wazon1=1, cout <<"Stluczono wazon" <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."                         <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
            }while ((odp!="NIE")&&(odp!="TAK"));

    }
    break;
case 2:
    {
        if (wazon2==1) cout <<"Nie mozna nic juz z tym zrobic"<<endl;
        if (wazon2==0)
            {
            cout <<"czy chczesz stluc wazon? tak/nie"<<endl;
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") wazon2=1, cout <<"Stluczono wazon" <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."                         <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
            }while ((odp!="NIE")&&(odp!="TAK"));
    }
    break;
case 3:              //<<======przy bezposrednim wyborze 3 program sie blokuje, nie znam przyczyny,
                     //sprawdzic, problem z wyjsciem na wybor 10, problem z cls
    {
        if (artef_2==1) cout <<"Nie mozna nic juz z tym zrobic."  <<endl;
        if ((wazon3==1)&&(artef_2==0))
        {
        {
            cout <<"Czy chcesz przeszukac jeszcze raz? tak/nie."     <<endl;
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") artef_2=1, cout <<"Zebrano przedmiot: zolty emblemat." <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."                         <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
        }while ((odp!="NIE")&&(odp!="TAK"));
        }
        if  (wazon3==0)
        {
            cout <<"Czy chczesz stluc wazon? tak/nie"    <<endl;
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") wazon3=1, cout <<"Stluczono wazon i wypadla zawartosc." <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."                         <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
        }while ((odp!="NIE")&&(odp!="TAK"));

    }
    break;
case 4:
    {
        if (dzbanek==1) cout <<"Nie mozna nic juz z tym zrobic"<<endl;
        if (dzbanek==0)
            {
            cout <<"czy chczesz stluc dzbanek? tak/nie"<<endl;
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") dzbanek=1, cout <<"Stluczono dzbanek" <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."                         <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
            }while ((odp!="NIE")&&(odp!="TAK"));
    }
    break;
case 5:
    {
        if (karafka==1) cout <<"Nie mozna nic juz z tym zrobic"<<endl;
        if (karafka==0)
            {
            cout <<"czy chczesz stluc karafke? tak/nie"<<endl;
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") karafka=1, cout <<"Stluczono karafke" <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."                         <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
            }while ((odp!="NIE")&&(odp!="TAK"));
    }
    break;
case 6:                                                                               //czesc szyfru "16"
    {
        if (szyfr==1) cout <<"Nie mozna nic zrobic"<<endl;
        if (szyfr==0)
        //do
        {
            cout <<"Czy chcesz siegnac w kierunku obrazu?"<<endl;
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") cout <<"Wyciagneles kartke, odwracasz i czytasz. 16" <<endl, szyfr=1;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."                         <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
        }while ((odp!="NIE")&&(odp!="TAK"));
    }
    break;
}
            if (wybor==10) system("cls"), drzwi=10;
            if ((wybor!=10)&&(wybor!=999)&&(wybor!=888)&&(wybor>6)||(wybor<0)) cout<<"Nie mozna nic zrobic poniewaz: "<<endl;
            if ((wybor!=1)&&(wybor!=2)&&(wybor!=3)&&(wybor!=4)&&(wybor!=5)&&(wybor!=6)&&(drzwi!=10)&&(wybor!=0)&&(wybor!=999)&&(wybor!=888)) zla_komenda ();
            if ((wybor==888)||(wybor==999)) inv=drzwi, inventory ();
            if (wybor==0) instrukcja ();
            if (wybor!=10) system("pause >null");
            }while (drzwi!=10);
        }
        break;
                case 15:                //drzwi na zolty klucz, wewnatrz zolta kula;                                DRZWI ZAMKNIETE NA ZOLTY KLUCZ
        {
            do
            {
            bezpiecznik=drzwi;
            wybor=0;
            system("cls");

                                            cout <<"Pokoj numer 15"                                                             <<endl;
                                            cout <<"1)Po lewej pustka i ciemnosc spowita mgla."                                                                         <<endl;
                                            cout <<"2)Po prawej pustka i ciemnosc spowita mgla."                                                                         <<endl;
                                            cout <<"3)Nad glowa pustka i ciemnosc spowita mgla."                                                                         <<endl;
                                            cout <<"4)Pod nogami pustka i ciemnosc spowita mgla."                                                                         <<endl;
                                            cout <<"5)Konsola z runami"                                                                         <<endl;
            if ((krata==0)&&(kula_z==0))    cout <<"6)Zakratowana zolta kula"                                                                         <<endl;
            if ((krata==1)&&(kula_z==0))    cout <<"6)Zolta kula"                                                                         <<endl;
            if (kula_z==1)                  cout <<"6)Pustka i ciemnosc spowita mgla."                                                                         <<endl, kula_z=1;

                                            cout <<"10)Powrot do pokoju numer 10."                                              <<endl;
            cout <<""<<endl;
            cout <<"Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"                                            <<endl<<""<<endl;
            cin>>wybor;

                                                switch(wybor)
             {
            case 5:
                {
                        cout <<"\nKonsola ma 11 dziwnych glifow."<<endl;
                        cout <<"Kazdy glif dziala jak przycisk."<<endl;
                        cout <<"Czy zechcesz wcisnac ktorys symbol? tak/nie"<<endl;
                        do
                        {
                        cin  >>odp;
                        transform(odp.begin(),odp.end(),odp.begin(),::toupper);
                        if (odp=="TAK") glify=1;
                        if (odp=="NIE") cout <<"\nCofasz sie pod drzwi."<<endl;
                        if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
                        }while ((odp!="NIE")&&(odp!="TAK"));


                        if ((glify==1)&&(konsola==0))
                        {
                                pozycz_str="";
                                licznik=0;
                                cout <<"/nA wiec zaczynamy. Podaj kolejnosc glifow. (kazda cyfre oddzielaj "<<'"'<<"enter"<<'"'<<")"<<endl;
                                cout <<"(mozesz sprawdzic wizerunek glifow w zapisie linkow z gry, badz wcisnac "<<'"'<<"y"<<'"'<<" aby ujrzec rozpisane nazwy glifow bez wizerunku.)"<<endl;
                                cout <<"Jesli chcesz wyjsc z tego trybu gry i wrocic do pokoju, poprostu go podaj : x."<<endl;
                                cout <<"Jesli kotynowac to podaj kazdy inny dowolny znak."<<endl;
                                // prawidlowa odpowiedz: 9 4 11 5 1 3 2 8 10 6 7
                                cin >>odp2;
                                if (odp2=="x") cout <<"Cofasz sie pod drzwi."<<endl;
                                if ((odp2!="x")&&(odp2!="y"))
                                {
                                    cout <<"Dobrze, zaczynamy."<<endl;
                                    do
                                    {
                                    cin  >>pozycz_str;
                                    pozycz_tymczas=(pozycz_tymczas+pozycz_str);
                                    cout << "Podawana kolejnosc: "<<pozycz_tymczas<<" "<<endl;
                                    licznik++;
                                    }while (licznik!=11); //licnik nie dziala prawidlowo, petla dziala od punktu ze znakiem qwerty
                                    pozycz_str=pozycz_tymczas;
                                    pozycz_tymczas="";
                                }
                                cout <<""<<endl;
                                if (odp2=="y") cout <<" 1)Earth\n 2)Jupiter\n 3)Mars\n 4)Mercury\n 5)Moon\n 6)Neptune\n 7)Pluto\n 8)Saturn\n 9)Sun\n 10)Uranus\n 11)Venus"<<endl;
                                if (pozycz_str=="9411513281067") konsola=1, odp=15, krata=1, cout <<"Poprawny kod. Kraty ruszyly do gory odslaniajac dostep do zoltej kuli."<<endl;
                                if (pozycz_str!="9411513281067") odp=15, cout <<"Kod nie poprawny, ponow podejscie."<<endl;
            //TUTAJ BŁEDY POWYŻEJ %%%%%%%%%%%%%%%%
            //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
            //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

                        }

                }
            break;
            case 6:
                {
                    //wiadro, pod nim niebieski klucz
                    if (kula_z==1) cout <<"\nMiejsce jest puste."<<endl;
                    if ((kula_z==0)&&(konsola==0)) cout <<"\nZ powodu krat nie dajesz rady dostac sie do kuli."<<endl;
                    if ((kula_z==0)&&(konsola==1))
                    {
                        do
                        {
                        cout <<"\nKraty zniknely, kula jest juz dostepna."<<endl;
                        cout <<"Czy chcesz zabrac zolta kule? tak/nie"<<endl;
                        cin  >>odp;
                        transform(odp.begin(),odp.end(),odp.begin(),::toupper);
                        if (odp=="TAK") kula_z=1, cout <<"Zebrano przedmiot: zolta kule.\n" <<endl;
                        if (odp=="NIE") cout <<"Cofasz sie pod drzwi.\n"<<endl;
                        if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
                        }while ((odp!="NIE")&&(odp!="TAK"));
                    }
                }
            break;

             }

            if ((wybor!=6)&&(wybor!=5)&&(wybor!=10)) cout <<"Nie mozna nic zrobic"<<endl;
            if ((wybor!=10)&&(wybor!=999)&&(wybor!=888)&&(wybor>6)||(wybor<0)) cout<<"...poniewaz: "<<endl;
            if (wybor==10) system("cls"), drzwi=10;
            if ((wybor!=1)&&(wybor!=2)&&(wybor!=3)&&(wybor!=4)&&(wybor!=5)&&(wybor!=6)&&(drzwi!=10)&&(wybor!=0)&&(wybor!=999)&&(wybor!=888)) zla_komenda ();
            if ((wybor==888)||(wybor==999)) inv=wybor, inventory ();
            if (wybor==0) instrukcja ();
            if (wybor!=10) system("pause>nul");
            }while (drzwi!=10);
            }
        break;
                case 16:                //studnia (wiadro+lina= czerwony klucz);
                                        //problem z inwentory
        {
            do
            {
            bezpiecznik=drzwi;
            wybor=0;
            system("cls");

                                            cout <<"Pokoj numer 16"                                                          <<endl;
                    if (mlynek==0)          cout <<"1)Mlynek do ucierania z dwoch kamiennych kregow"                         <<endl;
                    if (mlynek==1)          cout <<"1)Jeden kamien zostal na swoim miejscu, drugi lezy na ziemi"             <<endl;
                    if (kowadlo==0)         cout <<"2)Kowadlo"                                                               <<endl;
                    if (kowadlo==1)         cout <<"2)Kowadlo, a obok zniszczony mlot"                                       <<endl;
                    if (studnia==0)         cout <<"3)Studnia"                                                               <<endl;
                    if (studnia==1)         cout <<"3)Studnia"                                                               <<endl;
                    if (mlot==0)            cout <<"4)Mlot kowalski, stary, wysluzony"                                       <<endl;
                    if (mlot==1)            cout <<"4)Puste miejsce"                                                         <<endl;
                    if (piec==0)            cout <<"5)Piec hutniczy pelny sadzy"                                             <<endl;
                    if (piec==1)            cout <<"5)Piec hutniczy, sadza teraz jest wszedzie"                              <<endl;
                    if (stojak==0)          cout <<"6)Stojak czy wieszak na bronie, jednak kompletnie zgnily od wilgoci"     <<endl;
                    if (stojak==1)          cout <<"6)Stojak teraz stal sie kupa zgnilego drewna"                            <<endl;
                                            cout <<"10)Powrot do pokoju numer 10."                                           <<endl;
            cout <<""<<endl;
            cout <<"Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"                                            <<endl<<""<<endl;
            cin>>wybor;

                                                switch(wybor)
            {
                case 1:
                {
            if (mlynek==1) cout <<"Nie mozna nic juz z tym zrobic"<<endl;
            if (mlynek==0)
            {
            cout <<"czy chczesz poruszyc mlynkiem? tak/nie"<<endl;
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") mlynek=1, cout <<"Ruszenie mechanizmu sprawilo ze jeden z kamieni odpadl od kostrukcji" <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."                         <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
            }while ((odp!="NIE")&&(odp!="TAK"));
            }
                break;
                case 2:
                {
            if ((kowadlo==1)||(mlot==0)) cout <<"Nie mozna nic juz z tym zrobic"<<endl;
            if ((kowadlo==0)&&(mlot==1))
            {
            cout <<"Czy chesz przetestowadz sprawnosc mlota? tak/nie"<<endl;
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") kowadlo=1, cout <<"Sprawdziles, mlot z loskotem zlamal sie tuz przy trzonku... juz go nie uzyjesz" <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."                         <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
            }while ((odp!="NIE")&&(odp!="TAK"));


                }
                break;
                case 3:
                {
            if (studnia==1) cout <<"Nie mozna nic juz z tym zrobic"<<endl, odp="NIE";
            if ((studnia==0)&&(wiadro==0)||(lina==0)) cout <<"Czegos jeszcze brakuje..."<<endl, odp="NIE";
            if ((studnia==0)&&(wiadro==1)&&(lina==1))
            {
            cout <<"Czy chesz uzyc wiadra i sznura? tak/nie"<<endl;
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") studnia=1, c_klucz=1, cout <<"Z metnej wody studni udaje ci sie wylowic czerwony klucz" <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."                         <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
            }while ((odp!="NIE")&&(odp!="TAK"));
            }
                break;
                case 4:
                {
            if (mlot==1) cout <<"Nie mozna nic juz z tym zrobic"<<endl;
            if (mlot==0)
            {
            cout <<"Czy chcesz podniesc mlot? tak/nie"<<endl;
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") mlot=1, cout <<"Ciezki, dworeczny mlot kowalski, jeszcze dziala..." <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."                         <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
            }while ((odp!="NIE")&&(odp!="TAK"));


                }
                break;
                case 5:
                {
            if (piec==1) cout <<"Nie mozna nic juz z tym zrobic"<<endl;
            if (piec==0)
            {
            cout <<"Czy chcesz przeszukac piec? tak/nie"<<endl;
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") piec=1, cout <<"Grzebiesz sie w sadzy, oprocz kaszlu i tumami unoszacemu sie kurzowi nic nie znalazles" <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."                         <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
            }while ((odp!="NIE")&&(odp!="TAK"));


                }
                break;
                case 6:
                {
            if (stojak==1) cout <<"Nie mozna nic juz z tym zrobic"<<endl;
            if (stojak==0)
            {
            cout <<"Czy chcesz przeszukac stojak? tak/nie"<<endl;
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") stojak=1, cout <<"Stojak przy pierwszym dotknieciu rozsypal sie" <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."                         <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
            }while ((odp!="NIE")&&(odp!="TAK"));


                }
                break;
            }


            //if ((wybor!=0)&&(wybor!=4)&&(wybor!=10)) cout <<"Nie mozna nic zrobic"<<endl<<""<<endl;
            if ((wybor!=10)&&(wybor>6)||(wybor<0)) cout<<"...poniewaz: "<<endl;
            if ((wybor!=10)&&(wybor!=999)&&(wybor!=888)&&(wybor>6)||(wybor<0)) cout<<"...poniewaz: "<<endl;
            if (wybor==10) system("cls"), drzwi=10;
            //if ((wybor!=1)&&(wybor!=2)&&(wybor!=3)&&(wybor!=4)&&(wybor!=5)&&(wybor!=6)&&(drzwi!=10)&&(wybor!=0)&&(wybor!=999)&&(wybor!=888)) zla_komenda ();
            if ((wybor==888)||(wybor==999)) inv=wybor, inventory ();
            if (wybor==0) instrukcja ();
            if (wybor!=10) system("pause>nul");
            }while ((drzwi!=0)&&(drzwi!=10));
        }
        break;
                case 17:                //niebieska kula, zamek na niebieski klucz;                                 DRZWI ZAMKNIETE NA NIEBIESKI KLUCZ
        {
        bezpiecznik=drzwi;
        wybor=0;

        cout <<"Niebieskie dzwi sa zamkniete na klucz"<<endl;
        cout <<"Moze mamy jakis w kieszeni...(podaj jeszcze raz numer pokoju)"<<endl;
        //zrobic zastosowanie inventory
        cin>>wybor;
        //ponizej wstepne dzialanie barykady
        n_klucz=1;
          if (n_klucz==0) drzwi=10;
          if (n_klucz==1)
          {
            do
            {
            bezpiecznik=drzwi;
            wybor=0;
            system("cls");

                                            cout <<"Pokoj numer 17"                                                                         <<endl;
                                            cout <<"1)Wiszaca szafka z kilkoma monitorami, maja rozne rozmiary, kolory..."                  <<endl;
                                            cout <<"2)Kawalki drewna, jeszcze cieple, ktos wczesniej robil tu ognisko"                      <<endl;
                                            cout <<"3)Skrzynka narzedziowa"                                                                 <<endl;
            if (d_szafa==0)                 cout <<"4)Debowa szafa"                                                                         <<endl;
            if (d_szafa==1)                 cout <<"4)Otwarta debowa szafa"                                                                 <<endl;
            if (d_szafa==2)                 cout <<"4)Otwarta debowa szafa, a woreczek z kulkami z niej  w rece"                            <<endl;
            if (d_szafa==3)                 cout <<"4)Otwarta debowa szafa, pusty woreczek na ziemi, a kulki wszedzie rozsypane"            <<endl;
                                            cout <<"5)Sterta starych, pustych, smierdzacych konserw fasolki po bretonsku"                   <<endl;
            if (biurko==0)                  cout <<"6)Krzeslo, biurko, pelno papierowych kartek"                                            <<endl;
            if (biurko==1)                  cout <<"6)Krzeslo jest przewrocone, biurko ma wyryte cos na blacie, a papiery sa rozsypane"     <<endl;
                                            cout <<"10)Powrot do pokoju numer 10."                                                          <<endl;
            cout <<""<<endl;
            cout <<"Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"                                                        <<endl<<""<<endl;
            cin>>wybor;

                                                switch(wybor)
            {
            case 3:
            {
            if (skrzynka<2)cout <<"Otwierasz szkrzynke, jest pusta, zamykasz ponownie"<<endl;
            if ((skrzynka<5)&&(skrzynka>=2)) cout<<"Czy liczysz ze otwieranie i zamykanie skrzynki sprawi ze cos sie w niej pojawi?"<<endl;
            if (skrzynka>=5) cout <<"ech... dostajesz order upierdliwosci"<<endl;
            skrzynka++;

            break;
            }
            case 4:
            {
            if (d_szafa==3) cout<<"Juz nic z tym miejscem nie zrobisz, moze skrzynka z narzedziami cos ma?"<<endl;
            if (d_szafa==2)
            {
            cout<<"Czy chcesz przeszukac woreczek?"<<endl;
            cin>>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") d_szafa=3, cout <<"W woreczku znajdujesz niebieska kule" <<endl, kula_n=1;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."      <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
            }

            if (d_szafa==1)
            {
            cout<<"Czy chcesz przeszukac szafe?"<<endl;
            cin>>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") d_szafa=2, cout <<"W szafie jest woreczek z kulkami" <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."      <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
            }

            if (d_szafa==0)
            {
            cout<<"Czy chcesz otworzyc szafe?"<<endl;
            cin>>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if (odp=="TAK") d_szafa=1, cout <<"Otwierasz szafe" <<endl;
            if (odp=="NIE") cout <<"Cofasz sie pod drzwi."      <<endl;
            if ((odp!="NIE")&&(odp!="TAK")) drzwi=80, zla_komenda ();
            }

            break;
            }
            case 6:
            {
            if (biurko==0)
            {
            cout<<"Idac do biurka potykasz sie i rozsypujesz sterte papierow"<<endl;
            cout<<"Na blacie ktos wyryl nozem trzy kule z napisami wewnatrz: aoi, akai, kiiroi"<<endl;
            cout<<"powyzej nich goruje pryzmat i klucz z napisem: kin’iro"<<endl;
            biurko=1;
            }
            if (biurko==1)
            {
            cout<<"Na blacie ktos wyryl nozem trzy kule z napisami wewnatrz: aoi, akai, kiiroi"<<endl;
            cout<<"powyzej nich goruje pryzmat i klucz z napisem: kin’iro"<<endl;
            }
            break;
            }
            break;
            }



            if ((wybor!=0)&&(wybor!=3)&&(wybor!=4)&&(wybor!=6)&&(wybor!=10)) cout <<"Nie mozna nic zrobic"<<endl<<""<<endl;
            if ((wybor!=10)&&(wybor!=999)&&(wybor!=888)&&(wybor>6)||(wybor<0)) cout<<"...poniewaz: "<<endl;
            if (wybor==10) system("cls"), drzwi=10;
            if ((wybor!=1)&&(wybor!=2)&&(wybor!=3)&&(wybor!=4)&&(wybor!=5)&&(wybor!=6)&&(drzwi!=10)&&(wybor!=0)&&(wybor!=999)&&(wybor!=888)) zla_komenda ();
            if ((wybor==888)||(wybor==999)) inv=wybor, inventory ();
            if (wybor==0) instrukcja ();
            if (wybor!=10) system("pause>nul");
            }while ((drzwi!=0)&&(drzwi!=10));
          }
        }
        break;
                    cout <<"POKOJ W BUDOWIE"<<endl;

                case 18:                //czerwona kula, zamek na czerwony klucz;                                   DRZWI ZAMKNIETE NA CZERONY KLUCZ

        {
        cout <<"Czerwone dzwi sa zamkniete nma klucz"<<endl;
        cout <<"Sprawdz w plecaku...(podaj jeszcze raz numer pokoju)"<<endl;
        //zrobic zastosowanie inventory
        cin>>wybor;
        //ponizej wstepne dzialanie barykady
        c_klucz=1;
          if (c_klucz==0) drzwi=10;
          if (c_klucz==1)
          {
            do
            {
            bezpiecznik=drzwi;
            wybor=0;
            system("cls");


            cout <<"POKOJ W BUDOWIE"<<endl;
                                            cout <<"Pokoj numer 18"                                                     <<endl;
                                            cout <<"1)"                                                                 <<endl;
                                            cout <<"2)"                                                                 <<endl;
                                            cout <<"3)"                                                                 <<endl;
                                            cout <<"4)"                                                                 <<endl;
                                            cout <<"5)"                                                                 <<endl;
                                            cout <<"6)"                                                                 <<endl;
                                            cout <<"10)Powrot do pokoju numer 10."                                      <<endl;
            cout <<""<<endl;
            cout <<"Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"                                            <<endl<<""<<endl;
            cin>>wybor;

                                                switch(wybor)
            {
            case 1:
            {
            cout<<"poleglem"<<endl;
            break;
            }





            break;
            }
            cout <<"POKOJ W BUDOWIE"<<endl;


            //if ((wybor!=0)&&(wybor!=4)&&(wybor!=10)) cout <<"Nie mozna nic zrobic"<<endl<<""<<endl;
            if ((wybor!=10)&&(wybor!=999)&&(wybor!=888)&&(wybor>6)||(wybor<0)) cout<<"...poniewaz: "<<endl;
            if (wybor==10) system("cls"), drzwi=10;
            if ((wybor!=1)&&(wybor!=2)&&(wybor!=3)&&(wybor!=4)&&(wybor!=5)&&(wybor!=6)&&(drzwi!=10)&&(wybor!=0)&&(wybor!=999)&&(wybor!=888)) zla_komenda ();
            if ((wybor==888)||(wybor==999)) inv=wybor, inventory ();
            if (wybor==0) instrukcja ();
            if (wybor!=10) system("pause>nul");
            }while ((drzwi!=0)&&(drzwi!=10));
          }
        }
        break;
                case 19:                //1 element artefaktu w szafce, barykada (wylamac lomem);                   DRZWI ZAMKNIETE PRZEZ BARYKADE, wyłamuje ja lom
        {
        bezpiecznik=drzwi;
        wybor=0;

        cout <<"Dzwi sa zabarykadowane, niestety deski nie da sie usunac samymi rekami"<<endl;
        cout <<"Przydaloby sie jakies narzedzie...(podaj jeszcze raz numer pokoju)"<<endl;
        //zrobic zastosowanie inventory
        cin>>wybor;
        //ponizej wstepne dzialanie barykady
        lom=1;
          if (lom==0) drzwi=10;
          if (lom==1)
          {
            do
            {
            bezpiecznik=drzwi;
            wybor=0;
            system("cls");


            cout <<"POKOJ W BUDOWIE"<<endl;
                                            cout <<"Pokoj numer 19"                                                     <<endl;
                                            cout <<"1)"                                                                 <<endl;
                                            cout <<"2)"                                                                 <<endl;
                                            cout <<"3)"                                                                 <<endl;
                                            cout <<"4)"                                                                 <<endl;
                                            cout <<"5)"                                                                 <<endl;
                                            cout <<"6)"                                                                 <<endl;
                                            cout <<"10)Powrot do pokoju numer 10."                                      <<endl;
            cout <<""<<endl;
            cout <<"Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"                                            <<endl<<""<<endl;
            cin>>wybor;

                                                switch(wybor)
            {




            break;
            }
            cout <<"POKOJ W BUDOWIE"<<endl;


            //if ((wybor!=0)&&(wybor!=4)&&(wybor!=10)) cout <<"Nie mozna nic zrobic"<<endl<<""<<endl;
            if ((wybor!=10)&&(wybor!=999)&&(wybor!=888)&&(wybor>6)||(wybor<0)) cout<<"...poniewaz: "<<endl;
            if (wybor==10) system("cls"), drzwi=10;
            if ((wybor!=1)&&(wybor!=2)&&(wybor!=3)&&(wybor!=4)&&(wybor!=5)&&(wybor!=6)&&(drzwi!=10)&&(wybor!=0)&&(wybor!=999)&&(wybor!=888)) zla_komenda ();
            if ((wybor==888)||(wybor==999)) inv=wybor, inventory ();
            if (wybor==0) instrukcja ();
            if (wybor!=10) system("pause>nul");
            }while ((drzwi!=0)&&(drzwi!=10));
          }
        }
        break;
                case 20:                //pryzmat (wmonowac tam 3 kule)- oddaje czarny klucz, zamek na szyfr 50 16;  DRZWI do pokoju ZAMKNIETE NA SZYFR trzeba podac aby wehsc 50 16
        {
            do
            {
            bezpiecznik=drzwi;
            wybor=0;
            system("cls");


            cout <<"POKOJ W BUDOWIE"<<endl;
                                            cout <<"Pokoj numer 20"                                                     <<endl;
                                            cout <<"1)"                                                                 <<endl;
                                            cout <<"2)"                                                                 <<endl;
                                            cout <<"3)"                                                                 <<endl;
                                            cout <<"4)"                                                                 <<endl;
                                            cout <<"5)"                                                                 <<endl;
                                            cout <<"6)"                                                                 <<endl;
                                            cout <<"10)Powrot do pokoju numer 10."                                      <<endl;
            cout <<""<<endl;
            cout <<"Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"                                            <<endl<<""<<endl;
            cin>>wybor;

                                                switch(wybor)
            {




            break;
            }
            cout <<"POKOJ W BUDOWIE"<<endl;


            //if ((wybor!=0)&&(wybor!=4)&&(wybor!=10)) cout <<"Nie mozna nic zrobic"<<endl<<""<<endl;
            if ((wybor!=10)&&(wybor!=999)&&(wybor!=888)&&(wybor>6)||(wybor<0)) cout<<"...poniewaz: "<<endl;
            if (wybor==10) system("cls"), drzwi=10;
            if ((wybor!=1)&&(wybor!=2)&&(wybor!=3)&&(wybor!=4)&&(wybor!=5)&&(wybor!=6)&&(drzwi!=10)&&(wybor!=0)&&(wybor!=999)&&(wybor!=888)) zla_komenda ();
            if ((wybor==888)||(wybor==999)) inv=wybor, inventory ();
            if (wybor==0) instrukcja ();
            if (wybor!=10) system("pause>nul");
            }while ((drzwi!=0)&&(drzwi!=10));
        }
        break;
                case 21:                //do otwarcia potrzeba zlotego klucza z pryzmatu + 3 elementow artefaktu;
        {
            bezpiecznik=drzwi;
            system("cls");
            cout <<"Pokoj numer 21. Koniec drugiego etapu"                                                     <<endl<<""<<endl;
            cout <<"Haslo do 3 etapu: PERYT"                                                                   <<endl<<""<<endl;
            haslo="PERYT";
            drzwi=98987;
            cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"                                        <<endl<<""<<endl;
        }
        break;
    }
}
void gra3 () //dziala
{
                                        switch (drzwi)
    {
                case 98987:
        {
            system("cls");
            cout <<"Trzeci etap gry, ostatni."                                                                 <<endl;
            cout <<"Sala 21 jest okragla, 10 drzwi."                                                           <<endl;
            cout <<"Za kazdymi jest zagadka do odgadniecia."                                                   <<endl;
            cout <<"Drzwi do wyboru: 22,23,24,25,26,27,28,29,30 i 31"                                          <<endl;
            cout <<"Przy kazdej jest kolumna z czerwonym ogniem."                                              <<endl;
            cout <<"Najwieksze drzwi, 31 sa zamkniete."                                                        <<endl;
            cout <<"Tylko przy drzwiach 31 plonie zielony ogien."                                              <<""<<endl;
            cout <<"(Podglad ogni zostal zapisany w pliku z gra)"                                              <<endl;
            odp=="";
            bezpiecznik=drzwi;
            drzwi=21;
        }
        break;
                case 21:
        {
            bezpiecznik=drzwi;
            do
            {
            if ((gwiazdy==1)&&(noc==1)&&(parter==1)&&(drogowskaz==1)&&(dzwi==1)&&(cisza==1)&&(mroz==1)&&(trzy==1)&&(jutro==1))
            {
            cout <<"Przy dzwiach 31 zaszla zmiana. Ogien z zieleni zmienil sie w czerwien."                   <<endl<<""<<endl;
            }
            cout <<""<<endl<<"Pokoj 21"                                                                        <<endl;
            cout <<"Wybierz pokoj do ktorego sie udasz."                                                       <<endl<<""<<endl;
            cin  >>room;
            system("cls");
            if (room==21)   cout <<"Jestes juz w tym pokoju."                                                  <<endl<<""<<endl;
            if ((room!=21)&&(room!=22)&&(room!=23)&&(room!=24)&&(room!=25)&&(room!=26)&&(room!=27)&&(room!=28)&&(room!=29)&&(room!=30)&&(room!=31)&&(room!=0)&&(room!=888)&&(room!=999)) zla_komenda ();
            } while ((room!=22)&&(room!=23)&&(room!=24)&&(room!=25)&&(room!=26)&&(room!=27)&&(room!=28)&&(room!=29)&&(room!=30)&&(room!=31)&&(room!=0)&&(room!=888)&&(room!=999));
            if (room==0) instrukcja ();
            if (room==31) sprawdzenie ();
            if ((room==999)||(room==888)) inv=room, inventory ();
            if ((room!=0)&&(room!=888)&&(room!=999)) drzwi=room;
            room=0;

        }
        break;
                case 22:
        {
            if (jutro==0)
            {
            bezpiecznik=drzwi;
            do
            {
            cout <<"Pokoj numer 22"<<endl;
            cout <<"Zawsze przyjdzie, ale nigdy nie przyjdzie dzisiaj. Co to takiego?"                         <<endl; //jutro
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            if ((odp!="JUTRO")&&(odp!="0")) zla_komenda ();
            }while ((odp!="JUTRO")&&(odp!="0"));
            if (odp=="JUTRO") drzwi=21, jutro=1, jutro_st="", cout <<""<<endl<<"W kolumnie zaplonol niebieski ogien"        <<endl<<""<<endl;
            if (odp=="0") drzwi=0;
            }
            else cout <<"Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."                           <<endl<<""<<endl, drzwi=21;
        }
        break;
                case 23:
        {
            if (trzy==0)
            {
            bezpiecznik=drzwi;
            do
            {
            cout <<"Pokoj numer 23"<<endl;
            cout <<"Szly gesi gesiego, jedna za druga. Ile bylo gesi?"                                         <<endl; //trzy
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            }while ((odp!="TRZY")&&(odp!="3")&&(odp!="0"));
            if ((odp=="TRZY")||(odp=="3")) drzwi=21, trzy=1,space_23="    ", trzy_st="", cout <<""<<endl<<"W kolumnie zaplonol niebieski ogien"<<endl<<""<<endl;
            if (odp=="0") drzwi=0;
            }
            else cout <<"Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."                           <<endl<<""<<endl, drzwi=21;
        }
        break;
                case 24:
        {
            if (mroz==0)
            {
            bezpiecznik=drzwi;
            do
            {
            cout <<"Pokoj numer 24"<<endl;
            cout <<"Co lapie, ale nie rzuca?"                                                                  <<endl; //mró¿
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            }while ((odp!="MROZ")&&(odp!="0"));
            if (odp=="MROZ") drzwi=21, mroz=1, mroz_st="",space_24="    ", cout <<""<<endl<<"W kolumnie zaplonol niebieski ogien"          <<endl<<""<<endl;
            if (odp=="0") drzwi=0;
            }
            else cout <<"Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."                           <<endl<<""<<endl, drzwi=21;

        }
        break;
                case 25:
        {
            if (cisza==0)
            {
            bezpiecznik=drzwi;
            do
            {
            cout <<"Pokoj numer 25"<<endl;
            cout <<"Co jest tak delikatnego i kruchego, ze nawet wypowiedzenie jego nazwy, to przerywa?"       <<endl; //cisza
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            }while ((odp!="CISZA")&&(odp!="0"));
            if (odp=="CISZA") drzwi=21, cisza=1, cisza_st="",space_25="    ", cout <<""<<endl<<"W kolumnie zaplonol niebieski ogien"        <<endl<<""<<endl;
            if (odp=="0") drzwi=0;
            }
            else cout <<"Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."                           <<endl<<""<<endl, drzwi=21;
        }
        break;
                case 26:
        {
            if (dzwi==0)
            {
            bezpiecznik=drzwi;
            do
            {
            cout <<"Pokoj numer 26"<<endl;
            cout <<"Co zapewnia sile i moc do przechodzenia przez sciany?"                                     <<endl; //drzwi (sprawdzenie to dzwi)
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            }while ((odp!="DRZWI")&&(odp!="0"));
            if (odp=="DRZWI") drzwi=21, dzwi=1, dzwi_st="", cout <<""<<endl<<"W kolumnie zaplonol niebieski ogien"         <<endl<<""<<endl;
            if (odp=="0") drzwi=0;
            }
            else cout <<"Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."                           <<endl<<""<<endl, drzwi=21;
        }
        break;
                case 27:
        {
            if (drogowskaz==0)
            {
            bezpiecznik=drzwi;
            do
            {
            cout <<"Pokoj numer 27"<<endl;
            cout <<"Stoi przy drodze na jednej nodze, rece rozklada i dokad isc gada."                         <<endl; //drogowskaz
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            }while ((odp!="DROGOWSKAZ")&&(odp!="0"));
            if (odp=="DROGOWSKAZ") drzwi=21, drogowskaz=1,space_27="    ", drogowskaz_st="", cout <<""<<endl<<"W kolumnie zaplonol niebieski ogien"<<endl<<""<<endl;
            if (odp=="0") drzwi=0;
            }
            else cout <<"Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."                            <<endl<<""<<endl, drzwi=21;
        }
        break;
                case 28:
        {
            if (parter==0)
            {
            bezpiecznik=drzwi;
            do
            {
            cout <<"Pokoj numer 28"<<endl;
            cout <<"Budynek ma cztery kondygnacje. Im wyzsze pietro, tym wiecej ludzi tam mieszka."             <<endl;
            cout <<"Na ktore pietro najczesciej jezdzi winda?"                                                  <<endl;//parter
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            }while ((odp!="PARTER")&&(odp!="0"));
            if (odp=="PARTER") drzwi=21, parter=1, parter_st="",space_28="    ", cout <<""<<endl<<"W kolumnie zaplonol niebieski ogien"       <<endl<<""<<endl;
            if (odp=="0") drzwi=0;
            }
            else cout <<"Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."                            <<endl<<""<<endl, drzwi=21;
        }
        break;
                case 29:
        {
            if (noc==0)
            {
            bezpiecznik=drzwi;
            do
            {
            cout <<"Pokoj numer 29"<<endl;
            cout <<"W zimie jest dluga, a latem krotka. Co to jest?"                                            <<endl; //noc
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            }while ((odp!="NOC")&&(odp!="0"));
            if (odp=="NOC") drzwi=21, noc=1, noc_st="",space_29="    ", cout <<""<<endl<<"W kolumnie zaplonol niebieski ogien"             <<endl<<""<<endl;
            if (odp=="0") drzwi=0;
            }
            else cout <<"Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."                            <<endl<<""<<endl, drzwi=21;
        }
        break;
                case 30:
        {
            if (gwiazdy==0)
            {
            bezpiecznik=drzwi;
            do
            {
            cout <<"Pokoj numer 30"<<endl;
            cout <<"Mrugaja, choc oczu nie maja. Widac je na niebie, gdy czas spac na ciebie."                  <<endl; //gwiazdy
            cin  >>odp;
            transform(odp.begin(),odp.end(),odp.begin(),::toupper);
            }while ((odp!="GWIAZDY")&&(odp!="0"));
            if (odp=="GWIAZDY") drzwi=21, gwiazdy=1, gwiazdy_st="", cout <<""<<endl<<"W kolumnie zaplonol niebieski ogien"     <<endl<<""<<endl;
            if (odp=="0") drzwi=0;
            }
            else cout <<"Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."                            <<endl<<""<<endl, drzwi=21;
        }
        break;
                case 31:
        {
            cout <<"Otworzyles ostatnie drzwi. Ukonczyles swoja podroz"                                         <<endl;
            cout <<"Gratulacje, udalo Ci sie."                                                                  <<endl<<""<<endl;
            drzwi=56238;
            cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"                                         <<endl<<""<<endl;
        }
        break;
    }
}


//notatki:
/*


*/


#endif // POKOJE_HPP_INCLUDED
