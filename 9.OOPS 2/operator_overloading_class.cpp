#include<iostream>
using namespace std;
class Fraction{
    private:
    int numerator;
    int denominator;

    public:

    Fraction(int numerator, int denominator){
        this -> numerator = numerator;
        this -> denominator = denominator;
    }

    void print() {
        cout<<this -> numerator<<" / "<<this->denominator<<endl;
    }
    void simply(){
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 1; i <= j; i++)
        {
            if(this->numerator%i==0 && this->denominator%i==0){
                gcd = i;
            }
        }
        this->numerator = this->numerator/gcd;
        this->denominator = this->denominator/gcd;

       
        
    }
    // void add(Fraction f2)
    Fraction add(Fraction const &f2){  // Third fraction ko create karke return karna hoga

        int lcm = denominator*f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;

        int num = x*numerator + y*f2.numerator;

        // numerator = num;
        // denominator = lcm;

        Fraction fNew(num,lcm);
        fNew.simply();// or also we can written as like this  {this->simply();}
        
        return fNew;
    }  
     Fraction operator+(Fraction const &f2){  // Third fraction ko create karke return karna hoga

        int lcm = denominator*f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;

        int num = x*numerator + y*f2.numerator;

        // numerator = num;
        // denominator = lcm;

        Fraction fNew(num,lcm);
        fNew.simply();// or also we can written as like this  {this->simply();}
        
        return fNew;
    }  

    void multiply(Fraction const &f2){
        int x= numerator*f2.numerator;
        int y= denominator*f2.denominator;

        numerator = x;
        denominator = y;
        this->simply();
    }  

    Fraction operator*(Fraction const &f2){
        int x= numerator*f2.numerator;
        int y= denominator*f2.denominator;

       Fraction fNew(x,y);
       fNew.simply();    
       return fNew;
       } 

    bool operator==(Fraction const &f2){
         return (numerator == f2.numerator && denominator == f2.denominator);
    } 


    
};