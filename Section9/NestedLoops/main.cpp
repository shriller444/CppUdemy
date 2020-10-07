#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    // multiplication  table 
    
   /* for (int num1 {1}; num1 <= 10 ; ++num1){
        for (int num2 {1}; num2 <=10; ++num2){
            cout << num1 << "*" << num2 << " = " << num1 * num2 << endl;
            
        }
        cout << "----------" << endl;
    }
    cout << endl;
    return 0;*/
    
    // nested loop challenge
    
    vector <int> vec {1,2,3};
    
    int results {};
    
    //cout << vec.size() << endl;
    
    
    if (vec.size() == 0 || vec.size() ==  1 ){
        cout << results << endl;
    }
    else{
        for (int i{};i < vec.size(); i++){
            for (int j{i+1}; j < vec.size() ; j++){
                     results += (vec[i]*vec[j]);
            }
        }
    }
    
    cout << results << endl; 

}