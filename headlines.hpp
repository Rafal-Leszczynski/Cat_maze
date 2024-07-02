// copyright <2024> Rafał Leszczyński
#ifndef HEADLINES_HPP_INCLUDED
#define HEADLINES_HPP_INCLUDED

#include <algorithm>
#include <cctype>
#include <conio.h>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>


//using namespace std;

//  for stage 2:
int artifact_1 = 0, artifact_2 = 0, artifact_3 = 0, crowbar = 0, blue_sphere = 0, red_sphere = 0,
    yellow_sphere = 0, bucket = 0, rope = 0, blue_key = 0, red_key = 0, yellow_key = 0,
    black_key = 0, ele_art = 0;
int cipher = 0, vase_1 = 0, vase_2 = 0, vase_3 = 0, pitcher = 0, carafe = 0,
    rug = 0, barricade = 0, well = 0, prism = 0, control_console = 0, glyphs = 0,
    grille = 0;
int wybor, borrow_variable_int, counting, count_second;
int mill = 0, anvil = 0, stand = 0, hammer = 0, five = 0, box = 0,
    oak_wardrobe = 0, desk = 0;
// for the 3rd phase:
int tomorrow_riddle = 0, three_riddle = 0, frost_riddle = 0, silence_riddle = 0, door_riddle = 0, signpost_riddle = 0,
    ground_floor_riddle = 0, night_riddle = 0, stars_riddle = 0;
std::string tomorrow_string = "no ", three_string = "no ", frost_string = "no ", silence_string = "no ",
       door_string = "no ", signpost_string = "no ", ground_floor_string = "no ",
       night_string = "no ", stars_string = "no ";
std::string answer, odp2, pozycz_str, pozycz_tymczas;
long double room;
// general
std::string space_23 = "", space_24 = "", space_25 = "", space_27 = "",
       space_28 = "", space_29 = "", save = "NO";
int quantity;
long double item;
extern std::string password;
extern int door, safeguard;

