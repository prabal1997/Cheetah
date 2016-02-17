#ifndef CHEETAH_H
#define CHEETAH_H

//-----------------------------------------------------------------------------------//
//END-USER ALIAS
//-----------------------------------------------------------------------------------//
//ALIAS FOR END-USER
class _cheetah;
typedef _cheetah lint; //now the user can simply call 'lint' to refer to '_cheetah' class
//-----------------------------------------------------------------------------------//


//-----------------------------------------------------------------------------------//
//INCLUDE FILES
//-----------------------------------------------------------------------------------//	
#include"include_std_cheetah.h"
#include"generic_functions_cheetah.h"
//-----------------------------------------------------------------------------------//


//-----------------------------------------------------------------------------------//
//ALIAS DECLARATION
//-----------------------------------------------------------------------------------//
#include"alias_declaration_cheetah.h"
//-----------------------------------------------------------------------------------//


//-----------------------------------------------------------------------------------//
//CLASS PROTOTYPE
//-----------------------------------------------------------------------------------//
class _cheetah{
	//FIELDS
	private:
		//STATIC
			//PROTOTYPES
			static _std_cheetah::uint64_t call_count;
			//DEFINED
		//CONST
			//PROTOTYPES
			//DEFINED
		//NORMAL
			//PROTOTYPES
			//DEFINED
			_std_cheetah::uint64_t digits_before_decimal; 																		//counts the number of whole-number digits
			_std_cheetah::uint64_t digits_after_decimal; 																		//counts the number of decimal digits
			_std_cheetah::int8_t sign; 																							//'1' depicts positive, '0' means 0, and '-1' means negative

	//FUNCTIONS
	public:
		//CONSTRUCTORS
			//PROTOTYPES
				//_CHEETAH DATA-TYPE
					_cheetah(const _cheetah &input):digits_before_decimal(input.digits_before_decimal), digits_after_decimal(input.digits_after_decimal),sign(input.sign)
					{
						call_count+=1;					
					}
					_cheetah():digits_before_decimal(0), digits_after_decimal(0), sign(0)
					{
						call_count+=1;
					}
				//FIXED-LENGTH DATA-TYPES
					//_cheetah(_std_cheetah::int8_t input); 																		//equivalent to 'signed char'
					//_cheetah(_std_cheetah::int16_t input); 																		//equivalent to 'signed short'
					//_cheetah(_std_cheetah::int32_t input); 																		//equivalent to 'signed int'
					//_cheetah(_std_cheetah::int64_t input); 																		//equivalent to 'long int'
					//_cheetah(_std_cheetah::int_fast8_t input); 																	//equivalent to 'signed char'
					//_cheetah(_std_cheetah::int_fast16_t input); 																	//equivalent to 'long int'
					//_cheetah(_std_cheetah::int_fast32_t input); 																	//equivalent to 'singed long int'
					//_cheetah(_std_cheetah::int_fast64_t input); 																	//equivalent to 'signed long int'
					//_cheetah(_std_cheetah::int_least8_t input); 																	//equivalent to 'signed char'
					//_cheetah(_std_cheetah::int_least16_t input); 																	//equivalent to 'signed short'
					//_cheetah(_std_cheetah::int_least32_t input); 																	//equivalent to 'signed int'
					//_cheetah(_std_cheetah::int_least64_t input); 																	//equivalent to 'signed long int'
					//_cheetah(_std_cheetah::intmax_t input);																		//equivalent to 'signed long int'
					//_cheetah(_std_cheetah::intptr_t input);  																		//equivalent to 'signed long int'
					//_cheetah(_std_cheetah::uint8_t input);  																		//equivalent to 'unsigned char'
					//_cheetah(_std_cheetah::uint16_t input);  																		//equivalent to 'unsigned short'
					//_cheetah(_std_cheetah::uint32_t input);  																		//equivalent to 'unsinged int'
					//_cheetah(_std_cheetah::uint64_t input);  																		//equivalent to 'unsigned long int'
					//_cheetah(_std_cheetah::uint_fast8_t input);  																	//equivalent to 'unsigned char'
					//_cheetah(_std_cheetah::uint_fast16_t input);  																//equivalent to 'unsigned long int'
					//_cheetah(_std_cheetah::uint_fast32_t input);  																//equivalent to 'unsigned long int'
					//_cheetah(_std_cheetah::uint_fast64_t input);  																//equivalent to 'unsigned long int'
					//_cheetah(_std_cheetah::uint_least8_t input);  																//equivalent to 'unsigned char'
					//_cheetah(_std_cheetah::uint_least16_t input);  																//equivalent to 'unsigned short'
					//_cheetah(_std_cheetah::uint_least32_t input);  																//equivalent to 'unsigned long int'
					//_cheetah(_std_cheetah::uint_least64_t input);  																//equivalent to 'unsigned long int'
					//_cheetah(_std_cheetah::uintmax_t input);  																	//equivalent to 'unsigned long int'
					//_cheetah(_std_cheetah::uintptr_t input);  																	//equivalent to 'unsigned long int'
					
				//PRIMITIVE DATA-TYPES
					_cheetah(signed char input):sign(_std_cheetah::get_sign(input)), digits_before_decimal(_std_cheetah::get_digits_before_decimal(input)), digits_after_decimal(0)
					{
						call_count+=1;
					}
					_cheetah(unsigned char input);
					_cheetah(signed short input):sign(_std_cheetah::get_sign(input)), digits_before_decimal(_std_cheetah::get_digits_before_decimal(input)), digits_after_decimal(0)
					{
						call_count+=1;
					}
					_cheetah(unsigned short input);
					_cheetah(signed int input):sign(_std_cheetah::get_sign(input)), digits_before_decimal(_std_cheetah::get_digits_before_decimal(input)), digits_after_decimal(0)
					{
						call_count+=1;
					}
					_cheetah(signed long int input):sign(_std_cheetah::get_sign(input)), digits_before_decimal(_std_cheetah::get_digits_before_decimal(input)), digits_after_decimal(0)
					{
						call_count+=1;
					}
					_cheetah(signed long long int input):sign(_std_cheetah::get_sign(input)), digits_before_decimal(_std_cheetah::get_digits_before_decimal(input)), digits_after_decimal(0)
					{
						call_count+=1;
					}
					_cheetah(unsigned int input);
					_cheetah(unsigned long int input);
					_cheetah(unsigned long long int input);
					_cheetah(float input);
					_cheetah(double input);
					_cheetah(long double input);

		//STATIC INITIALIZERS
			//INITIALIZER CLASS
			//INITIALIZER CONSTRUCTOR CALL
		//DESTRUCTOR
			//PROTOTYPES
			//DEFINED
		//ACCESSORS
			//PROTOTYPES
			//DEFINED
		//MUTATORS
			//PROTOTYPES
			//DEFINED
		//OVERLOADING
			//PROTOTYPES
			//DEFINED
};
//-----------------------------------------------------------------------------------//


//-----------------------------------------------------------------------------------//
//STATIC DEFINITIONS
//-----------------------------------------------------------------------------------//
#include"static_definitions_cheetah.h"
//-----------------------------------------------------------------------------------//


//-----------------------------------------------------------------------------------//
//OVERLOADING
//-----------------------------------------------------------------------------------//
#include"overloading_cheetah.h"
//-----------------------------------------------------------------------------------//


#endif