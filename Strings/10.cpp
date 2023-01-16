#include <iostream>

using namespace std;
int main(int argc,          // Number of strings in array argv
          char *argv[])     // Array of environment variable strings
{

    cout << "\nCommand-line arguments:\n";
    cout<<argv[0]<<" "<<argv[1]<<" "<<argv[2]<<endl;
}