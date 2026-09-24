#include<iostream>
using namespace std;
class rectangle{
    private:
        int length, width;
    public:
        void setLenght(int len){
            length=len;
        }
        void setWidth(int wid){
            width=wid;
        }
        int getLength(){
            return length;
        }
        int getWidth(){
            return width;
        }
        int area(int len, int b){
            int a;
            a=length*width;
            cout<< "Area of the rectangle: "<< a <<endl;
            return length*width;
        }
};
int main(){
    int a, b;
    cout<< "Enter Length: ";
    cin>> a;
    cout<< "Enter Width: ";
    cin>> b;

    rectangle r1;
    r1.area(a,b);
}