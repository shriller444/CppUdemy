#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int numItems {};
    
    cout << "How many items ? ";
    cin >> numItems;
    
    vector <int> data {};
    
    for (int i{1}; i <= numItems; i++){
        int dataItem{};
        cout << "Enter data item " << i << ": ";
        cin >> dataItem;
        data.push_back(dataItem);
    }
    
    cout << "\nDisplay Histogram" << endl;
    for (auto val: data){
        for (int i{1}; i <= val; i++){
            if (i % 5 == 0){
                cout << "*";
            }
            else{
                cout << "-";
            }
        }
        cout << endl;
    }
    
    
    
    cout << endl;
    return 0;
}