#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

   Controller controller;
   Fan fan;
   controller.SetCommand(new TurnOnFanCommand(&fan));
   controller.ButtonClicked();
   controller.SetCommand(new TurnOffFanCommand(&fan));
   controller.ButtonClicked();
    return 0;
}
