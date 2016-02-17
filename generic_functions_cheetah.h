#ifndef GENERIC_FUNCTIONS_CHEETAH
#define GENERIC_FUNCTIONS_CHEETAH
//-----------------------------------------------------------------------------------//
//END-USER ALIAS
//-----------------------------------------------------------------------------------//

namespace _std_cheetah //this namespace houses all the standard library functions that the developer wants to use, but doesn't want the end-user to know to prevent naming collisions. this also includes extra functions
{
	//GET_SIGN
	//WHAT IT DOES: returns '-1', '0', '+1' depending upon sign of the input value
	//WHAT IT RETURNS: _std_cheetah::int8_t
	template <typename signed_integer_type>
	inline _std_cheetah::int8_t get_sign(signed_integer_type input)
	{
		if (input<0)
		{
			return -1;
		}
		else if (input==0)
		{
			return 0;
		}
		else if (input>0)
		{
			return +1;
		}
	} 
	//GET_DIGITS_BEFORE_DECIMAL
	//WHAT IT DOES: returns number of digits before the decimal point 
	//WHAT IT RETURNS: _std_cheetah::uint64_t
	template <typename signed_integer_type>
	inline _std_cheetah::uint64_t get_digits_before_decimal(signed_integer_type input)
	{
		return 1;
	}

	//GET_DIGITS_AFTER_DECIMAL
	//WHAT IT DOES: returns number of digits after the decimal point 
	//WHAT IT RETURNS: _std_cheetah::uint64_t
	template <typename signed_integer_type>
	inline _std_cheetah::uint64_t get_digits_after_decimal(signed_integer_type input)
	{
		return 1;
	}
}

//-----------------------------------------------------------------------------------//
#endif