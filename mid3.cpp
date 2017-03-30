//3350 midterm exam 3 framework
//Write a unit test to check the validity of the getPonderal function. 
//Program equations derived from the following source:
//  https://en.wikipedia.org/wiki/Corpulence_index
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#ifdef UTEST
double unit_test();
#endif

using namespace std;
double getPonderal(double mass, double height);

int main(int argc, char *argv[])
{
#ifdef UTEST
    unit_test();
	return 0;
#endif

    //Set default values
	double mass   = 1.0;
	double height = 1.0;
	//Get command-line arguments
	if (argc < 3) {
		cout << "No input was detected.                  \n";
		cout << "                                        \n";
		cout << "Program usage: ./program <mass> <height>\n";
		cout << "(default values will be displayed)      \n";
	}
	if (argc > 1)
		mass = atof(argv[1]);
	if (argc > 2)
		height = atof(argv[2]);
	cout << "Ponderal value is: ";
	//This formatting will help for your unit test output
	cout << setw(10) << left << fixed << setprecision(6);
	cout << getPonderal(mass, height) << endl;
	cout << endl;
	return 0;
}

double getPonderal(double mass, double height)
{
	double oneThird = 1.0 / 3.0;
	double cuberoot = pow(height, oneThird);
	double ponderal = height / cuberoot;
	return ponderal;
}

#ifdef UTEST

