#ifndef BITFIELD_H
#define BITFIELD_H

//FORWARD Declarations
    class Bitfield;
    
    namespace Cheetah_functions {
        Bitfield give_bitfield(int);
        int give_int(Bitfield);
        unsigned int give_limited_int(int);
    }
    
    //BITFIELD FUNCTIONS
        //OPERATOR OVERLOADING
            //INPUT/OUTPUT
            std::ostream& operator<< (std::ostream& output, Bitfield input);
            std::istream& operator>> (std::istream& input, Bitfield& receiver);
            //COMPARISON OPERATORS
            bool operator<(int input1, Bitfield input2);
            bool operator<=(int input1, Bitfield input2);
            bool operator>(int input1, Bitfield input2);
            bool operator>=(int input1, Bitfield input2);
            bool operator==(int input1, Bitfield input2);
            //ARITHMETIC OPERATORS
            int operator+(int input1, Bitfield input2);
            int& operator+=(int& input1, Bitfield input2);
            int operator-(int input1, Bitfield input2);
            int& operator-=(int& input1, Bitfield input2);
            int operator/(int input1, Bitfield input2);
            int& operator/=(int& input1, Bitfield input2);
            int operator*(int input1, Bitfield input2);
            int& operator*=(int& input1, Bitfield input2);

//ENUMS Definitions
    enum HX { A=10, B=11, C=12, D=13, E=14, F=15 };
    enum class MODE {HEX=0,INT=1};

//CLASS SKELETON
class Bitfield {
            
private:
    //FIELDS
        //DATA
        uint16_t u1:4; //UNIT's Position
        uint16_t u2:4; //TEN's Position
    //PROPERTIES
        //FIELDS
        static int mode; //'0' means HEX, while '1' means INT

protected:
       
public:
    //CONSTRUCTORS
        Bitfield();
        Bitfield(int input_1, int input_2);
        Bitfield(int input);
        Bitfield(const Bitfield& input);
    //OPERATOR OVERLOADING
        //ASSIGNMENT operator
        Bitfield& operator= (const Bitfield& input);
        //INPUT/OUTPUT OVERLOADING
        friend std::ostream& operator<< (std::ostream&, Bitfield);
        friend std::istream& operator>> (std::istream&, Bitfield&);
        //ARITHMETIC OPERATORS
        int operator+(Bitfield input);
        int operator+(int input);
        friend int operator+(int input1, Bitfield input2);
        friend int& operator+=(int& input1, Bitfield input2);
        Bitfield operator+=(Bitfield input);
        Bitfield operator++();
        Bitfield operator++(int);
        int operator-(Bitfield input);
        int operator-(int input);
        friend int operator-(int input1, Bitfield input2);
        friend int& operator-=(int& input1, Bitfield input2);
        Bitfield operator-=(Bitfield input);
        Bitfield operator--();
        Bitfield operator--(int);  
        int operator*(Bitfield input);
        int operator*(int input);
        friend int operator*(int input1, Bitfield input2);
        friend int& operator*=(int& input1, Bitfield input2);
        Bitfield operator*=(Bitfield input);
        int operator/(Bitfield input);
        int operator/(int input);
        friend int operator/(int input1, Bitfield input2);
        friend int& operator/=(int& input1, Bitfield input2);
        Bitfield operator/=(Bitfield input);
        
        //COMPARISON OPERATORS
        bool operator<(Bitfield input);
        bool operator<(int input);
        friend bool operator<(int input1, Bitfield input2);
                            
        bool operator<=(Bitfield input);
        friend bool operator<=(int input1, Bitfield input2);
        bool operator<=(int input);
        bool operator>(Bitfield input);
        bool operator>(int input);
        friend bool operator>(int input1, Bitfield input2);
        friend bool operator>=(int input1, Bitfield input2);
        bool operator>=(Bitfield input);
        bool operator>=(int input);
        friend bool operator==(int input1, Bitfield input2);
        bool operator==(Bitfield input);
        bool operator==(int input);
        
    //TYPE CASTING
        //BITFIELD to INT, UNSIGNED INT, UINT8_T
        operator int();
        
    //DESTRUCTOR
        //Since all the memory is automatic, there's no need to make a destructor
    
    //PERMISSION
        //CHEETAH_FUNCTIONS
        friend Bitfield Cheetah_functions::give_bitfield(int);
        friend int Cheetah_functions::give_int(Bitfield);
        friend unsigned int give_limited_int(int);
};
//CLASS DEFINITION
#include"bitfield.cpp"

#endif