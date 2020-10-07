#include <iostream>

using namespace std;

int main(){
    int rowCnt = 10;
    int colCnt = 10;
    double** array = new double*[rowCnt];
    
    for (int row = 0; row < rowCnt; ++row){
        
        array[row] = new double[colCnt];
        
    }
    for (int row = 0; row < rowCnt; ++row){
        
        for (int col = 0; col < colCnt; ++col){
             array[row][col] = 0;
             
        }
    }
    
        
    int i {0};
     for (int row = 0; row < rowCnt; ++row){
        
        for (int col = 0; col < colCnt; ++col){
             cout << array[row] << endl;
             i++;
             
        }
    }
    
    cout << "i" << i << endl;
}
     