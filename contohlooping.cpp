#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int counter;
    int i;
    int perulangan;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    //Loop with for
    //Loop for asceding
    for(counter = 0; counter < 5; counter++) {
        cout << "Nilai counter = " << counter << "TI UMY" << endl;
    }
    cout << "NIlai counter terakhir = " << counter << endl;
    cout << endl;

    //Loop for descending
    for(counter = 5; counter > 0; counter--) {
        cout << "Nilai counter = " << counter << "TI UMY" << endl;
    }
    cout << "NIlai counter terakhir = " << counter << endl;
    cout << endl;

    //Loop with while
    srand(time(0));
    i = rand() % 100;

    cout << "Nilai awal i = " << i << endl;
    while (i < 7)
    {
        cout << "Nilai i = " << i << "TI UMY" << endl;
        i = rand() % 100;
        perulanganWhile++;
    }
    cout << "Jumalah perulangan = " << perulanganWhile << endl;
    cout << "Nilai akhir i = " << i << endl;

    cout << endl;

    //Loop with do while
    cout << "Perulangan Do While"<< endl;
    do
    {
        cout << "Nilai i = " << i << "TI UMY" << endl;
        i = rand() % 100;
        perulanganDo++;
    } while (i < 7);
    cout << "Jumalah perulangan = " << perulanganDo << endl;
    cout << "Nilai akhir i = " << i << endl;
    
}