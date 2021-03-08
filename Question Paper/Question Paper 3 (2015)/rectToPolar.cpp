#include<iostream>
#include<math.h>
using namespace std;
class polar;
class rect;
class rect{
    public:
    int x;
    int y;
        rect(){
            x=y=0;
        }
        rect(int x, int y){
            this->x=x;
            this->y=y;
        }
        friend polar convertR2P(rect);

};

class polar{
    public:
    int r;
    int theta;
        polar(){
            r=theta=0;
        }
        polar(int r, int theta){
            this->r=r;
            this->theta=theta;
        }
        friend rect convertP2R(polar);
        
};

polar convertR2P(rect obj){
    polar p;
    p.r=sqrt(obj.x*obj.x+obj.y*obj.y);
    p.theta=atan(obj.y/obj.x);
    return p;
}

rect convertP2R(polar obj){
    rect k;
	k.x=obj.r*cos(obj.theta);
	k.y=obj.r*sin(obj.theta);
	return k;

};

int main(){
    rect r(4,3);
    polar p;
    p=convertR2P(r);
    cout<<"("<<p.r<<","<<p.theta<<")";
    return 0;
}