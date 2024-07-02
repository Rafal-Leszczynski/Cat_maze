// copyright <2024> Rafal Leszczyński
#include <algorithm>
#include <cctype>
#include <conio.h>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>
#include "headlines.hpp"

std::string instructions_before_starting_the_game;
std::string pass;
std::string password;
std::string reset;
int door;
int safeguard;

// block the answers regarding moving between rooms, complete them
// the contents of the rooms, the loop works in stages 1 and 2, stage 3 check,
// check operation of the password game
//  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//  CHECK THE ENTIRE PROGRAM BECAUSE THERE ARE HOLES!!!
//  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
int main() {
  color_settings(7);
  {
    SetConsoleTitle("Cat Maze");  //  console name (ttitle change)
  }
  do {
    door = 80;
    safeguard = door;
    std::cout << "" << std::endl
              << "Copyright: Rafal Leszczynski" << std::endl
              << "" << std::endl;
    std::cout << " Welcome to the game: " << '"' << "Cat Maze" << '"'
              << std::endl
              << "" << std::endl;
    std::cout
        << " (txt is saved in the game file. with links to illustrate things "
           "appearing in the game.)"
        << std::endl;
    // zapis (); tymczasowow, odblokowac na koncu!!!!!!!!!!!!!!
    do {
      std::cout << "" << std::endl
           << "Would you like to read the game's instructions?  Yes/No"
           << std::endl
           << "" << std::endl;
      std::cout << " You can call for instructions at any time during the game."
                << std::endl;
      std::cout << " Serve then " << '"' << "0" << '"' << " (zero)."
                << std::endl
                << "" << std::endl;
      instructions_before_starting_the_game = "no";

      transform(instructions_before_starting_the_game.begin(),
                instructions_before_starting_the_game.end(),
                instructions_before_starting_the_game.begin(), ::toupper);
      if ((instructions_before_starting_the_game != "YES") &&
          (instructions_before_starting_the_game != "NO"))
        bad_command();
    } while ((instructions_before_starting_the_game != "YES") &&
             (instructions_before_starting_the_game != "NO"));
    if (instructions_before_starting_the_game == "YES") {  //  INSTRUKCJA VOID
      {
        //   sndPlaySound( "C:\Users\Vini i Kama\Documents\code blocks
        //   projects\quite large projects\Labyrinth-game\snd.wav", SND_ASYNC );
        //   problem with sound, sort it out !!!!!!!!!!!!!!!!!!!!!!!!
      }
      instruction();
    }
    do {  //  OR PASSWORD
      std::cout << "Do you want to enter a password for later steps? Yes/No"
                << std::endl;
      // cin  >>pass; THEN DELETE !!!
      pass = "yes";
      transform(pass.begin(), pass.end(), pass.begin(), ::toupper);
      if ((pass != "YES") && (pass != "NO"))
        bad_command();
    } while ((pass != "YES") && (pass != "NO"));
    if (pass == "YES") {  //  CONDITION FOR ERROR PASSWORD (MESSAGE)
      door = 90;
      do {  //  PASSWORD CORRECTNESS
        std::cout << "" << std::endl;
        std::cout
            << "Enter your password: (if you want to resign, write ``XXXX``)"
            << std::endl;
        // cin  >>password; THEN DELETE !!!
        password = "CHIMERA";
        transform(password.begin(), password.end(), password.begin(),
                  ::toupper);
        if ((password != "LESZY") && (password != "CHIMERA") &&
            (password != "PERITE") && (password != "XXXX"))
          bad_command();
      } while ((password != "LESZY") && (password != "CHIMERA") &&
               (password != "PERITE") && (password != "XXXX"));
      if (password == "XXXX")
        password = "LESZY";
    } else {
      password = "LESZY";}
    std::cout << "" << std::endl
              << "LET'S START THE GAME?" << std::endl
              << "" << std::endl;
    system("pause>nu1l");

    system("cls");

    //////////////////  THE FIRST STEP
    ///  GAME
    ///  ////////////////////////////////////////////////////////////////////////////////
    if (password == "LESZY") {
      std::cout << "The password for the first level is: LESZY" << std::endl
                << "" << std::endl;
      std::cout << "Your goal in this stage is to find room number 10 "
                   "maze of rooms."
                << std::endl;
      std::cout << "Enter the next room number:" << std::endl
                << "" << std::endl;
      door = 1;
      std::cout << "" << std::endl;
      do {
        if (door == 0) {
          instruction();
        }
        if ((door == 888) || (door == 999))
          item = door, function_inventory();
        safeguard = door;
        gra1();
        std::cout << "" << std::endl;
      } while (door != 12345);
      std::cout << "" << std::endl;
    }
    system("cls");
    ////////////////  THE SECOND STAGE
    ///  GAME  ///////////////////////////////////////////////////////
    ///  MAKE
    if (password == "CHIMERA") {
      door = 12345;
      do {
        if (door == 0) {
          instruction();
        }
        gra2();
        std::cout << "" << std::endl;
      } while (door != 98987);
      std::cout << "" << std::endl;
    }
    system("cls");
    ////////////////////  THE THIRD STAGE
    ///  GAME
    ///  ///////////////////////////////////////////////////////////////////////////////////////////
    if (password == "PERITE") {
      door = 98987;
      do {
        if (door == 0) {
          instruction();
        }
        gra3();
        std::cout << "" << std::endl;
      } while (door != 56238);
      std::cout << "" << std::endl;
    }
    //////////////////////////
    ///  RESTART GAME
    //////////////////////////
    std::cout << "Do you want to restart the game? Yes/No" << std::endl
              << "" << std::endl;
    std::cin >> reset;
    transform(reset.begin(), reset.end(), reset.begin(), ::toupper);
  } while (reset != "NO");
  std::cout << "end of the game" << std::endl;

  ///////////////////  INFORMATION DATA  //////////////////
  std::cout << "" << std::endl << "" << std::endl << "" << std::endl;
  std::cout << "INFORMATION DATA:" << std::endl;
  std::cout << password << " password" << std::endl;
  std::cout << door << " door" << std::endl;
  std::cout << reset << " reset" << std::endl;
  std::cout << pass << " pass" << std::endl;
  std::cout << instruction << " instruction" << std::endl;

  return 0;
}
