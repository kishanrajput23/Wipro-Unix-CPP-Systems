#include<iostream>
using namespace std;

class book
{
    private:
    int book_no;
    char book_title[20];
    float price;
    
    float total_cost(int n) {
        float total_price = price * n;
        return total_price;
    }
    
    public:
    void input() {
        cout<<"Enter the book number : ";
        cin>>book_no;
            
        cout<<"Enter the book title : ";
        cin>>book_title;
            
        cout<<"Enter the price of the book : ";
        cin>>price;
    }
        
    void purchase() {
        int num;
        cout<<"Enter the number of copies you want : ";
        cin>>num;
        cout<<"The total cost is : "<<total_cost(num)<<endl;
    }
};

int main() {
    book b;
    b.input();
    b.purchase();
    return 0;
   }
