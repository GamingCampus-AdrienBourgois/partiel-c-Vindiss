#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	float result = 0.f;
	if (_from == TemperatureUnits::CELSIUS && _to == TemperatureUnits::FAHRENHEIT)
	{
		result = ((9.0 / 5.0) * _value) + 32;
		return result;
	}
	else if (_from == TemperatureUnits::CELSIUS && _to == TemperatureUnits::KELVIN)
	{
		result = _value + 273.15;
		return result;
	}
	else if (_from == TemperatureUnits::FAHRENHEIT && _to == TemperatureUnits::KELVIN)
	{
		result = ((5.0 / 9.0) * (_value - 32)) + 273.15;
		return result;
	}
	else if (_from == TemperatureUnits::FAHRENHEIT && _to == TemperatureUnits::CELSIUS)
	{
		result = (5.0 / 9.0) * (_value - 32);
		return result;
	}
	else if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::CELSIUS)
	{
		result = _value - 273.15;
		return result;
	}
	else if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::FAHRENHEIT)
	{
		result = ((9.0 / 5.0) * (_value - 273.15)) + 32;
		return result;
	}
	return result;
}

#endif
