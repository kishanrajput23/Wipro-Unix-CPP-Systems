#include <iostream>
using namespace std;

class Rect {
    public: 
        float w, h;
    
        float GetWidth() {
            return w;
        }

        float GetHeight() {
            return h;
        }

        void SetWidth(float width) {
            w = width;
        }

        void SetHeight(float height) {
            h = height;
        }
};

int main()
{
    float tx, ty;
    float bx, by;
    
    Rect x;
    
    cout<<"Enter the top left corner coordinates : ";
    cin>>tx>>ty;
    
    cout<<"Enter the bottom righr corner coordinates : ";
    cin>>bx>>by;
    
    x.SetWidth(bx+by);
    x.SetHeight(tx+ty);
    
    float wide = x.GetWidth();
    float high = x.GetHeight();
    
    cout<<"The width of the rectangle is : "<<wide<<endl;
    cout<<"The height of the rectangle is : "<<high<<endl;
    
    return 0;
}
