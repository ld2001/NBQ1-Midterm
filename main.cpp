#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
   ifstream input_file;
   input_file.open("Gettysburg.txt");

   if(input_file) {
      cout << "File is open" << endl;
   } else {
      cout << "File is not open" << endl;
       }

   
   char * getty_array = new char [5000];
   input_file.getline(getty_array, 5000, ']');
     
   for (char i = 'A'; i < 'A' + 26; i++)
      {
         int num_char = 0;
         int counter = 0;

         while(getty_array[counter] != '\0') {
             
             if(toupper(getty_array[counter]) == i) {
                     num_char++;
                     counter++;
               }
             else { 
               counter++;
             }
                  


            }
         cout << i << "-" << setw(5) << num_char << "-" << " ";
         
         while(num_char > 0) {
            cout << '*';
            num_char -= 10;
         }

         cout << endl;
            
      }


}
