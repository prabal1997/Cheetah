#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdint>
#include<fstream>

using namespace std;
using namespace Cheetah_functions;

//CLASS DEFINITION
        //CONSTRUCTORS
            Bitfield::Bitfield():u1(0),u2(0) { }
            Bitfield::Bitfield(int input_1, int input_2) : u2(give_limited_int(input_1)), u1(give_limited_int(input_2)) { }
            Bitfield::Bitfield(int input) : u1(give_bitfield(input).u1), u2(give_bitfield(input).u2) { }
            Bitfield::Bitfield(const Bitfield& input) : u1(input.u1), u2(input.u2) { }
        //OPERATOR OVERLOADING
            //ASSIGNMENT operator
            Bitfield& Bitfield::operator= (const Bitfield& input) {
                u1=input.u1; u2=input.u2;
                return *this;
            }
            //ARITHMETIC OPERATORS
            int Bitfield::operator+(Bitfield input) {
                return (give_int(*this)+give_int(input));
            }
            int Bitfield::operator+(int input) {
                return (give_int(*this)+input);
            }
            Bitfield Bitfield::operator+=(Bitfield input) {
                (*this)=give_bitfield(give_int(*this)+give_int(input));
                return (*this);
            }
            Bitfield Bitfield::operator++() {
                (*this)=give_bitfield(1+give_int(*this));
                return (*this);
            }
            Bitfield Bitfield::operator++(int) { //think about the edge cases!
                if (give_int(*this)==255) {
                    return (*this);    
                }
                else
                {
                    (*this)=give_bitfield(give_int(*this)+1);
                    return give_bitfield(give_int(*this)-1);
                }
            }
            int Bitfield::operator-(Bitfield input) {
                return (give_int(*this)-give_int(input));
            }
            int Bitfield::operator-(int input) {
                return (give_int(*this)-input);
            }
            Bitfield Bitfield::operator-=(Bitfield input) {
                (*this)=give_bitfield(give_int(*this)-give_int(input));    
                return (*this);
            }
            Bitfield Bitfield::operator--() {
                (*this)=give_bitfield(give_int(*this)-1);
                return (*this);
            }
            Bitfield Bitfield::operator--(int) {
                if (give_int(*this)==0) {
                    return (*this);
                }
                else {
                    (*this)=give_bitfield(give_int(*this)-1);
                    return give_bitfield((give_int(*this)+1));
                }
            }
            int Bitfield::operator*(Bitfield input) {
                return (give_int(input)*give_int(*this));
            }
            int Bitfield::operator*(int input) {
                return (input*give_int(*this));
            }
            Bitfield Bitfield::operator*=(Bitfield input) {
                (*this)=give_bitfield(give_int(*this)*give_int(input));
                return (*this);
            }
            int Bitfield::operator/(Bitfield input) {
                //on DIVISION BY ZERO, the OUTPUT is 0 (EMPTY CELL)
                if (give_int(input)==0) {
                    return (0);
                }
                else {
                    return (give_int(*this)/give_int(input));
                }
            }
            int Bitfield::operator/(int input) {
                return (give_int(*this)/input);
            }
            Bitfield Bitfield::operator/=(Bitfield input) {
                if (give_int(input)==0) {
                    return (Bitfield(0));
                }   
                else
                {
                    return give_bitfield(give_int(*this)/give_int(input));
                }
            }
            //COMPARISON OPERATORS
            bool Bitfield::operator<(Bitfield input) {
                return ( (give_int(*this)<give_int(input)) ? (1):(0));
            }
            bool Bitfield::operator<(int input) {
                return ( (give_int(*this)<input) ? (1):(0));
            }
            bool Bitfield::operator<=(Bitfield input) {
                return ( (give_int(*this)<=give_int(input)) ? (1):(0));
            }
            bool Bitfield::operator<=(int input) {
                return ( (give_int(*this)<=input) ? (1):(0));
            }
            bool Bitfield::operator>(Bitfield input) {
                return ( (give_int(*this)>give_int(input)) ? (1):(0));
            }
            bool Bitfield::operator>(int input) {
                return ( (give_int(*this)>input) ? (1):(0));
            }
            bool Bitfield::operator>=(Bitfield input) {
               return ( (give_int(*this)>=give_int(input)) ? (1):(0));
            }
            bool Bitfield::operator>=(int input) {
                return ( (give_int(*this)>=input) ? (1):(0));
            }
            bool Bitfield::operator==(Bitfield input) {
                return ((((*this).u1==input.u1) && ((*this).u2==input.u2)) ? (1):(0));
            }
            bool Bitfield::operator==(int input) {
                return ((give_int(*this)==input) ? (1):(0));
            }
        //TYPE CASTING
            //BITFIELD to INT, UNSIGNED INT, UINT8_T
            Bitfield::operator int() {
                return give_int(*this);
            }
        
//BITFIELD FUNCTIONS
    //OPERATOR OVERLOADING
        //INPUT/OUTPUT
        std::ostream& operator<< (std::ostream& output, Bitfield input) {
            //PRINT HEX
            output<<give_int(input);
            //PRINT INTEGER
            return output;
        }
    
        std::istream& operator>> (std::istream& input, Bitfield& receiver) {
            //INPUT HEX
        
            //INPUT INTEGER
            unsigned int input1(0),input2(0);
            input>>input2>>input1;
            receiver.u1=input1; receiver.u2=input2;
            return input;
        }
        //COMPARISON OPERATORS
        bool operator<(int input1, Bitfield input2)
        {
            return (input2>input1);
        }
        bool operator<=(int input1, Bitfield input2)
        {
            return (input2>=input1);
        }
        bool operator>(int input1, Bitfield input2)
        {
            return (input2<input1);
        }
        bool operator>=(int input1, Bitfield input2)
        {
            return (input2<=input1);
        }
        bool operator==(int input1, Bitfield input2)
        {
            return (input2==input1);
        }
        //ARITHMETIC OPERATORS
        int operator+(int input1, Bitfield input2)
        {
            return (give_int(input2)+input1);
        }
        int& operator+=(int& input1, Bitfield input2)
        {
            input1+=give_int(input2);
            return input1; 
        }
        int operator-(int input1, Bitfield input2)
        {
           return (input1-give_int(input2));
        }
        int& operator-=(int& input1, Bitfield input2)
        {
            input1-=give_int(input2);
            return input1;
        }
        int operator/(int input1, Bitfield input2)
        {
            return (input1/give_int(input2));
        }
        int& operator/=(int& input1, Bitfield input2)
        {
            input1/=give_int(input2);
            return (input1);
        }
        int operator*(int input1, Bitfield input2)
        {
           return (input1*give_int(input2)); 
        }
        int& operator*=(int& input1, Bitfield input2)
        {
            input1*=give_int(input2);
            return input1;
        }
//BITFIELD_FUNCTIONS
namespace Cheetah_functions {

    Bitfield give_bitfield(int input) {
        Bitfield answer(0,0);
        if (input<=0) {
            answer.u1=0; answer.u2=0;
        }
        else if (input>=0 && input<=255) {
            answer.u1=(unsigned int)(input%16);
            answer.u2=((unsigned int)((input-(int)answer.u1)/16));
        }
        else if (input>255) {
            answer.u1=15; answer.u2=15;
        }
        return answer;
    }

    int give_int(Bitfield input) {
        return (input.u1+input.u2*16);
    }
    
    unsigned int give_limited_int(int input) {
        if (input<=0) {
            return 0;
        }
        else if (input>0 && input<=15) {
            return (unsigned int)input;
        }
        else if (input>15) {
            return 15;
        }
    }
}