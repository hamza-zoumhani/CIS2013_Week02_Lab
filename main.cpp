#include <iostream>
using namespace std;

int main(){
   
   char game = 'Y';
   
   cout << "Do you want to play a game?" << endl;
   cout << " (Y/N)" endl;
   cin >> game;
   
   if ('Y' == game) {
	   cout << "How about thermonuclear war??!?" << endl;
   } else {
	   cout << "Goodbye then" << endl;
   }
	
    return 0;
}