void color_settings(int colo) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colo);
}
void function_inventory() {
  if (item == 999) {  //  sprawdzenie inwentarza/rozwiazanych zagadek- zrobione
    color_settings(23);
    std::cout << "999***************************************************************"
            "************"
         << std::endl;
    if (password == "CHIMERA") {
      std::cout << "YOUR ITEMS:" << std::endl << "" << std::endl;
      std::cout << "You have it "
           << (artifact_1 + artifact_2 + artifact_3 + crowbar + blue_sphere + red_sphere + yellow_sphere +
               bucket + rope + blue_key + red_key + yellow_key + black_key)
           << " items: " << std::endl;
      if (crowbar == 1)
        std::cout << "Crowbar" << std::endl;
      if (rope == 1)
        std::cout << "Rope" << std::endl;
      if (bucket == 1)
        std::cout << "Bucket" << std::endl;
      if ((artifact_1 == 1) || (artifact_2 == 1) || (artifact_3 == 1))
        std::cout << "" << std::endl << "Artifacts:" << std::endl;
      if (artifact_1 == 1)
        std::cout << "Artifact 1 part" << std::endl;
      if (artifact_2 == 1)
        std::cout << "Artifact 2 part" << std::endl;
      if (artifact_3 == 1)
        std::cout << "Artifact 3 part" << std::endl;
      if ((blue_sphere == 1) || (red_sphere == 1) || (yellow_sphere == 1))
        std::cout << "" << std::endl << "Kule:" << std::endl;
      if (blue_sphere == 1)
        std::cout << "Blue sphere" << std::endl;
      if (red_sphere == 1)
        std::cout << "Red sphere" << std::endl;
      if (yellow_sphere == 1)
        std::cout << "Yellow sphere" << std::endl;
      if ((blue_key == 1) || (red_key == 1) || (yellow_key == 1) ||
          (black_key == 1))
        std::cout << "" << std::endl << "Keys:" << std::endl;
      if (blue_key == 1)
        std::cout << "Niebieski klucz" << std::endl;
      if (red_key == 1)
        std::cout << "Czerwony klucz" << std::endl;
      if (yellow_key == 1)
        std::cout << "Zolty klucz" << std::endl;
      if (black_key == 1)
        std::cout << "Czarny klucz" << std::endl;
    }
    if (password == "PERYT") {
      (quantity = tomorrow_riddle + three_riddle + frost_riddle + silence_riddle + door_riddle + signpost_riddle + ground_floor_riddle + night_riddle +
               stars_riddle);
      std::cout << "Rozwiazane zagadki:" << std::endl << "" << std::endl;
      std::cout << "Rozwiazales: " << quantity << " zagadek z 9." << std::endl << "" << std::endl;
      std::cout << "````````````````````````````````````````````````````````````````"
              "````````````````````````````````````````````````````````````````"
              "``````````````````````````"
           << std::endl;
      std::cout << "W pokoju 22 zagadka " << tomorrow_string << "rozwiazana." << std::endl;
      std::cout << "pok.23 " << three_string << "rozwiazana," << space_23 << "   pok.24 "
           << frost_string << "rozwiazana," << space_24 << "   pok.25 " << silence_string
           << "rozwiazana," << space_25 << "  pok.26 " << door_string
           << "rozwiazana," << std::endl;
      std::cout << "pok.27 " << signpost_string << "rozwiazana," << space_27
           << "   pok.28 " << ground_floor_string << "rozwiazana," << space_28
           << "   pok.29 " << night_string << "rozwiazana," << space_29 << "  pok.30 "
           << stars_string << "rozwiazana." << std::endl;
      std::cout << "" << std::endl;
      // if
      // ((tomorrow_riddle==1)&&(three_riddle==1)&&(frost_riddle==1)&&(silence_riddle==1)&&(door_riddle==1)&&(signpost_riddle==1)&&(ground_floor_riddle==1)&&(night_riddle==1)&&(stars_riddle==1))
      // std::cout <<"Pokoj 31 jest otwarty i plonie na czerwono."<<endl; stary zapis
      // if
      // ((tomorrow_riddle==0)&&(three_riddle==0)&&(frost_riddle==0)&&(silence_riddle==0)&&(door_riddle==0)&&(signpost_riddle==0)&&(ground_floor_riddle==0)&&(night_riddle==0)&&(stars_riddle==0))
      // std::cout <<"Pokoj 31 jest zamkniety i plonie na zielono."<<endl; stary zapis
      if (quantity != 9)
        std::cout << "Pokoj 31 jest zamkniety i ogien płonie na zielono." << std::endl;
      if (quantity == 9)
        std::cout << "Pokoj 31 jest otwarty i ogień plonie na czerwono." << std::endl;
      quantity = 0;
    }
    if (password == "LESZY") {
      std::cout << "Brak przedmiotow do wyswietlenia w inwentarzu." << std::endl;
      std::cout << "Brak zagadek do rozwiazania." << std::endl;
    }
    color_settings(7);
  }
  if (item == 888) {  //  aktywacja/uzycie przedmiotu
    color_settings(71);
    std::cout << "888***************************************************************"
            "************"
         << std::endl;
    std::cout << "Aktywacja/uzycie przedmiotu" << std::endl << "" << std::endl;
    if (password == "CHIMERA") {
      std::cout << "Ktory przedmiot chcesz uzyc:" << std::endl;
      quantity = (artifact_1 + artifact_2 + artifact_3 + crowbar + blue_sphere + red_sphere + yellow_sphere +
               bucket + rope + blue_key + red_key + yellow_key + black_key);
      if (quantity != 0)
        quantity += 1;  //  dodawanie jeden aby uniknac nadania "0" jakiemus itemowi.
      if (crowbar == 1)
        quantity = (quantity - 1), std::cout << quantity << ") Lom" << std::endl;
      if (rope == 1)
        quantity = (quantity - 1), std::cout << quantity << ") Lina" << std::endl;
      if (bucket == 1)
        quantity = (quantity - 1), std::cout << quantity << ") Wiadro" << std::endl;
      if ((artifact_1 == 1) || (artifact_2 == 1) || (artifact_3 == 1))
        std::cout << "" << std::endl << "Artefakty:" << std::endl;
      if (artifact_1 == 1)
        quantity = (quantity - 1), std::cout << quantity << ") Artefakt 1 czesc" << std::endl;
      if (artifact_2 == 1)
        quantity = (quantity - 1), std::cout << quantity << ") Artefakt 2 czesc" << std::endl;
      if (artifact_3 == 1)
        quantity = (quantity - 1), std::cout << quantity << ") Artefakt 3 czesc" << std::endl;
      if ((blue_sphere == 1) || (red_sphere == 1) || (yellow_sphere == 1))
        std::cout << "" << std::endl << "Kule:" << std::endl;
      if (blue_sphere == 1)
        quantity = (quantity - 1), std::cout << quantity << ") Niebieska kula" << std::endl;
      if (red_sphere == 1)
        quantity = (quantity - 1), std::cout << quantity << ") Czerwone kula" << std::endl;
      if (yellow_sphere == 1)
        quantity = (quantity - 1), std::cout << quantity << ") Zolta kula" << std::endl;
      if ((blue_key == 1) || (red_key == 1) || (yellow_key == 1) ||
          (black_key == 1))
        std::cout << "" << std::endl << "Klucze:" << std::endl;
      if (blue_key == 1)
        quantity = (quantity - 1), std::cout << quantity << ") Niebieski klucz" << std::endl;
      if (red_key == 1)
        quantity = (quantity - 1), std::cout << quantity << ") Czerwony klucz" << std::endl;
      if (yellow_key == 1)
        quantity = (quantity - 1), std::cout << quantity << ") Zolty klucz" << std::endl;
      if (black_key == 1)
        quantity = (quantity - 1), std::cout << quantity << ") Czarny klucz" << std::endl;
      // crowbar 13, rope, bucket, artefakt1 artefakt2, artefakt3, niebieska kula,
      // czerwona kula, zolta kula, niebieski klucz, czerwony klucz, zolty klucz,
      // czarny klucz;
      std::cin >> door;
      wybor = door + 100;
      std::cout
          << "Zrobic jeszcze uycie- na te chwile z automatu drzwi = safeguard"
          << std::endl,
          wybor = safeguard;
      quantity = 0;
    }
    if (password != "CHIMERA") {
      std::cout << "Na tym etapie nie masz zadnych przedmiotow." << std::endl;
    }
    color_settings(7);
  }
  std::cout << "" << std::endl;
  door = safeguard;
}
void bad_command() {
  color_settings(12);
  if (door == 80)
    std::cout << "" << std::endl
         << "ZLA KOMENDA!!! Wybierz tak albo nie." << std::endl
         << "" << std::endl;
  if (door == 90)
    std::cout << "" << std::endl << "NIEPRAWIDLOWE HASLO!!!" << std::endl << "" << std::endl;
  if ((door != 80) && (door != 90))
    std::cout << "" << std::endl
         << "NIEPRAWIDLOWY WYBOR NUMERU POKOJU!!!" << std::endl
         << "" << std::endl;
  color_settings(7);
  door = safeguard;
}
void sprawdzenie() {
  color_settings(39);
  std::cout << "Pokoj 31. Sprawdzasz czy da się otworzyc drzwi..." << std::endl
       << "" << std::endl;
  (quantity = tomorrow_riddle + three_riddle + frost_riddle + silence_riddle + door_riddle + signpost_riddle + ground_floor_riddle + night_riddle +
           stars_riddle);
  if (quantity == 9) {
  // if
  // ((stars_riddle==1)&&(night_riddle==1)&&(ground_floor_riddle==1)&&(signpost_riddle==1)&&(door_riddle==1)&&(silence_riddle==1)&&(frost_riddle==1)&&(three_riddle==1)&&(tomorrow_riddle==1))
  // stary zapis
    door = 31;
  }
  if (quantity != 9) {
  // if
  // ((stars_riddle==0)||(night_riddle==0)||(ground_floor_riddle==0)||(signpost_riddle==0)||(door_riddle==0)||(silence_riddle==0)||(frost_riddle==0)||(three_riddle==0)||(tomorrow_riddle==0))
  // stary zapis
    room = 21;
    door = safeguard;
    std::cout << "Niestety, nie wszystkie zagadki są rozwiazane" << std::endl
         << "" << std::endl;
  }
  color_settings(7);
}
void instruction() {
  color_settings(14);
  std::cout << "" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "                    GRA NIE OBSLUGUJE POLSKICH ZNAKOW" << std::endl;
  std::cout << "         Gra jest podzielona na 3 etapy. Po kazdym wyswieli sie "
          "password."
       << std::endl;
  std::cout << "                Pozwoli on pozniej wznowic gre od danego etapu."
       << std::endl;
  std::cout << "        Gra polega na dojsciu z pokoju startowego do ostatniego "
          "pokoju."
       << std::endl;
  std::cout << "            Zaczynasz w pokoju nr 1, a ostatni pokoj ma numer 31."
       << std::endl;
  std::cout << "  Pierwszy etap konczy sie na pokoju nr10, drugi etap=20 i trzeci "
          "etap na 31"
       << std::endl;
  std::cout << "            Przechodzac do kolejnych pokoji podajesz numer pokoju."
       << std::endl;
  std::cout << "          Jesli wracasz do poprzedniego pokoju, tez podajesz jego "
          "numer."
       << std::endl;
  std::cout << "                W grze nie zawsze możesz otworzyc kazde drzwi."
       << std::endl;
  std::cout << "              Czasem jest potrzebny klucz, kod, zagadka, etc."
       << std::endl;
  std::cout << "         Poprzez wezwanie nastepującyh cyfr/ciągu cyfr uzyskamy: "
       << std::endl;
  std::cout << "" << std::endl;
  std::cout << "     Uzycie/aktywacje przedmiotu:                             "
       << '"' << "888" << '"' << std::endl;
  std::cout << "     Sprawdzenie swojego inwentarza, rozwiazanych zagadek:    "
       << '"' << "999" << '"' << std::endl;
  std::cout << "     Ponowne wezwanie instrukcji:                             "
       << '"' << "0" << '"' << "(zero)" << std::endl;
  std::cout << "" << std::endl;
  door = safeguard;
  color_settings(7);
}
void gra1() {      //  dziala
  switch (door) {  //  przerzucic int na string i string na int, zabezpieczyc wybor
                   //  drzwi jako string oraz zbyt wysoka lidzba.
  case 1:          //  pokoj nr 0
    safeguard = door;
    do {
      std::cout << "Pokoj numer 1. Dzwi nr4, nr2, nr9" << std::endl << "" << std::endl;
      std::cin >> door;
      if ((door != 4) && (door != 2) && (door != 9) && (door != 0) &&
          (door != 888) && (door != 999))
        bad_command();
    } while ((door != 4) && (door != 2) && (door != 9) && (door != 0) &&
             (door != 888) && (door != 999));
    break;

  case 2:
    safeguard = door;
    do {
      std::cout << "Pokoj numer 2. Dzwi nr1, nr8, nr6" << std::endl << "" << std::endl;
      std::cin >> door;
      if ((door != 1) && (door != 8) && (door != 6) && (door != 0) &&
          (door != 888) && (door != 999))
        bad_command();
    } while ((door != 1) && (door != 8) && (door != 6) && (door != 0) &&
             (door != 888) && (door != 999));
    break;

  case 3:
    safeguard = door;
    do {
      std::cout << "Pokoj numer 3. Dzwi nr5, nr8, nr4" << std::endl << "" << std::endl;
      std::cin >> door;
      if ((door != 5) && (door != 8) && (door != 4) && (door != 0) &&
          (door != 888) && (door != 999))
        bad_command();
    } while ((door != 5) && (door != 8) && (door != 4) && (door != 0) &&
             (door != 888) && (door != 999));
    break;

  case 4:
    safeguard = door;
    do {
      std::cout << "Pokoj numer 4. Dzwi nr1, nr3, nr9" << std::endl << "" << std::endl;
      std::cin >> door;
      if ((door != 1) && (door != 3) && (door != 9) && (door != 0) &&
          (door != 888) && (door != 999))
        bad_command();
    } while ((door != 1) && (door != 3) && (door != 9) && (door != 0) &&
             (door != 888) && (door != 999));
    break;

  case 5:
    safeguard = door;
    do {
      std::cout << "Pokoj numer 5. Dzwi nr3, nr8, nr7" << std::endl << "" << std::endl;
      std::cin >> door;
      if ((door != 3) && (door != 8) && (door != 7) && (door != 0) &&
          (door != 888) && (door != 999))
        bad_command();
    } while ((door != 3) && (door != 8) && (door != 7) && (door != 0) &&
             (door != 888) && (door != 999));
    break;

  case 6:
    safeguard = door;
    do {
      std::cout << "Pokoj numer 6. Dzwi nr7, nr2, nr10" << std::endl << "" << std::endl;
      std::cin >> door;
      if ((door != 7) && (door != 2) && (door != 10) && (door != 0) &&
          (door != 888) && (door != 999))
        bad_command();
    } while ((door != 7) && (door != 2) && (door != 10) && (door != 0) &&
             (door != 888) && (door != 999));
    break;

  case 7:
    safeguard = door;
    do {
      std::cout << "Pokoj numer 7. Dzwi nr6, nr5, nr9" << std::endl << "" << std::endl;
      std::cin >> door;
      if ((door != 6) && (door != 5) && (door != 9) && (door != 0) &&
          (door != 888) && (door != 999))
        bad_command();
    } while ((door != 6) && (door != 5) && (door != 9) && (door != 0) &&
             (door != 888) && (door != 999));
    break;

  case 8:
    safeguard = door;
    do {
      std::cout << "Pokoj numer 8. Dzwi nr2, nr3, nr5" << std::endl << "" << std::endl;
      std::cin >> door;
      if ((door != 2) && (door != 3) && (door != 5) && (door != 0) &&
          (door != 888) && (door != 999))
        bad_command();
    } while ((door != 2) && (door != 3) && (door != 5) && (door != 0) &&
             (door != 888) && (door != 999));
    break;

  case 9:
    safeguard = door;
    do {
      std::cout << "Pokoj numer 9. Dzwi nr1, nr7, nr4" << std::endl << "" << std::endl;
      std::cin >> door;
      if ((door != 1) && (door != 7) && (door != 4) && (door != 0) &&
          (door != 888) && (door != 999))
        bad_command();
    } while ((door != 1) && (door != 7) && (door != 4) && (door != 0) &&
             (door != 888) && (door != 999));
    break;

  case 10:
    std::cout << "Pokoj numer 10. Koniec pierwszego etapu." << std::endl << "" << std::endl;
    std::cout << "Haslo do 2 poziomu to: CHIMERA" << std::endl << "" << std::endl;
    password = "CHIMERA";
    door = 12345;
    safeguard = door;
    std::cout << "" << std::endl << "(nacisnij ENTER)" << std::endl << "" << std::endl;
    system("pause>null");
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl
         << "" << std::endl;
    break;
  }
}
void gra2() {      //  drugi etap nie dziala, brak sprawdzenia inventarza
door = 22;                                                                        // nastawiłem pokój 22 gdyż z jakiegoś powodu wchodzi w nieskończoną pętle- sprawdzić 
  switch (door) {  //  TOTALNY CHAOS DO OGARNIECIA!!! //zrobic: itemy i zamkniecia
                   //  pokoi, nie przedskakiwanie z kazdego do dowolnego pokoju,
                   //  ogranicznia dla drzwi
  case 12345: {
    std::cout << "Pokoj numer 10, w 2 etapie. Wielka sala." << std::endl;
    door = 10;
    // safeguard=10;
  } break;
  case 10:  //  dziala wywolanie function_inventory, instruction, wychodzenie z pokoju-
            //  uzupelnic function_inventory oraz komendy function_inventory oraz instrukcji w
            //  pozostalych pokojach.
            //  zrobic osobny switch dla wyboru co robia w pokoju //int crowbar=0,
            //  red_sphere=0, yellow_sphere=0, blue_sphere=0, barricade=0, bucket=0, rope=0,
            //  well=0;
            //  zrobic dzialanie 999, 888, nic nie można zrobić ponieważ
  {
    do {
      safeguard = door;
      if ((artifact_1 + artifact_2 + artifact_3) == 3)
        ele_art = 1;
      std::cout << "" << std::endl;
      std::cout << "Pokoj numer 10" << std::endl;
      std::cout << "Pokoje do wyboru:" << std::endl;
      std::cout << "11  12  13  14  15  16  17  18  19  20  21" << std::endl;
      std::cout << "Ktore drzwi wybierasz?" << std::endl << "" << std::endl;
      std::cin >> door;
      wybor = door;
      if (door == 10)
        std::cout << "" << std::endl << "Jestes w tym pokoju." << std::endl << "" << std::endl;
      if ((door != 0) && (door <= 9) ||
          (door >= 22) && (door != 888) && (door != 999))
        bad_command();
      if (door == 21) {
        std::cout << "" << std::endl << "Probujesz dostac sie do ostatnich drzwi" << std::endl;
        if ((black_key == 0) || (ele_art == 0))
          door = 10, std::cout << "Wrota wciaz sa zamkniete" << std::endl;
      }
    } while ((door != 0) && (door <= 9) ||
             (door >= 22) && (door != 888) && (door != 999));
    if ((door == 888) || (door == 999))
      item = wybor, function_inventory();
    if (door == 0)
      instruction();
    if ((wybor == 999) || (wybor == 888))
      system("pause>nul");
    wybor = NULL; } break;
  case 11:  //  3 element artefaktu, crowbar, cipher 50; //działa na 4.06 w 100%
  {
    do {
      safeguard = door;
      wybor = 0;
      system("cls");
      std::cout << "Pokoj numer 11" << std::endl;
      std::cout << "1)Stojacy w koncie, przepelniony od zniszczonych ubran wieszak "
        //  SPRAWDZIC ODPOWIEDZI "tak" I "NIE" i zmieić na angielski
              "na trzech nogach."
           << std::endl;
      std::cout << "2)Na scianie wisi obraz kobiety w sukni slubne, welon zakrywa "
              "jej twarz,"
           << std::endl;
      if (artifact_1 == 0)
        std::cout << "Pana mloda ma przypieta wystajaca z obrazu broszke." << std::endl;
      if (artifact_1 == 1)
        std::cout << "Na obrazie jest slad po broszce." << std::endl;
      std::cout << "3)Zamiast bukietu w rekach trzyma mala porwana w pol kartke z "
              "cyframi "
           << '"' << "5" << '"' << " i " << '"' << "0" << '"' << std::endl;
      std::cout << "4)Na czerwonym dywanie na srodku pokoju stoi okrogly stolik i "
              "dwa przewrocone krzesla."
           << std::endl;
      std::cout << "5)W lewym koncie jest z duza donica z uschnietymi na wior "
              "liscmi palmowymi."
           << std::endl;
      if (crowbar == 0)
        std::cout << "6)Na podlodze lezy crowbar." << std::endl;
      if (crowbar == 1)
        std::cout << "6)Puste miejsce po lomie." << std::endl;
      std::cout << "10)Powrot do pokoju numer 10." << std::endl;
      std::cout << "" << std::endl;
      std::cout << "Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"
           << std::endl
           << "" << std::endl;
      std::cin >> wybor;
      // artifact_1
      switch (wybor) {
      case 2: {
        //  broszka
        if (artifact_1 == 0) {
          do {
            std::cout << "Czy chcesz zabrac broszke? tak/nie" << std::endl;
            std::cin >> answer;
            transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
            if (answer == "TAK")
              artifact_1 = 1,
              std::cout << "Zebrano przedmiot: swietlista broszka." << std::endl;
            if (answer == "NIE")
              std::cout << "Cofasz sie pod drzwi." << std::endl;
            if ((answer != "NIE") && (answer != "TAK"))
              door = 80, bad_command();
          } while ((answer != "NIE") && (answer != "TAK"));
        } else
          std::cout << "Broszka zostala zabrana juz wczesniej." << std::endl;
      } break;
      case 6: {
        //  crowbar
        if (crowbar == 0) {
          do {
            std::cout << "Czy chcesz zabrac crowbar? tak/nie" << std::endl;
            std::cin >> answer;
            transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
            if (answer == "TAK")
              crowbar = 1, std::cout << "Zebrano przedmiot: crowbar." << std::endl;
            if (answer == "NIE")
              std::cout << "Cofasz sie pod drzwi." << std::endl;
            if ((answer != "NIE") && (answer != "TAK"))
              door = 80, bad_command();
          } while ((answer != "NIE") && (answer != "TAK"));
        } else
          std::cout << "Lom zostal zabrany juz wczesniej." << std::endl;
      } break;
      }
      if ((wybor != 2) && (wybor != 6) && (wybor != 10) && (wybor != 0) &&
          (wybor != 999) && (wybor != 888))
        std::cout << "Nie mozna nic zrobic" << std::endl;
      if ((wybor != 10) && (wybor != 999) && (wybor != 888) && (wybor > 6) ||
          (wybor < 0))
        std::cout << "...poniewaz: " << std::endl;
      if (wybor == 10)
        door = 10, system("cls");
      if ((wybor != 1) && (wybor != 2) && (wybor != 3) && (wybor != 4) &&
          (wybor != 5) && (wybor != 6) && (door != 10) && (wybor != 0) &&
          (wybor != 999) && (wybor != 888))
        bad_command();
      if ((wybor == 888) || (wybor == 999))
        item = wybor, function_inventory();
      if (wybor == 0)
        instruction();
      if (wybor != 10)
        system("pause>nul");
    } while (door != 10);
  } break;
  case 12: // bucket, pod nim niebieski klucz;
  {
    do {
      safeguard = door;
      wybor = 0;
      system("cls");

      std::cout << "Pokoj numer 12" << std::endl;
      std::cout << "1)Cegla, krucha, prawie cala w kawalkach" << std::endl;
      std::cout << "2)Obraz " << '"' << "Saturn pozerajacy wlasne dzieci" << '"'
           << std::endl;
      std::cout << "3)Obraz " << '"' << "Kiedy rozum spi, budza sie potwory" << '"'
           << std::endl;
      if (bucket == 0)
        std::cout << "4)Na ziemi lezy metalowe bucket." << std::endl;
      if ((bucket == 1) && (blue_key == 0))
        std::cout << "4)Na ziemi w mejscu po wiadrze lezy niebieski klucz." << std::endl;
      if (blue_key == 1)
        std::cout << "4)Puste miejsce na ziemi." << std::endl;
      std::cout << "5)Obraz " << '"' << "Sabat czarownic" << '"' << std::endl;
      std::cout << "6)Obraz " << '"' << "Stare kobiety i czas" << '"' << std::endl;
      std::cout << "10)Powrot do pokoju numer 10." << std::endl;
      std::cout << "" << std::endl;
      std::cout << "Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"
           << std::endl
           << "" << std::endl;
      std::cin >> wybor;

      switch (wybor) {
      case 4: {
        {
          // bucket, pod nim niebieski klucz
          if ((bucket == 1) && (blue_key == 1))
            std::cout << "Miejsce jest puste." << std::endl;
          if ((bucket == 1) && (blue_key == 0)) {
            do {
              std::cout << "Czy chcesz zabrac niebieski klucz? tak/nie" << std::endl;
              std::cin >> answer;
              transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
              if (answer == "TAK")
                blue_key = 1,
                std::cout << "Zebrano przedmiot: niebieski klucz." << std::endl;
              if (answer == "NIE")
                std::cout << "Cofasz sie pod drzwi." << std::endl;
              if ((answer != "NIE") && (answer != "TAK"))
                door = 80, bad_command();
            } while ((answer != "NIE") && (answer != "TAK"));
          }
          if ((bucket == 0) && (blue_key == 0)) {
            do {
              std::cout << "Czy chcesz zabrac bucket? tak/nie" << std::endl;
              std::cin >> answer;
              transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
              if (answer == "TAK")
                bucket = 1,
                std::cout << "Zebrano przedmiot: metalowe bucket.\nNa ziemi w "
                        "mejscu po wiadrze lezy niebieski klucz."
                     << std::endl;
              if (answer == "NIE")
                std::cout << "Cofasz sie pod drzwi." << std::endl;
              if ((answer != "NIE") && (answer != "TAK"))
                door = 80, bad_command();
            } while ((answer != "NIE") && (answer != "TAK"));
          }
        }
      } break;
      }

      if ((wybor != 0) && (wybor != 4) && (wybor != 10))
        std::cout << "Nie mozna nic zrobic" << std::endl;
      if ((wybor != 10) && (wybor != 999) && (wybor != 888) && (wybor > 6) ||
          (wybor < 0))
        std::cout << "...poniewaz: " << std::endl;
      if (wybor == 10)
        system("cls"), door = 10;
      if ((wybor != 1) && (wybor != 2) && (wybor != 3) && (wybor != 4) &&
          (wybor != 5) && (wybor != 6) && (door != 10) && (wybor != 0) &&
          (wybor != 999) && (wybor != 888))
        bad_command();
      if ((wybor == 888) || (wybor == 999))
        item = wybor, function_inventory();
      if (wybor == 0)
        instruction();
      if (wybor != 10)
        system("pause>nul");
    } while (door != 10);
  } break;
  case 13:  //  rope, zolty klucz pod zawinietym dywanem;
            //  problem z function_inventory
  {
    do {
      safeguard = door;
      wybor = 0;
      system("cls");

      std::cout << "Pokoj numer 13" << std::endl;
      std::cout << "1)Dzieciecy taboret ze zdrapana farba" << std::endl;
      if (rug == 0)
        std::cout << "2)Na ziemi lezy rug" << std::endl;
      if ((rug == 1) && (yellow_key == 0))
        std::cout << "2)Pod odwinietym dywanem lezy zolty klucz." << std::endl;
      if (yellow_key == 1)
        std::cout << "2)Puste miejsce na ziemi." << std::endl;
      std::cout << "3)Tapicerowany fotel, ma oderwany jeden bok podlokietnika"
           << std::endl;
      std::cout << "4)Tapicerowany fotel z licznymi plamami" << std::endl;
      std::cout << "5)Stolik kawowoy bez jednej nogi" << std::endl;
      if (rope == 0)
        std::cout << "6)Z zyrandola zwisa rope z wezlem szumienicznym" << std::endl;
      if (rope == 1)
        std::cout << "6)Zyrandol" << std::endl;
      std::cout << "10)Powrot do pokoju numer 10." << std::endl;
      std::cout << "" << std::endl;
      std::cout << "Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"
           << std::endl
           << "" << std::endl;
      std::cin >> wybor;

      switch (wybor) {
      case 2: {
        // bucket, pod nim niebieski klucz
        if ((rug == 1) && (yellow_key == 1))
          std::cout << "Miejsce jest puste." << std::endl;
        if ((rug == 1) && (yellow_key == 0)) {
          do {
            std::cout << "Czy chcesz zabrac zolty klucz? tak/nie" << std::endl;
            std::cin >> answer;
            transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
            if (answer == "TAK")
              yellow_key = 1, std::cout << "Zebrano przedmiot: zolty klucz." << std::endl;
            if (answer == "NIE")
              std::cout << "Cofasz sie pod drzwi." << std::endl;
            if ((answer != "NIE") && (answer != "TAK"))
              door = 80, bad_command();
          } while ((answer != "NIE") && (answer != "TAK"));
        }
        if ((rug == 0) && (yellow_key == 0)) {
          do {
            std::cout << "Czy chcesz zajrzec pod rug? tak/nie" << std::endl;
            std::cin >> answer;
            transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
            if (answer == "TAK")
              rug = 1,
              std::cout
                  << "Odwinieto rug.\nNa ziemi pod dywanem lezal zolty klucz."
                  << std::endl;
            if (answer == "NIE")
              std::cout << "Cofasz sie pod drzwi." << std::endl;
            if ((answer != "NIE") && (answer != "TAK"))
              door = 80, bad_command();
          } while ((answer != "NIE") && (answer != "TAK"));
        }
      } break;
      case 6: {
        if (rope == 1)
          std::cout << "Nie siegasz juz do samego zyrandola" << std::endl << "" << std::endl;
        if (rope == 0) {
          do {
            std::cout << "Czy chcesz sciagnac line? tak/nie" << std::endl;
            std::cin >> answer;
            transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
            if (answer == "TAK")
              rope = 1, std::cout << "Zebrano przedmiot: rope." << std::endl;
            if (answer == "NIE")
              std::cout << "Cofasz sie pod drzwi." << std::endl;
            if ((answer != "NIE") && (answer != "TAK"))
              door = 80, bad_command();
          } while ((answer != "NIE") && (answer != "TAK"));
        }
      } break;
      }

      if ((wybor != 10) && (wybor != 999) && (wybor != 888) && (wybor != 6) ||
          (wybor != 2))
        std::cout << "Nie mozna nic zrobic. " << std::endl;
      if ((wybor != 10) && (wybor != 999) && (wybor != 888) && (wybor > 6) ||
          (wybor < 0))
        std::cout << "...poniewaz: " << std::endl;
      if (wybor == 10)
        system("cls"), door = 10;
      if ((wybor != 1) && (wybor != 2) && (wybor != 3) && (wybor != 4) &&
          (wybor != 5) && (wybor != 6) && (door != 10) && (wybor != 0) &&
          (wybor != 999) && (wybor != 888))
        bad_command();
      if ((wybor == 888) || (wybor == 999))
        item = wybor, function_inventory();
      if (wybor == 0)
        instruction();
      if (wybor != 10)
        system("pause>nul");
    } while (door != 10);
  } break;
  case 14:  //  czesc szyfru 16, 2 element artefaktu w 1 wazonie (grupa 5
            //  wazonow);
  {
    do {
      safeguard = door;
      wybor = 0;
      system("cls");

      std::cout << "ZROBIC POPRAWKI, POKOJ AWARYJNY" << std::endl;
      std::cout << "Pokoj numer 14" << std::endl;
      if (vase_1 == 0)
        std::cout << "1)Sredni wazon, kolor zielony" << std::endl;
      if (vase_1 == 1)
        std::cout << "1)Rozbity wazon, kawalki koloru zielonego" << std::endl;
      if (vase_2 == 0)
        std::cout << "2)Maly wazon, kolor niebieski" << std::endl;
      if (vase_2 == 1)
        std::cout << "2)Rozbity wazon, kawalki koloru niebieskiego" << std::endl;
      if (vase_3 == 0)
        std::cout << "3)Duzy wazon, kolor czerwony" << std::endl;
      if ((vase_3 == 1) && (artifact_2 == 0))
        std::cout << "3)Rozbity wazon, kawalki koloru czerwonego i zlotego" << std::endl;
      if ((vase_3 == 1) && (artifact_2 == 1))
        std::cout << "3)Rozbity wazon, kawalki koloru czerwonego" << std::endl;
      if (pitcher == 0)
        std::cout << "4)Gliniany pitcher, kolor zolty-biale, glownie malunki "
                "wojownikow greckich"
             << std::endl;
      if (pitcher == 1)
        std::cout << "4)Rozbity gliniany pitcher" << std::endl;
      if (carafe == 0)
        std::cout << "5)Szklana karawka pelna czarnej cieczy" << std::endl;
      if (carafe == 1)
        std::cout << "5)Rozbita szklana karawka, ciecz cuchnie zgnilymi jajami, "
                "pelno w niej larw"
             << std::endl;
      if (cipher == 1)
        std::cout << "6) Obraz Pana Mlodego" << std::endl;
      if (cipher == 0)
        std::cout << "6) Obraz Pana Mlodego, w butonierce wystaje mu kartka" << std::endl;
      std::cout << "10)Powrot do pokoju numer 10." << std::endl;
      std::cout << "" << std::endl;
      std::cout << "Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"
           << std::endl
           << "" << std::endl;
      std::cin >> wybor;

      switch (wybor) {
      case 1: {
        if (vase_1 == 1)
          std::cout << "Nie mozna nic juz z tym zrobic" << std::endl;
        if (vase_1 == 0) {
          std::cout << "czy chczesz stluc wazon? tak/nie" << std::endl;
          std::cin >> answer;
          transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
          if (answer == "TAK")
            vase_1 = 1, std::cout << "Stluczono wazon" << std::endl;
          if (answer == "NIE")
            std::cout << "Cofasz sie pod drzwi." << std::endl;
          if ((answer != "NIE") && (answer != "TAK"))
            door = 80, bad_command();
        }while ((answer != "NIE") && (answer != "TAK"));
      } break;
      case 2: {
        if (vase_2 == 1)
          std::cout << "Nie mozna nic juz z tym zrobic" << std::endl;
        if (vase_2 == 0) {
          std::cout << "czy chczesz stluc wazon? tak/nie" << std::endl;
          std::cin >> answer;
          transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
          if (answer == "TAK")
            vase_2 = 1, std::cout << "Stluczono wazon" << std::endl;
          if (answer == "NIE")
            std::cout << "Cofasz sie pod drzwi." << std::endl;
          if ((answer != "NIE") && (answer != "TAK"))
            door = 80, bad_command();
        }while ((answer != "NIE") && (answer != "TAK"));
      } break;
      case 3:  //  <<======przy bezposrednim wyborze 3 program sie blokuje, nie
               //  znam przyczyny, sprawdzic, problem z wyjsciem na wybor 10,
               //  problem z cls
      {
        if (artifact_2 == 1)
          std::cout << "Nie mozna nic juz z tym zrobic." << std::endl;
        if ((vase_3 == 1) && (artifact_2 == 0)) {
          {
            std::cout << "Czy chcesz przeszukac jeszcze raz? tak/nie." << std::endl;
            std::cin >> answer;
            transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
            if (answer == "TAK")
              artifact_2 = 1, std::cout << "Zebrano przedmiot: zolty emblemat." << std::endl;
            if (answer == "NIE")
              std::cout << "Cofasz sie pod drzwi." << std::endl;
            if ((answer != "NIE") && (answer != "TAK"))
              door = 80, bad_command();
          }while ((answer != "NIE") && (answer != "TAK"));
        }
        if (vase_3 == 0) {
          std::cout << "Czy chczesz stluc wazon? tak/nie" << std::endl;
          std::cin >> answer;
          transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
          if (answer == "TAK")
            vase_3 = 1, std::cout << "Stluczono wazon i wypadla zawartosc." << std::endl;
          if (answer == "NIE")
            std::cout << "Cofasz sie pod drzwi." << std::endl;
          if ((answer != "NIE") && (answer != "TAK"))
            door = 80, bad_command();
        }while ((answer != "NIE") && (answer != "TAK"));
      } break;
      case 4: {
        if (pitcher == 1)
          std::cout << "Nie mozna nic juz z tym zrobic" << std::endl;
        if (pitcher == 0) {
          std::cout << "czy chczesz stluc pitcher? tak/nie" << std::endl;
          std::cin >> answer;
          transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
          if (answer == "TAK")
            pitcher = 1, std::cout << "Stluczono pitcher" << std::endl;
          if (answer == "NIE")
            std::cout << "Cofasz sie pod drzwi." << std::endl;
          if ((answer != "NIE") && (answer != "TAK"))
            door = 80, bad_command();
        }while ((answer != "NIE") && (answer != "TAK"));
      } break;
      case 5: {
        if (carafe == 1)
          std::cout << "Nie mozna nic juz z tym zrobic" << std::endl;
        if (carafe == 0) {
          std::cout << "czy chczesz stluc karafke? tak/nie" << std::endl;
          std::cin >> answer;
          transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
          if (answer == "TAK")
            carafe = 1, std::cout << "Stluczono karafke" << std::endl;
          if (answer == "NIE")
            std::cout << "Cofasz sie pod drzwi." << std::endl;
          if ((answer != "NIE") && (answer != "TAK"))
            door = 80, bad_command();
        }while ((answer != "NIE") && (answer != "TAK"));
      } break;
      case 6:  //  czesc szyfru "16"
      {
        if (cipher == 1)
          std::cout << "Nie mozna nic zrobic" << std::endl;
        if (cipher == 0) {
        // do
          std::cout << "Czy chcesz siegnac w kierunku obrazu?" << std::endl;
          std::cin >> answer;
          transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
          if (answer == "TAK")
            std::cout << "Wyciagneles kartke, odwracasz i czytasz. 16" << std::endl,
                cipher = 1;
          if (answer == "NIE")
            std::cout << "Cofasz sie pod drzwi." << std::endl;
          if ((answer != "NIE") && (answer != "TAK"))
            door = 80, bad_command();
        }while ((answer != "NIE") && (answer != "TAK"));
      } break;
      }
      if (wybor == 10)
        system("cls"), door = 10;
      if ((wybor != 10) && (wybor != 999) && (wybor != 888) && (wybor > 6) ||
          (wybor < 0))
        std::cout << "Nie mozna nic zrobic poniewaz: " << std::endl;
      if ((wybor != 1) && (wybor != 2) && (wybor != 3) && (wybor != 4) &&
          (wybor != 5) && (wybor != 6) && (door != 10) && (wybor != 0) &&
          (wybor != 999) && (wybor != 888))
        bad_command();
      if ((wybor == 888) || (wybor == 999))
        item = door, function_inventory();
      if (wybor == 0)
        instruction();
      if (wybor != 10)
        system("pause >null");
    } while (door != 10);
  } break;
  case 15:  //  drzwi na zolty klucz, wewnatrz zolta kula; DRZWI ZAMKNIETE NA
            //  ZOLTY KLUCZ
  {
    do {
      safeguard = door;
      wybor = 0;
      system("cls");

      std::cout << "Pokoj numer 15" << std::endl;
      std::cout << "1)Po lewej pustka i ciemnosc spowita mgla." << std::endl;
      std::cout << "2)Po prawej pustka i ciemnosc spowita mgla." << std::endl;
      std::cout << "3)Nad glowa pustka i ciemnosc spowita mgla." << std::endl;
      std::cout << "4)Pod nogami pustka i ciemnosc spowita mgla." << std::endl;
      std::cout << "5)Konsola z runami" << std::endl;
      if ((grille == 0) && (yellow_sphere == 0))
        std::cout << "6)Zakratowana zolta kula" << std::endl;
      if ((grille == 1) && (yellow_sphere == 0))
        std::cout << "6)Zolta kula" << std::endl;
      if (yellow_sphere == 1)
        std::cout << "6)Pustka i ciemnosc spowita mgla." << std::endl, yellow_sphere = 1;

      std::cout << "10)Powrot do pokoju numer 10." << std::endl;
      std::cout << "" << std::endl;
      std::cout << "Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"
           << std::endl
           << "" << std::endl;
      std::cin >> wybor;

      switch (wybor) {
      case 5: {
        std::cout << "\nKonsola ma 11 dziwnych glifow." << std::endl;
        std::cout << "Kazdy glif dziala jak przycisk." << std::endl;
        std::cout << "Czy zechcesz wcisnac ktorys symbol? tak/nie" << std::endl;
        do {
          std::cin >> answer;
          transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
          if (answer == "TAK")
            glyphs = 1;
          if (answer == "NIE")
            std::cout << "\nCofasz sie pod drzwi." << std::endl;
          if ((answer != "NIE") && (answer != "TAK"))
            door = 80, bad_command();
        } while ((answer != "NIE") && (answer != "TAK"));

        if ((glyphs == 1) && (control_console == 0)) {
          pozycz_str = "";
          counting = 0;
          std::cout << "/nA wiec zaczynamy. Podaj kolejnosc glifow. (kazda cyfre "
                  "oddzielaj "
               << '"' << "enter" << '"' << ")" << std::endl;
          std::cout << "(mozesz sprawdzic wizerunek glifow w zapisie linkow z gry, "
                  "badz wcisnac "
               << '"' << "y" << '"'
               << " aby ujrzec rozpisane nazwy glifow bez wizerunku.)" << std::endl;
          std::cout << "Jesli chcesz wyjsc z tego trybu gry i wrocic do pokoju, "
                  "poprostu go podaj : x."
               << std::endl;
          std::cout << "Jesli kotynowac to podaj kazdy inny dowolny znak." << std::endl;
          // prawidlowa odpowiedz: 9 4 11 5 1 3 2 8 10 6 7
          std::cin >> odp2;
          if (odp2 == "x")
            std::cout << "Cofasz sie pod drzwi." << std::endl;
          if ((odp2 != "x") && (odp2 != "y")) {
            std::cout << "Dobrze, zaczynamy." << std::endl;
            do {
              std::cin >> pozycz_str;
              pozycz_tymczas = (pozycz_tymczas + pozycz_str);
              std::cout << "Podawana kolejnosc: " << pozycz_tymczas << " " << std::endl;
              counting++;
            } while (counting != 11);  //  licnik nie dziala prawidlowo, petla
                                       //  dziala od punktu ze znakiem qwerty
            pozycz_str = pozycz_tymczas;
            pozycz_tymczas = "";
          }
          std::cout << "" << std::endl;
          if (odp2 == "y")
            std::cout << " 1)Earth\n 2)Jupiter\n 3)Mars\n 4)Mercury\n 5)Moon\n "
                    "6)Neptune\n 7)Pluto\n 8)Saturn\n 9)Sun\n 10)Uranus\n "
                    "11)Venus"
                 << std::endl;
          if (pozycz_str == "9411513281067")
            control_console = 1, answer = 15, grille = 1,
            std::cout << "Poprawny kod. Kraty ruszyly do gory odslaniajac dostep do "
                    "zoltej kuli."
                 << std::endl;
          if (pozycz_str != "9411513281067")
            answer = 15, std::cout << "Kod nie poprawny, ponow podejscie." << std::endl;
          //  TUTAJ BŁEDY POWYŻEJ %%%%%%%%%%%%%%%%
          //  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
          //  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        }

      } break;
      case 6: {
        // bucket, pod nim niebieski klucz
        if (yellow_sphere == 1)
          std::cout << "\nMiejsce jest puste." << std::endl;
        if ((yellow_sphere == 0) && (control_console == 0))
          std::cout << "\nZ powodu krat nie dajesz rady dostac sie do kuli." << std::endl;
        if ((yellow_sphere == 0) && (control_console == 1)) {
          do {
            std::cout << "\nKraty zniknely, kula jest juz dostepna." << std::endl;
            std::cout << "Czy chcesz zabrac zolta kule? tak/nie" << std::endl;
            std::cin >> answer;
            transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
            if (answer == "TAK")
              yellow_sphere = 1, std::cout << "Zebrano przedmiot: zolta kule.\n" << std::endl;
            if (answer == "NIE")
              std::cout << "Cofasz sie pod drzwi.\n" << std::endl;
            if ((answer != "NIE") && (answer != "TAK"))
              door = 80, bad_command();
          } while ((answer != "NIE") && (answer != "TAK"));
        }
      } break;
      }

      if ((wybor != 6) && (wybor != 5) && (wybor != 10))
        std::cout << "Nie mozna nic zrobic" << std::endl;
      if ((wybor != 10) && (wybor != 999) && (wybor != 888) && (wybor > 6) ||
          (wybor < 0))
        std::cout << "...poniewaz: " << std::endl;
      if (wybor == 10)
        system("cls"), door = 10;
      if ((wybor != 1) && (wybor != 2) && (wybor != 3) && (wybor != 4) &&
          (wybor != 5) && (wybor != 6) && (door != 10) && (wybor != 0) &&
          (wybor != 999) && (wybor != 888))
        bad_command();
      if ((wybor == 888) || (wybor == 999))
        item = wybor, function_inventory();
      if (wybor == 0)
        instruction();
      if (wybor != 10)
        system("pause>nul");
    } while (door != 10);
  } break;
  case 16:  //  well (bucket+rope= czerwony klucz);
            //  problem z inwentory
  {
    do {
      safeguard = door;
      wybor = 0;
      system("cls");

      std::cout << "Pokoj numer 16" << std::endl;
      if (mill == 0)
        std::cout << "1)Mlynek do ucierania z dwoch kamiennych kregow" << std::endl;
      if (mill == 1)
        std::cout << "1)Jeden kamien zostal na swoim miejscu, drugi lezy na ziemi"
             << std::endl;
      if (anvil == 0)
        std::cout << "2)Kowadlo" << std::endl;
      if (anvil == 1)
        std::cout << "2)Kowadlo, a obok zniszczony hammer" << std::endl;
      if (well == 0)
        std::cout << "3)Studnia" << std::endl;
      if (well == 1)
        std::cout << "3)Studnia" << std::endl;
      if (hammer == 0)
        std::cout << "4)Mlot kowalski, stary, wysluzony" << std::endl;
      if (hammer == 1)
        std::cout << "4)Puste miejsce" << std::endl;
      if (five == 0)
        std::cout << "5)Piec hutniczy pelny sadzy" << std::endl;
      if (five == 1)
        std::cout << "5)Piec hutniczy, sadza teraz jest wszedzie" << std::endl;
      if (stand == 0)
        std::cout << "6)Stojak czy wieszak na bronie, jednak kompletnie zgnily od "
                "wilgoci"
             << std::endl;
      if (stand == 1)
        std::cout << "6)Stojak teraz stal sie kupa zgnilego drewna" << std::endl;
      std::cout << "10)Powrot do pokoju numer 10." << std::endl;
      std::cout << "" << std::endl;
      std::cout << "Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"
           << std::endl
           << "" << std::endl;
      std::cin >> wybor;

      switch (wybor) {
      case 1: {
        if (mill == 1)
          std::cout << "Nie mozna nic juz z tym zrobic" << std::endl;
        if (mill == 0) {
          std::cout << "czy chczesz poruszyc mlynkiem? tak/nie" << std::endl;
          std::cin >> answer;
          transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
          if (answer == "TAK")
            mill = 1, std::cout << "Ruszenie mechanizmu sprawilo ze jeden z "
                                "kamieni odpadl od kostrukcji"
                             << std::endl;
          if (answer == "NIE")
            std::cout << "Cofasz sie pod drzwi." << std::endl;
          if ((answer != "NIE") && (answer != "TAK"))
            door = 80, bad_command();
        }while ((answer != "NIE") && (answer != "TAK"));
      } break;
      case 2: {
        if ((anvil == 1) || (hammer == 0))
          std::cout << "Nie mozna nic juz z tym zrobic" << std::endl;
        if ((anvil == 0) && (hammer == 1)) {
          std::cout << "Czy chesz przetestowadz sprawnosc mlota? tak/nie" << std::endl;
          std::cin >> answer;
          transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
          if (answer == "TAK")
            anvil = 1, std::cout << "Sprawdziles, hammer z loskotem zlamal sie tuz "
                                 "przy trzonku... juz go nie uzyjesz"
                              << std::endl;
          if (answer == "NIE")
            std::cout << "Cofasz sie pod drzwi." << std::endl;
          if ((answer != "NIE") && (answer != "TAK"))
            door = 80, bad_command();
        }while ((answer != "NIE") && (answer != "TAK"));
        } break;
      case 3: {
        if (well == 1)
          std::cout << "Nie mozna nic juz z tym zrobic" << std::endl, answer = "NIE";
        if ((well == 0) && (bucket == 0) || (rope == 0))
          std::cout << "Czegos jeszcze brakuje..." << std::endl, answer = "NIE";
        if ((well == 0) && (bucket == 1) && (rope == 1)) {
          std::cout << "Czy chesz uzyc wiadra i sznura? tak/nie" << std::endl;
          std::cin >> answer;
          transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
          if (answer == "TAK")
            well = 1, red_key = 1,
            std::cout << "Z metnej wody studni udaje ci sie wylowic czerwony klucz"
                 << std::endl;
          if (answer == "NIE")
            std::cout << "Cofasz sie pod drzwi." << std::endl;
          if ((answer != "NIE") && (answer != "TAK"))
            door = 80, bad_command();
        }while ((answer != "NIE") && (answer != "TAK"));
      } break;
      case 4: {
        if (hammer == 1)
          std::cout << "Nie mozna nic juz z tym zrobic" << std::endl;
        if (hammer == 0) {
          std::cout << "Czy chcesz podniesc hammer? tak/nie" << std::endl;
          std::cin >> answer;
          transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
          if (answer == "TAK")
            hammer = 1,
            std::cout << "Ciezki, dworeczny hammer kowalski, jeszcze dziala..."
                 << std::endl;
          if (answer == "NIE")
            std::cout << "Cofasz sie pod drzwi." << std::endl;
          if ((answer != "NIE") && (answer != "TAK"))
            door = 80, bad_command();
        }while ((answer != "NIE") && (answer != "TAK"));
      } break;
      case 5: {
        if (five == 1)
          std::cout << "Nie mozna nic juz z tym zrobic" << std::endl;
        if (five == 0) {
          std::cout << "Czy chcesz przeszukac five? tak/nie" << std::endl;
          std::cin >> answer;
          transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
          if (answer == "TAK")
            five = 1, std::cout << "Grzebiesz sie w sadzy, oprocz kaszlu i tumami "
                              "unoszacemu sie kurzowi nic nie znalazles"
                           << std::endl;
          if (answer == "NIE")
            std::cout << "Cofasz sie pod drzwi." << std::endl;
          if ((answer != "NIE") && (answer != "TAK"))
            door = 80, bad_command();
        }while ((answer != "NIE") && (answer != "TAK"));
      } break;
      case 6: {
        if (stand == 1)
          std::cout << "Nie mozna nic juz z tym zrobic" << std::endl;
        if (stand == 0) {
          std::cout << "Czy chcesz przeszukac stand? tak/nie" << std::endl;
          std::cin >> answer;
          transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
          if (answer == "TAK")
            stand = 1,
            std::cout << "Stojak przy pierwszym dotknieciu rozsypal sie" << std::endl;
          if (answer == "NIE")
            std::cout << "Cofasz sie pod drzwi." << std::endl;
          if ((answer != "NIE") && (answer != "TAK"))
            door = 80, bad_command();
        }while ((answer != "NIE") && (answer != "TAK"));
      } break;
      }
      // if ((wybor!=0)&&(wybor!=4)&&(wybor!=10)) cout <<"Nie mozna nic
      // zrobic"<<endl<<""<<endl;
      if ((wybor != 10) && (wybor > 6) || (wybor < 0))
        std::cout << "...poniewaz: " << std::endl;
      if ((wybor != 10) && (wybor != 999) && (wybor != 888) && (wybor > 6) ||
          (wybor < 0))
        std::cout << "...poniewaz: " << std::endl;
      if (wybor == 10)
        system("cls"), door = 10;
      // if
      // ((wybor!=1)&&(wybor!=2)&&(wybor!=3)&&(wybor!=4)&&(wybor!=5)&&(wybor!=6)&&(drzwi!=10)&&(wybor!=0)&&(wybor!=999)&&(wybor!=888))
      // bad_command ();
      if ((wybor == 888) || (wybor == 999))
        item = wybor, function_inventory();
      if (wybor == 0)
        instruction();
      if (wybor != 10)
        system("pause>nul");
    } while ((door != 0) && (door != 10));
  } break;
  case 17:  //  niebieska kula, zamek na niebieski klucz; DRZWI ZAMKNIETE NA
            //  NIEBIESKI KLUCZ
  {
    safeguard = door;
    wybor = 0;

    std::cout << "Niebieskie dzwi sa zamkniete na klucz" << std::endl;
    std::cout << "Moze mamy jakis w kieszeni...(podaj jeszcze raz numer pokoju)"
         << std::endl;
    // zrobic zastosowanie function_inventory
    std::cin >> wybor;
    // ponizej wstepne dzialanie barykady
    blue_key = 1;
    if (blue_key == 0)
      door = 10;
    if (blue_key == 1) {
      do {
        safeguard = door;
        wybor = 0;
        system("cls");

        std::cout << "Pokoj numer 17" << std::endl;
        std::cout << "1)Wiszaca szafka z kilkoma monitorami, maja rozne rozmiary, "
                "kolory..."
             << std::endl;
        std::cout << "2)Kawalki drewna, jeszcze cieple, ktos wczesniej robil tu "
                "ognisko"
             << std::endl;
        std::cout << "3)Skrzynka narzedziowa" << std::endl;
        if (oak_wardrobe == 0)
          std::cout << "4)Debowa szafa" << std::endl;
        if (oak_wardrobe == 1)
          std::cout << "4)Otwarta debowa szafa" << std::endl;
        if (oak_wardrobe == 2)
          std::cout << "4)Otwarta debowa szafa, a woreczek z kulkami z niej  w rece"
               << std::endl;
        if (oak_wardrobe == 3)
          std::cout << "4)Otwarta debowa szafa, pusty woreczek na ziemi, a kulki "
                  "wszedzie rozsypane"
               << std::endl;
        std::cout << "5)Sterta starych, pustych, smierdzacych konserw fasolki po "
                "bretonsku"
             << std::endl;
        if (desk == 0)
          std::cout << "6)Krzeslo, desk, pelno papierowych kartek" << std::endl;
        if (desk == 1)
          std::cout << "6)Krzeslo jest przewrocone, desk ma wyryte cos na blacie, "
                  "a papiery sa rozsypane"
               << std::endl;
        std::cout << "10)Powrot do pokoju numer 10." << std::endl;
        std::cout << "" << std::endl;
        std::cout
            << "Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"
            << std::endl
            << "" << std::endl;
        std::cin >> wybor;

        switch (wybor) {
        case 3: {
          if (box < 2)
            std::cout << "Otwierasz szkrzynke, jest pusta, zamykasz ponownie"
                 << std::endl;
          if ((box < 5) && (box >= 2))
            std::cout << "Czy liczysz ze otwieranie i zamykanie skrzynki sprawi ze "
                    "cos sie w niej pojawi?"
                 << std::endl;
          if (box >= 5)
            std::cout << "ech... dostajesz order upierdliwosci" << std::endl;
          box++;

          break;
        }
        case 4: {
          if (oak_wardrobe == 3)
            std::cout << "Juz nic z tym miejscem nie zrobisz, moze box z "
                    "narzedziami cos ma?"
                 << std::endl;
          if (oak_wardrobe == 2) {
            std::cout << "Czy chcesz przeszukac woreczek?" << std::endl;
            std::cin >> answer;
            transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
            if (answer == "TAK")
              oak_wardrobe = 3,
              std::cout << "W woreczku znajdujesz niebieska kule" << std::endl,
              blue_sphere = 1;
            if (answer == "NIE")
              std::cout << "Cofasz sie pod drzwi." << std::endl;
            if ((answer != "NIE") && (answer != "TAK"))
              door = 80, bad_command();
          }

          if (oak_wardrobe == 1) {
            std::cout << "Czy chcesz przeszukac szafe?" << std::endl;
            std::cin >> answer;
            transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
            if (answer == "TAK")
              oak_wardrobe = 2, std::cout << "W szafie jest woreczek z kulkami" << std::endl;
            if (answer == "NIE")
              std::cout << "Cofasz sie pod drzwi." << std::endl;
            if ((answer != "NIE") && (answer != "TAK"))
              door = 80, bad_command();
          }

          if (oak_wardrobe == 0) {
            std::cout << "Czy chcesz otworzyc szafe?" << std::endl;
            std::cin >> answer;
            transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
            if (answer == "TAK")
              oak_wardrobe = 1, std::cout << "Otwierasz szafe" << std::endl;
            if (answer == "NIE")
              std::cout << "Cofasz sie pod drzwi." << std::endl;
            if ((answer != "NIE") && (answer != "TAK"))
              door = 80, bad_command();
          }

          break;
        }
        case 6: {
          if (desk == 0) {
            std::cout << "Idac do biurka potykasz sie i rozsypujesz sterte papierow"
                 << std::endl;
            std::cout << "Na blacie ktos wyryl nozem three kule z napisami wewnatrz: "
                    "aoi, akai, kiiroi"
                 << std::endl;
            std::cout << "powyzej nich goruje prism i klucz z napisem: kin’iro"
                 << std::endl;
            desk = 1;
          }
          if (desk == 1) {
            std::cout << "Na blacie ktos wyryl nozem three kule z napisami wewnatrz: "
                    "aoi, akai, kiiroi"
                 << std::endl;
            std::cout << "powyzej nich goruje prism i klucz z napisem: kin’iro"
                 << std::endl;
          }
          break;
        } break;
        }

        if ((wybor != 0) && (wybor != 3) && (wybor != 4) && (wybor != 6) &&
            (wybor != 10))
          std::cout << "Nie mozna nic zrobic" << std::endl << "" << std::endl;
        if ((wybor != 10) && (wybor != 999) && (wybor != 888) && (wybor > 6) ||
            (wybor < 0))
          std::cout << "...poniewaz: " << std::endl;
        if (wybor == 10)
          system("cls"), door = 10;
        if ((wybor != 1) && (wybor != 2) && (wybor != 3) && (wybor != 4) &&
            (wybor != 5) && (wybor != 6) && (door != 10) && (wybor != 0) &&
            (wybor != 999) && (wybor != 888))
          bad_command();
        if ((wybor == 888) || (wybor == 999))
          item = wybor, function_inventory();
        if (wybor == 0)
          instruction();
        if (wybor != 10)
          system("pause>nul");
      } while ((door != 0) && (door != 10));
    }
  } break;
    std::cout << "POKOJ W BUDOWIE" << std::endl;

  case 18:  //  czerwona kula, zamek na czerwony klucz; DRZWI ZAMKNIETE NA CZERONY
            //  KLUCZ

  {
    std::cout << "Czerwone dzwi sa zamkniete nma klucz" << std::endl;
    std::cout << "Sprawdz w plecaku...(podaj jeszcze raz numer pokoju)" << std::endl;
    // zrobic zastosowanie function_inventory
    std::cin >> wybor;
    // ponizej wstepne dzialanie barykady
    red_key = 1;
    if (red_key == 0)
      door = 10;
    if (red_key == 1) {
      do {
        safeguard = door;
        wybor = 0;
        system("cls");

        std::cout << "POKOJ W BUDOWIE" << std::endl;
        std::cout << "Pokoj numer 18" << std::endl;
        std::cout << "1)" << std::endl;
        std::cout << "2)" << std::endl;
        std::cout << "3)" << std::endl;
        std::cout << "4)" << std::endl;
        std::cout << "5)" << std::endl;
        std::cout << "6)" << std::endl;
        std::cout << "10)Powrot do pokoju numer 10." << std::endl;
        std::cout << "" << std::endl;
        std::cout
            << "Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"
            << std::endl
            << "" << std::endl;
        std::cin >> wybor;

        switch (wybor) {
        case 1: {
          std::cout << "poleglem" << std::endl;
          break;
        }

        break;
        }
        std::cout << "POKOJ W BUDOWIE" << std::endl;

        // if ((wybor!=0)&&(wybor!=4)&&(wybor!=10)) cout <<"Nie mozna nic
        // zrobic"<<endl<<""<<endl;
        if ((wybor != 10) && (wybor != 999) && (wybor != 888) && (wybor > 6) ||
            (wybor < 0))
          std::cout << "...poniewaz: " << std::endl;
        if (wybor == 10)
          system("cls"), door = 10;
        if ((wybor != 1) && (wybor != 2) && (wybor != 3) && (wybor != 4) &&
            (wybor != 5) && (wybor != 6) && (door != 10) && (wybor != 0) &&
            (wybor != 999) && (wybor != 888))
          bad_command();
        if ((wybor == 888) || (wybor == 999))
          item = wybor, function_inventory();
        if (wybor == 0)
          instruction();
        if (wybor != 10)
          system("pause>nul");
      } while ((door != 0) && (door != 10));
    }
  } break;
  case 19:  //  1 element artefaktu w szafce, barricade (wylamac lomem); DRZWI
            //  ZAMKNIETE PRZEZ BARYKADE, wyłamuje ja crowbar
  {
    safeguard = door;
    wybor = 0;

    std::cout << "Dzwi sa zabarykadowane, niestety deski nie da sie usunac samymi "
            "rekami"
         << std::endl;
    std::cout << "Przydaloby sie jakies narzedzie...(podaj jeszcze raz numer pokoju)"
         << std::endl;
    // zrobic zastosowanie function_inventory
    std::cin >> wybor;
    // ponizej wstepne dzialanie barykady
    crowbar = 1;
    if (crowbar == 0)
      door = 10;
    if (crowbar == 1) {
      do {
        safeguard = door;
        wybor = 0;
        system("cls");

        std::cout << "POKOJ W BUDOWIE" << std::endl;
        std::cout << "Pokoj numer 19" << std::endl;
        std::cout << "1)" << std::endl;
        std::cout << "2)" << std::endl;
        std::cout << "3)" << std::endl;
        std::cout << "4)" << std::endl;
        std::cout << "5)" << std::endl;
        std::cout << "6)" << std::endl;
        std::cout << "10)Powrot do pokoju numer 10." << std::endl;
        std::cout << "" << std::endl;
        std::cout
            << "Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"
            << std::endl
            << "" << std::endl;
        std::cin >> wybor;

        switch (wybor) { break; }
        std::cout << "POKOJ W BUDOWIE" << std::endl;

        // if ((wybor!=0)&&(wybor!=4)&&(wybor!=10)) cout <<"Nie mozna nic
        // zrobic"<<endl<<""<<endl;
        if ((wybor != 10) && (wybor != 999) && (wybor != 888) && (wybor > 6) ||
            (wybor < 0))
          std::cout << "...poniewaz: " << std::endl;
        if (wybor == 10)
          system("cls"), door = 10;
        if ((wybor != 1) && (wybor != 2) && (wybor != 3) && (wybor != 4) &&
            (wybor != 5) && (wybor != 6) && (door != 10) && (wybor != 0) &&
            (wybor != 999) && (wybor != 888))
          bad_command();
        if ((wybor == 888) || (wybor == 999))
          item = wybor, function_inventory();
        if (wybor == 0)
          instruction();
        if (wybor != 10)
          system("pause>nul");
      } while ((door != 0) && (door != 10));
    }
  } break;
  case 20: // prism (wmonowac tam 3 kule)- oddaje czarny klucz, zamek na cipher
           // 50 16;  DRZWI do pokoju ZAMKNIETE NA SZYFR trzeba podac aby wehsc
           // 50 16
  {
    do {
      safeguard = door;
      wybor = 0;
      system("cls");

      std::cout << "POKOJ W BUDOWIE" << std::endl;
      std::cout << "Pokoj numer 20" << std::endl;
      std::cout << "1)" << std::endl;
      std::cout << "2)" << std::endl;
      std::cout << "3)" << std::endl;
      std::cout << "4)" << std::endl;
      std::cout << "5)" << std::endl;
      std::cout << "6)" << std::endl;
      std::cout << "10)Powrot do pokoju numer 10." << std::endl;
      std::cout << "" << std::endl;
      std::cout << "Co chcesz zrobic? (podaj odpowiednia liczbe przed dana linijka)"
           << std::endl
           << "" << std::endl;
      std::cin >> wybor;

      switch (wybor) { break; }
      std::cout << "POKOJ W BUDOWIE" << std::endl;

      // if ((wybor!=0)&&(wybor!=4)&&(wybor!=10)) cout <<"Nie mozna nic
      // zrobic"<<endl<<""<<endl;
      if ((wybor != 10) && (wybor != 999) && (wybor != 888) && (wybor > 6) ||
          (wybor < 0))
        std::cout << "...poniewaz: " << std::endl;
      if (wybor == 10)
        system("cls"), door = 10;
      if ((wybor != 1) && (wybor != 2) && (wybor != 3) && (wybor != 4) &&
          (wybor != 5) && (wybor != 6) && (door != 10) && (wybor != 0) &&
          (wybor != 999) && (wybor != 888))
        bad_command();
      if ((wybor == 888) || (wybor == 999))
        item = wybor, function_inventory();
      if (wybor == 0)
        instruction();
      if (wybor != 10)
        system("pause>nul");
    } while ((door != 0) && (door != 10));
  } break;
  case 21:  //  do otwarcia potrzeba zlotego klucza z pryzmatu + 3 elementow
            //  artefaktu;
  {
    safeguard = door;
    system("cls");
    std::cout << "Pokoj numer 21. Koniec drugiego etapu" << std::endl << "" << std::endl;
    std::cout << "Haslo do 3 etapu: PERYT" << std::endl << "" << std::endl;
    password = "PERYT";
    door = 98987;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl
         << "" << std::endl;
  } break;
  }
}
void gra3() {  //  dziala
  switch (door) {
  case 98987: {
    system("cls");
    std::cout << "Trzeci etap gry, ostatni." << std::endl;
    std::cout << "Sala 21 jest okragla, 10 drzwi." << std::endl;
    std::cout << "Za kazdymi jest zagadka do odgadniecia." << std::endl;
    std::cout << "Drzwi do wyboru: 22,23,24,25,26,27,28,29,30 i 31" << std::endl;
    std::cout << "Przy kazdej jest kolumna z czerwonym ogniem." << std::endl;
    std::cout << "Najwieksze drzwi, 31 sa zamkniete." << std::endl;
    std::cout << "Tylko przy drzwiach 31 plonie zielony ogien."
         << "" << std::endl;
    std::cout << "(Podglad ogni zostal zapisany w pliku z gra)" << std::endl;
    answer == "";
    safeguard = door;
    door = 21;
  } break;
  case 21: {
    safeguard = door;
    do {
      if ((stars_riddle == 1) && (night_riddle == 1) && (ground_floor_riddle == 1) && (signpost_riddle == 1) &&
          (door_riddle == 1) && (silence_riddle == 1) && (frost_riddle == 1) && (three_riddle == 1) &&
          (tomorrow_riddle == 1)) {
        std::cout << "Przy dzwiach 31 zaszla zmiana. Ogien z zieleni zmienil sie w "
                "czerwien."
             << std::endl
             << "" << std::endl;
      }
      std::cout << "" << std::endl << "Pokoj 21" << std::endl;
      std::cout << "Wybierz pokoj do ktorego sie udasz." << std::endl << "" << std::endl;
      std::cin >> room;
      system("cls");
      if (room == 21)
        std::cout << "Jestes juz w tym pokoju." << std::endl << "" << std::endl;
      if ((room != 21) && (room != 22) && (room != 23) && (room != 24) &&
          (room != 25) && (room != 26) && (room != 27) && (room != 28) &&
          (room != 29) && (room != 30) && (room != 31) && (room != 0) &&
          (room != 888) && (room != 999))
        bad_command();
    } while ((room != 22) && (room != 23) && (room != 24) && (room != 25) &&
             (room != 26) && (room != 27) && (room != 28) && (room != 29) &&
             (room != 30) && (room != 31) && (room != 0) && (room != 888) &&
             (room != 999));
    if (room == 0)
      instruction();
    if (room == 31)
      sprawdzenie();
    if ((room == 999) || (room == 888))
      item = room, function_inventory();
    if ((room != 0) && (room != 888) && (room != 999))
      door = room;
    room = 0;
  } break;
  case 22: {
    if (tomorrow_riddle == 0) {
      safeguard = door;
      do {
        std::cout << "Pokoj numer 22" << std::endl;
        std::cout << "Zawsze przyjdzie, ale nigdy nie przyjdzie dzisiaj. Co to "
                "takiego?"
             << std::endl;  //  tomorrow_riddle
        std::cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
        if ((answer != "JUTRO") && (answer != "0"))
          bad_command();
      } while ((answer != "JUTRO") && (answer != "0"));
      if (answer == "JUTRO")
        door = 21, tomorrow_riddle = 1, tomorrow_string = "",
        std::cout << "" << std::endl
             << "W kolumnie zaplonol niebieski ogien" << std::endl
             << "" << std::endl;
      if (answer == "0")
        door = 0;
    } else {
      std::cout << "Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."
           << std::endl
           << "" << std::endl,
          door = 21;}
  } break;
  case 23: {
    if (three_riddle == 0) {
      safeguard = door;
      do {
        std::cout << "Pokoj numer 23" << std::endl;
        std::cout << "Szly gesi gesiego, jedna za druga. Ile bylo gesi?"
             << std::endl;  //  three_riddle
        std::cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
      } while ((answer != "TRZY") && (answer != "3") && (answer != "0"));
      if ((answer == "TRZY") || (answer == "3"))
        door = 21, three_riddle = 1, space_23 = "    ", three_string = "",
        std::cout << "" << std::endl
             << "W kolumnie zaplonol niebieski ogien" << std::endl
             << "" << std::endl;
      if (answer == "0")
        door = 0;
    } else {
      std::cout << "Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."
           << std::endl
           << "" << std::endl,
          door = 21;}
  } break;
  case 24: {
    if (frost_riddle == 0) {
      safeguard = door;
      do {
        std::cout << "Pokoj numer 24" << std::endl;
        std::cout << "Co lapie, ale nie rzuca?" << std::endl;  //  mró¿
        std::cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
      } while ((answer != "MROZ") && (answer != "0"));
      if (answer == "MROZ")
        door = 21, frost_riddle = 1, frost_string = "", space_24 = "    ",
        std::cout << "" << std::endl
             << "W kolumnie zaplonol niebieski ogien" << std::endl
             << "" << std::endl;
      if (answer == "0")
        door = 0;
    } else {
      std::cout << "Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."
           << std::endl
           << "" << std::endl,
          door = 21;}
  } break;
  case 25: {
    if (silence_riddle == 0) {
      safeguard = door;
      do {
        std::cout << "Pokoj numer 25" << std::endl;
        std::cout << "Co jest tak delikatnego i kruchego, ze nawet wypowiedzenie "
                "jego nazwy, to przerywa?"
             << std::endl;  //  silence_riddle
        std::cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
      } while ((answer != "CISZA") && (answer != "0"));
      if (answer == "CISZA")
        door = 21, silence_riddle = 1, silence_string = "", space_25 = "    ",
        std::cout << "" << std::endl
             << "W kolumnie zaplonol niebieski ogien" << std::endl
             << "" << std::endl;
      if (answer == "0")
        door = 0;
    } else {
      std::cout << "Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."
           << std::endl
           << "" << std::endl,
          door = 21;}
  } break;
  case 26: {
    if (door_riddle == 0) {
      safeguard = door;
      do {
        std::cout << "Pokoj numer 26" << std::endl;
        std::cout << "Co zapewnia sile i moc do przechodzenia przez sciany?"
             << std::endl;  //  drzwi (sprawdzenie to dzwi)
        std::cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
      } while ((answer != "DRZWI") && (answer != "0"));
      if (answer == "DRZWI")
        door = 21, door_riddle = 1, door_string = "",
        std::cout << "" << std::endl
             << "W kolumnie zaplonol niebieski ogien" << std::endl
             << "" << std::endl;
      if (answer == "0")
        door = 0;
    } else {
      std::cout << "Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."
           << std::endl
           << "" << std::endl,
          door = 21;}
  } break;
  case 27: {
    if (signpost_riddle == 0) {
      safeguard = door;
      do {
        std::cout << "Pokoj numer 27" << std::endl;
        std::cout << "Stoi przy drodze na jednej nodze, rece rozklada i dokad isc "
                "gada."
             << std::endl;  //  signpost_riddle
        std::cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
      } while ((answer != "DROGOWSKAZ") && (answer != "0"));
      if (answer == "DROGOWSKAZ")
        door = 21, signpost_riddle = 1, space_27 = "    ", signpost_string = "",
        std::cout << "" << std::endl
             << "W kolumnie zaplonol niebieski ogien" << std::endl
             << "" << std::endl;
      if (answer == "0")
        door = 0;
    } else {
      std::cout << "Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."
           << std::endl
           << "" << std::endl,
          door = 21;}
  } break;
  case 28: {
    if (ground_floor_riddle == 0) {
      safeguard = door;
      do {
        std::cout << "Pokoj numer 28" << std::endl;
        std::cout << "Budynek ma cztery kondygnacje. Im wyzsze pietro, tym wiecej "
                "ludzi tam mieszka."
             << std::endl;
        std::cout << "Na ktore pietro najczesciej jezdzi winda?" << std::endl;  //  ground_floor_riddle
        std::cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
      } while ((answer != "PARTER") && (answer != "0"));
      if (answer == "PARTER")
        door = 21, ground_floor_riddle = 1, ground_floor_string = "", space_28 = "    ",
        std::cout << "" << std::endl
             << "W kolumnie zaplonol niebieski ogien" << std::endl
             << "" << std::endl;
      if (answer == "0")
        door = 0;
    } else {
      std::cout << "Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."
           << std::endl
           << "" << std::endl,
          door = 21;}
  } break;
  case 29: {
    if (night_riddle == 0) {
      safeguard = door;
      do {
        std::cout << "Pokoj numer 29" << std::endl;
        std::cout << "W zimie jest dluga, a latem krotka. Co to jest?" << std::endl;  //  night_riddle
        std::cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
      } while ((answer != "NOC") && (answer != "0"));
      if (answer == "NOC")
        door = 21, night_riddle = 1, night_string = "", space_29 = "    ",
        std::cout << "" << std::endl
             << "W kolumnie zaplonol niebieski ogien" << std::endl
             << "" << std::endl;
      if (answer == "0")
        door = 0;
    } else {
      std::cout << "Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."
           << std::endl
           << "" << std::endl,
          door = 21;}
  } break;
  case 30: {
    if (stars_riddle == 0) {
      safeguard = door;
      do {
        std::cout << "Pokoj numer 30" << std::endl;
        std::cout << "Mrugaja, choc oczu nie maja. Widac je na niebie, gdy czas "
                "spac na ciebie."
             << std::endl;  //  stars_riddle
        std::cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::toupper);
      } while ((answer != "GWIAZDY") && (answer != "0"));
      if (answer == "GWIAZDY")
        door = 21, stars_riddle = 1, stars_string = "",
        std::cout << "" << std::endl
             << "W kolumnie zaplonol niebieski ogien" << std::endl
             << "" << std::endl;
      if (answer == "0")
        door = 0;
    } else {
      std::cout << "Zagadka juz rozwiazana. W kolumnie plonie niebieski ogien."
           << std::endl
           << "" << std::endl,
          door = 21;}
  } break;
  case 31: {
    std::cout << "Otworzyles ostatnie drzwi. Ukonczyles swoja podroz" << std::endl;
    std::cout << "Gratulacje, udalo Ci sie." << std::endl << "" << std::endl;
    door = 56238;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl
         << "" << std::endl;
  } break;
  }
}

// notatki:
/*


*/

#endif HEADLINES_HPP_INCLUDED
