/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size; 
    cout << "how many item did you buy: ";
    cin >> size;
    vector <int> numItemBougth(size);
    vector <string> itemName(size);
    vector <int> qtyBougth(size);
    vector <double> priceItemBougth(size);
    
    
    
    string name;
    int qty;
    double price;

    
    for (int i = 0; i < size; i++ ){
        
        
        cout <<"Enter Item Name Qty Price for the item #: " << endl;
        cin >> name >> qty >> price;
        cin >> itemName.push_back(i);
        
    }
    
   /* for (int i = 0; i < size; i++ ){
        
        cout << "Enter Item Name Qty and Price for the item #: " << endl;
        cin >> qtyBougth.push_back(i);
        
    }
    for (int i = 0; i < size; i++ ){
        
        cout << "Enter Item Name Qty and Price for the item #: " << endl;
        cin >> priceItemBougth.push_back(i);
        
    }
    
    */
    
    

    return 0;
}

