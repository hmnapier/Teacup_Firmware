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
// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4700 --beta=4092 --max-adc=1023 --num-temps=50
// r0: 100000
// t0: 25
// r1: 0
// r2: 4700
// beta: 4092
// max adc: 1023
#define NUMTEMPS 52
// {ADC, temp*4 }, // temp
uint16_t temptable[NUMTABLES][NUMTEMPS][2] PROGMEM = {
{
   {1, 3287}, // 821.982897481 C
   {21, 1314}, // 328.543987089 C
   {41, 1092}, // 273.179129399 C
   {61, 977}, // 244.310627296 C
   {81, 900}, // 225.120273651 C
   {101, 843}, // 210.851522713 C
   {121, 798}, // 199.525849421 C
   {141, 760}, // 190.140968934 C
   {161, 728}, // 182.122824628 C
   {181, 700}, // 175.113587564 C
   {201, 675}, // 168.875891124 C
   {221, 652}, // 163.244556924 C
   {241, 632}, // 158.10017458 C
   {261, 613}, // 153.353683081 C
   {281, 595}, // 148.936895481 C
   {301, 579}, // 144.796422629 C
   {321, 563}, // 140.889634564 C
   {341, 548}, // 137.181892682 C
   {361, 534}, // 133.64460149 C
   {381, 521}, // 130.253804408 C
   {401, 507}, // 126.989149779 C
   {421, 495}, // 123.833114196 C
   {441, 483}, // 120.770407916 C
   {461, 471}, // 117.787511006 C
   {481, 459}, // 114.872304345 C
   {501, 448}, // 112.013769806 C
   {521, 436}, // 109.2017408 C
   {541, 425}, // 106.426688926 C
   {561, 414}, // 103.679535544 C
   {581, 403}, // 100.951479 C
   {601, 392}, // 98.2338293596 C
   {621, 382}, // 95.5178428441 C
   {641, 371}, // 92.7945478582 C
   {661, 360}, // 90.0545533795 C
   {681, 349}, // 87.2878284041 C
   {701, 337}, // 84.483437688 C
   {721, 326}, // 81.6292135474 C
   {741, 314}, // 78.71133482 C
   {761, 302}, // 75.7137702498 C
   {781, 290}, // 72.6175209546 C
   {801, 277}, // 69.3995586379 C
   {821, 264}, // 66.0312900284 C
   {841, 249}, // 62.4762577646 C
   {861, 234}, // 58.6865580728 C
   {881, 218}, // 54.5969887222 C
   {901, 200}, // 50.1149194216 C
   {921, 180}, // 45.101424721 C
   {941, 157}, // 39.3325768906 C
   {961, 129}, // 32.4085843088 C
   {981, 93}, // 23.4921174193 C
   {1001, 40}, // 10.2238469224 C
   {1010, 2} // 0.641566207274 C
}
};
