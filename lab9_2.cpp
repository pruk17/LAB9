#include <iostream>
using namespace std;

void printO(int N, int M){
    int x, y;
    if(N > 0 && M > 0)
    {
        for( y = 0; y != N; y++)
    {
        for( x = 0; x != M; x++)
        {
        cout << "O";
        }
        x = 0;
        cout << endl;
    }
    }
    else{
        cout << "Invalid input";
    }
    
    
}
int main(){
    printO(5, 3);
}