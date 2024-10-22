#include <iostream>
#include <cstdlib>

using namespace std;

int RandonNumber(int From, int To)
{

    int RandomNum = rand() % (To - From + 1) + From;
    
    return RandomNum;
}

int main()
{
   
    srand((unsigned)time(NULL));

    cout << RandonNumber(1,10) << endl; 
    cout << RandonNumber(1, 10) << endl;
    cout << RandonNumber(1, 10) << endl;

    return 0;
}
