#include <iostream>
#include <string>
#include "ConsoleGfx.h"
using namespace std;

string loadedFile = " ";


int main() {
  ConsoleGfx* console = ConsoleGfx::getInstance();
  
  // Displays welcome message
  cout << "Welcome to the Image Scaler!\n" << endl;
  cout << "Displaying Spectrum Image:";
  console->displayImage(console->testRainbow);
  
  

  while(true) {
    // Prints out menu
    cout << "\nScaler Menu\n-----------\n0. Exit\n1. Load File\n2. Load Test Image\n3. Display Image\n4. Enlarge Image\n5. Shrink Image\n6. Show Image Properties\n" << endl;

    int userInput;
    cout << "Select a Menu Option: ";
    cin >> userInput;
    cout << endl;

    switch(userInput) {
      // Loads file
      case 1:
        unsigned char *ConsoleGfx::loadFile(string file);
        break;

      // Loads test image
      case 2:
        
        break;

      // Displays image
      case 3:
        
        break;

      // Enlarges image
      case 4:
        
        break;

      // Shrinks image
      case 5:
        
        break;

      // Shows image properties
      case 6:
        
        break;

      // Exits user from program
      case 0:
        return 0;
        break;
      
      default:
        
    }
    
    
  }
  
  
  return 0;
}



