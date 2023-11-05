#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("red.txt");  // вывод данных из файл
    ofstream fout("red.txt"); // ввод данных в файла
    string a;
    string b;
    float x, y;
     int r = 2;
    int kvadrat = 2;
    
    for (int x = -4; x < 10; x++)
    {

        if (-4 <= x && x <= -2)
    { 
        y = x + 3;
    }
    else if (-2 <= x && x <= 4)
    { 
        y = -0.5 * x;
    }
    else if (4 <= x && x <= 6)
    {
        y = -2;
    }
    else if (6 <= x && x <= 10)
    { 
        y = sqrt(pow(2, kvadrat) - pow((x - 8), kvadrat)) - 2;
    }
        fout << y << endl;
        // cout << y << endl;
    }

    fout.close();

    // getline(fin, b);
    // if (true){
    // cout << b << endl;
    // }


cout << "sled"<< endl;


    while (getline(fin, b))
    {
       
        float c = stof(b);
        for (int i=0; i<4; i++){
            
            c = c+0.01;
        }
        
        cout << c << endl;
    }

    fin.close(); // закрываем файл
}