double unit_test () {
    double arr[] = {   
        135.000000, 50.000000,  13.572088,
        135.000000, 51.591574,  13.858594,
        135.000000, 53.789234,  14.259411,
        135.000000, 55.085561,  14.487443,
        135.000000, 57.237906,  14.862144,
        135.000000, 59.068861,  15.167211,
        135.000000, 61.012167,  15.498071,
        135.000000, 62.782269,  15.806396,
        135.000000, 65.156561,  16.192184,
        135.000000, 67.232507,  16.534315,
        135.000000, 69.142960,  16.846072,
        135.000000, 70.507290,  17.066954,
        135.000000, 72.713555,  17.421154,
        135.000000, 74.314972,  17.676009,
        135.000000, 75.478185,  17.869980,
        135.000000, 76.805570,  18.068765,
        136.918960, 50.000000,  13.572088,
        136.918960, 51.956328,  13.923838,
        136.918960, 53.696703,  14.243064,
        136.918960, 55.135478,  14.486187,
        136.918960, 56.925596,  14.798069,
        136.918960, 58.525938,  15.074130,
        136.918960, 59.950911,  15.317828,
        136.918960, 62.162497,  15.702265,
        136.918960, 63.267130,  15.887621,
        136.918960, 65.056123,  16.175540,
        136.918960, 66.344444,  16.388393,
        136.918960, 68.679793,  16.770756,
        136.918960, 69.776050,  16.948747,
        136.918960, 71.462603,  17.220769,
        136.918960, 72.820022,  17.448155,
        136.918960, 75.173335,  17.811857,
        138.728600, 50.000000,  13.572088,
        138.728600, 52.140373,  13.956700,
        138.728600, 54.141959,  14.311637,
        138.728600, 55.200879,  14.497641,
        138.728600, 57.598632,  14.924480,
        138.728600, 59.680060,  15.271657,
        138.728600, 61.787862,  15.629153,
        138.728600, 63.318935,  15.886287,
        138.728600, 64.567896,  16.094510,
        138.728600, 66.888009,  16.477786,
        138.728600, 68.383515,  16.722490,
        138.728600, 70.723573,  17.101838,
        138.728600, 72.753578,  17.437546,
        138.728600, 74.636538,  17.726962,
        138.728600, 76.924553,  18.087421,
        138.728600, 79.310508,  18.459523,
        140.754928, 50.000000,  13.582088,
        140.754928, 51.723736,  13.882252,
        140.754928, 54.149115,  14.322898,
        140.754928, 55.370605,  14.527343,
        140.754928, 57.332225,  14.868456,
        140.754928, 59.261620,  15.200190,
        140.754928, 61.440623,  15.570542,
        140.754928, 63.111174,  15.851517,
        140.754928, 64.392473,  16.065346,
        140.754928, 66.227139,  16.369070,
        140.754928, 67.481550,  16.585121,
        140.754928, 68.636306,  16.763676,
        140.754928, 70.379473,  17.046321,
        140.754928, 72.856600,  17.453994,
        140.754928, 74.883268,  17.766008,
        140.754928, 77.007924,  18.100488,
        142.103320, 50.000000,  13.572088,
        142.103320, 51.366619,  13.818280,
        142.103320, 53.464842,  14.192063,
        142.103320, 55.655047,  14.577052,
        142.103320, 57.772655,  14.944505,
        142.103320, 60.197811,  15.359856,
        142.103320, 61.980156,  15.661563,
        142.103320, 63.340249,  15.889852,
        142.103320, 65.439231,  16.238982,
        142.103320, 67.890339,  16.641992,
        142.103320, 70.029941,  16.989835,
        142.103320, 71.232294,  17.183750,
        142.103320, 72.349643,  17.362980,
        142.103320, 73.656625,  17.571461,
        142.103320, 75.886141,  17.924277,
        142.103320, 78.019512,  18.258657,
        144.603311, 50.000000,  13.572088,
        144.603311, 52.334933,  13.991398,
        144.603311, 54.831632,  14.432917,
        144.603311, 57.137442,  14.834760,
        144.603311, 58.143684,  15.018422,
        144.603311, 60.034522,  15.332067,
        144.603311, 61.279220,  15.543261,
        144.603311, 63.648760,  15.941406,
        144.603311, 65.187403,  16.197294,
        144.603311, 67.056548,  16.505453,
        144.603311, 69.087629,  16.837083,
        144.603311, 70.883841,  17.127665,
        144.603311, 72.340284,  17.371482,
        144.603311, 74.205740,  17.658684,
        144.603311, 76.327454,  17.993702,
        144.603311, 77.380586,  18.158836,
        146.991376, 50.000000,  13.572088,
        146.991376, 52.246556,  13.985642,
        146.991376, 54.362273,  14.360435,
        146.991376, 56.837667,  14.782827,
        146.991376, 58.583555,  15.084022,
        146.991376, 60.828572,  15.466964,
        146.991376, 61.944064,  15.655483,
        146.991376, 63.316130,  15.885818,
        146.991376, 64.659836,  16.109785,
        146.991376, 66.135137,  16.353906,
        146.991376, 67.482279,  16.575240,
        146.991376, 69.431887,  16.892969,
        146.991376, 71.408585,  17.212090,
        146.991376, 73.865784,  17.604710,
        146.991376, 75.684944,  17.892581,
        146.991376, 76.854865,  18.076496,
        149.407853, 50.000000,  13.572088,
        149.407853, 51.504527,  13.843002,
        149.407853, 53.156297,  14.137409,
        149.407853, 54.673711,  14.405191,
        149.407853, 56.923576,  14.797719,
        149.407853, 58.936790,  15.144595,
        149.407853, 60.659694,  15.438324,
        149.407853, 62.727825,  15.787262,
        149.407853, 64.660559,  16.109905,
        149.407853, 66.281534,  16.378032,
        149.407853, 68.292439,  16.707639,
        149.407853, 69.813113,  16.954748,
        149.407853, 71.726772,  17.263182,
        149.407853, 73.822866,  17.597890,
        149.407853, 75.933523,  17.931737,
        149.407853, 78.314895,  18.304713,
        150.793751, 50.000000,  13.572088,
        150.793751, 51.131465,  13.776075,
        150.793751, 53.447541,  14.189001,
        150.793751, 54.588152,  14.390159,
        150.793751, 56.130553,  14.659963,
        150.793751, 58.020370,  14.987194,
        150.793751, 59.453537,  15.232989,
        150.793751, 60.886106,  15.476716,
        150.793751, 62.170732,  15.703651,
        150.793751, 63.176100,  15.862387,
        150.793751, 64.673319,  16.112024,
        150.793751, 66.328064,  16.395696,
        150.793751, 68.706460,  16.775097,
        150.793751, 70.755073,  17.106916,
        150.793751, 72.783752,  17.432364,
        150.793751, 74.945162,  17.785796,
        153.086627, 50.000000,  13.572088,
        153.086627, 52.190485,  13.965642,
        153.086627, 53.636418,  14.232409,
        153.086627, 56.000882,  14.637377,
        153.086627, 57.748098,  14.940270,
        153.086627, 58.992233,  15.154091,
        153.086627, 61.289102,  15.544932,
        153.086627, 62.984595,  15.830315,
        153.086627, 64.728561,  16.121198,
        153.086627, 65.999193,  16.331488,
        153.086627, 68.090518,  16.674690,
        153.086627, 69.995182,  16.984213,
        153.086627, 72.252382,  17.347415,
        153.086627, 73.519693,  17.549677,
        153.086627, 75.267482,  17.826726,
        153.086627, 76.474839,  18.016858,
    };
    
    for ( int i =0; i< 3; i++) {
        cout <<arr[i]; 
    }

}
#endif


