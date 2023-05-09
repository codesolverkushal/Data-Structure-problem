#include<bits/stdc++.h>
using namespace std;
template <typename T,typename V>

class Pair{
  T x;  // T is temperory data type..
  V y; // also we can use other temperory data type..

  public:
  void setX(T x)
  {
     this->x = x;
  }

  T getX(){
    return x;
  }

  void setY(V y)
  {
    this->y = y;
  }

  V getY()
  {
    return y;
  }
};