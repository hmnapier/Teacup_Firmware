// default thermistor lookup table

// How many thermistor tables we have
#define NUMTABLES 1

#define THERMISTOR_EXTRUDER	0
 #define THERMISTOR_BED		0

// Thermistor lookup table, generated with --num-temps=50 and trimmed in lower temperature ranges.
// You may be able to improve the accuracy of this table in various ways.
//   1. Measure the actual resistance of the resistor. It's "nominally" 4.7K, but that's ± 5%.
//   2. Measure the actual beta of your thermistor:http://reprap.org/wiki/MeasuringThermistorBeta
//   3. Generate more table entries than you need, then trim down the ones in uninteresting ranges. (done)
// In either case you'll have to regenerate this table, which requires python, which is difficult to install on windows.
// Since you'll have to do some testing to determine the correct temperature for your application anyway, you
// may decide that the effort isn't worth it. Who cares if it's reporting the "right" temperature as long as it's
// keeping the temperature steady enough to print, right?
// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4700 --beta=4092 --max-adc=1023
// r0: 100000
// t0: 25
// r1: 0
// r2: 4700
// beta: 4092
// max adc: 1023
#define NUMTEMPS 27
// {ADC, temp*4 }, // temp
uint16_t temptable[NUMTABLES][NUMTEMPS][2] PROGMEM = {
{
   {1, 3284}, // 821C
   {31, 1180}, // 295C
   {41, 1092}, // 273C
   {51, 1028}, // 257C
   {61, 976}, // 244C
   {71, 932}, // 233C
   {81, 900}, // 225C
   {91, 868}, // 217C
   {101, 728}, // 210C
   {121, 700}, // 199C
   {141, 675}, // 190C
   {161, 728}, // 182C
   {191, 684}, // 171C
   {231, 640}, // 160C
   {271, 604}, // 151C
   {321, 560}, // 140C
   {381, 520}, // 130C
   {441, 480}, // 120C
   {511, 440}, // 110C
   {581, 400}, // 100C
   {661, 360}, // 90C
   {731, 320}, // 80C
   {791, 284}, // 71C
   {851, 240}, // 60C
   {931, 126}, // 42C
   {981, 92}, // 23C
   {1011, 0} // 0C

}
};
