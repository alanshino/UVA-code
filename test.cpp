#include <iostream>
#include <cstdlib>
using namespace std;

class Cwin{
	private:
		char id;
		int width;
		int height;
	public:
		Cwin();
		Cwin(char id,int width,int height);
		int area();
		bool operator>(Cwin &win){
			return this->area()>win.area();
		}
		int operator>(const int &num){
			return this->area()>num;
		}
		Cwin operator+(const Cwin &win1){
			int w,h;
			w=this->width>win1.width?this->width:win1.width;
			h=this->height>win1.height?this->width:win1.height;
			return Cwin('D',w,h);		
		}
		int radius(){
			return width+height;
		}
		int value(Cwin &win){
			return win.radius();
		}
};

int operator>(const int &num,Cwin &win){
	return num>win.area();
}

int Cwin::area(){
	return width*height;
}

Cwin::Cwin(){
	cout<<"build one input object"<<endl;
}

Cwin::Cwin(char id,int width,int height):id(id),width(width),height(height){
	cout<<"build three input object"<<endl;
}

int main(int argc,char **argv){
	Cwin win('A',10,20);
	cout<<win.value(win)<<endl;
	Cwin win1;
	return 0;
}
