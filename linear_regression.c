#include <stdio.h>

#define VARS 10
#define ITER 500
#define POINTS 200
#define ALPHA 0.00000005

float input_x[POINTS][VARS] = {{83,86,77,15,93,35,86,92,49,21},{62,27,90,59,63,26,40,26,72,36},{11,68,67,29,82,30,62,23,67,35},{29,2,22,58,69,67,93,56,11,42},{29,73,21,19,84,37,98,24,15,70},{13,26,91,80,56,73,62,70,96,81},{5,25,84,27,36,5,46,29,13,57},{24,95,82,45,14,67,34,64,43,50},{87,8,76,78,88,84,3,51,54,99},{32,60,76,68,39,12,26,86,94,39},{95,70,34,78,67,1,97,2,17,92},{52,56,1,80,86,41,65,89,44,19},{40,29,31,17,97,71,81,75,9,27},{67,56,97,53,86,65,6,83,19,24},{28,71,32,29,3,19,70,68,8,15},{40,49,96,23,18,45,46,51,21,55},{79,88,64,28,41,50,93,0,34,64},{24,14,87,56,43,91,27,65,59,36},{32,51,37,28,75,7,74,21,58,95},{29,37,35,93,18,28,43,11,28,29},{76,4,43,63,13,38,6,40,4,18},{28,88,69,17,17,96,24,43,70,83},{90,99,72,25,44,90,5,39,54,86},{69,82,42,64,97,7,55,4,48,11},{22,28,99,43,46,68,40,22,11,10},{5,1,61,30,78,5,20,36,44,26},{22,65,8,16,82,58,24,37,62,24},{0,36,52,99,79,50,68,71,73,31},{81,30,33,94,60,63,99,81,99,96},{59,73,13,68,90,95,26,66,84,40},{90,84,76,42,36,7,45,56,79,18},{87,12,48,72,59,9,36,10,42,87},{6,1,13,72,21,55,19,99,21,4},{39,11,40,67,5,28,27,50,84,58},{20,24,22,69,96,81,30,84,92,72},{72,50,25,85,22,99,40,42,98,13},{98,90,24,90,9,81,19,36,32,55},{94,4,79,69,73,76,50,55,60,42},{79,84,93,5,21,67,4,13,61,54},{26,59,44,2,2,6,84,21,42,68},{28,89,72,8,58,98,36,8,53,48},{3,33,33,48,90,54,67,46,68,29},{0,46,88,97,49,90,3,33,63,97},{53,92,86,25,52,96,75,88,57,29},{36,60,14,21,60,4,28,27,50,48},{56,2,94,97,99,43,39,2,28,3},{0,81,47,38,59,51,35,34,39,92},{15,27,4,29,49,64,85,29,43,35},{77,0,38,71,49,89,67,88,92,95},{43,44,29,90,82,40,41,69,26,32},{61,42,60,17,23,61,81,9,90,25},{96,67,77,34,90,26,24,57,14,68},{5,58,12,86,0,46,26,94,16,52},{78,29,46,90,47,70,51,80,31,93},{57,27,12,86,14,55,12,90,12,79},{10,69,89,74,55,41,20,33,87,88},{38,66,70,84,56,17,6,60,49,37},{5,59,17,18,45,83,73,58,73,37},{89,83,7,78,57,14,71,29,0,59},{18,38,25,88,74,33,57,81,93,58},{70,99,17,39,69,63,22,94,73,47},{31,62,82,90,92,91,57,15,21,57},{74,91,47,51,31,21,37,40,54,30},{98,25,81,16,16,2,31,39,96,4},{38,80,18,21,70,62,12,79,77,85},{36,4,76,83,7,59,57,44,99,11},{27,50,36,60,18,5,63,49,44,11},{5,34,91,75,55,14,89,68,93,18},{5,82,22,82,17,30,93,74,26,93},{86,53,43,74,14,13,79,77,62,75},{88,19,10,32,94,17,46,35,37,91},{53,43,73,28,25,91,10,18,17,36},{63,55,90,58,30,4,71,61,33,85},{89,73,4,51,5,50,68,3,85,6},{95,39,49,20,67,26,63,77,96,81},{65,60,36,55,70,18,11,42,32,96},{79,21,70,84,72,27,34,40,83,72},{98,30,63,47,50,30,73,14,59,22},{47,24,82,35,32,4,54,43,98,86},{40,78,59,62,62,83,41,48,23,24},{72,22,54,35,21,57,65,47,71,76},{69,18,1,3,53,33,7,59,28,6},{97,20,84,8,34,98,91,76,98,15},{52,71,89,59,6,10,16,24,9,39},{0,78,9,53,81,14,38,89,26,67},{47,23,87,31,32,22,81,75,50,79},{90,54,50,31,13,57,94,81,81,3},{20,33,82,81,87,15,96,25,4,22},{92,51,97,32,34,81,6,15,57,8},{95,99,62,97,83,76,54,77,9,87},{32,82,21,66,63,60,82,11,85,86},{85,30,90,83,14,76,16,20,92,25},{28,39,25,90,36,60,18,43,37,28},{82,21,10,55,88,25,15,70,37,53},{8,22,83,50,57,97,27,26,69,71},{51,49,10,28,39,98,88,10,93,77},{90,76,99,52,31,87,77,99,57,66},{52,17,41,35,68,98,84,95,76,5},{66,28,54,28,8,93,78,97,55,72},{74,45,0,25,97,83,12,27,82,21},{93,34,39,34,21,59,85,57,54,61},{62,72,41,16,52,50,62,82,99,17},{54,73,15,6,51,64,90,63,91,72},{37,37,59,28,71,80,87,56,90,41},{70,52,65,11,69,17,61,83,51,12},{0,6,38,67,64,89,32,54,4,75},{79,41,12,38,69,36,70,56,44,60},{49,14,65,14,26,86,83,39,69,35},{52,21,93,90,89,9,31,73,64,35},{48,95,77,13,33,98,49,55,55,93},{68,56,60,33,23,86,71,58,77,40},{45,81,61,90,23,50,0,54,75,64},{42,24,59,19,89,44,69,38,51,76},{83,19,33,43,4,56,81,75,66,11},{67,12,92,29,2,68,31,2,74,7},{18,16,83,77,87,72,73,57,62,25},{33,97,96,18,41,53,26,74,80,93},{85,48,5,30,29,59,98,60,62,24},{19,80,41,2,10,80,26,83,89,40},{8,23,38,57,93,31,10,20,5,90},{13,91,38,70,21,67,29,71,80,43},{95,99,24,88,54,86,69,32,69,10},{73,30,33,63,87,79,94,49,99,51},{39,64,42,30,86,15,49,15,86,81},{11,34,33,87,22,87,73,43,19,42},{54,44,24,39,59,63,18,53,12,69},{5,4,33,99,34,19,15,35,87,53},{69,50,87,2,37,62,89,10,5,60},{4,11,57,29,3,16,92,21,22,5},{43,79,61,28,78,47,0,45,82,87},{99,51,89,86,53,26,48,94,36,6},{7,92,17,64,21,20,80,66,94,54},{23,37,33,84,17,12,31,17,9,65},{56,8,69,45,95,22,71,95,69,59},{1,76,52,71,40,25,43,72,91,89},{27,66,78,12,50,96,24,33,13,86},{99,70,94,68,15,41,42,39,37,63},{98,90,39,2,13,31,28,57,4,71},{46,83,38,25,95,40,21,72,26,34},{58,25,56,52,45,72,46,39,11,83},{3,61,25,42,16,39,74,44,96,30},{67,94,13,57,19,60,50,92,32,76},{79,90,53,35,95,98,7,41,37,70},{76,40,84,1,83,0,92,9,96,40},{39,63,35,4,73,6,64,23,51,49},{51,30,39,4,65,86,2,25,79,91},{47,7,84,31,61,19,31,53,28,27},{94,19,43,81,23,68,87,39,43,38},{88,94,20,80,98,86,18,52,63,98},{95,10,5,79,42,66,98,25,72,78},{53,66,97,48,47,72,16,86,12,59},{77,0,53,97,32,3,35,51,7,98},{49,54,61,6,34,3,25,84,28,97},{63,33,15,60,81,14,85,97,0,97},{8,29,49,13,79,34,16,14,85,75},{65,86,30,26,92,16,29,69,52,9},{66,15,95,33,28,76,47,13,26,0},{62,86,29,63,0,8,97,16,75,82},{44,40,20,26,18,65,94,99,34,46},{8,53,62,3,86,42,32,34,7,10},{34,69,96,15,84,96,24,82,65,51},{16,61,43,37,87,61,2,81,60,88},{79,20,41,93,24,28,35,8,62,42},{70,96,63,66,11,0,15,87,34,32},{90,50,93,33,39,80,94,93,13,54},{82,44,75,23,38,51,51,73,11,65},{68,81,13,83,99,77,35,14,64,69},{46,7,72,91,40,11,23,87,57,36},{93,39,81,20,14,71,71,18,96,34},{83,64,67,97,0,67,74,35,33,90},{57,32,49,29,23,90,92,47,29,49},{35,22,40,68,43,55,39,66,25,36},{53,60,52,20,57,4,87,83,40,21},{26,97,5,27,78,28,69,70,27,98},{20,63,21,60,83,16,67,23,82,92},{11,35,53,63,8,62,68,95,98,60},{68,76,9,73,3,87,54,73,57,81},{23,29,96,44,42,80,12,9,55,47},{54,66,34,59,81,42,73,1,38,71},{13,58,99,22,84,55,61,90,80,71},{23,3,0,20,0,42,52,12,4,7},{59,58,25,94,17,58,36,90,60,26},{14,73,37,65,48,21,20,9,63,0},{32,86,4,33,58,56,27,10,68,31},{69,28,41,46,74,58,5,10,1,65},{89,67,90,26,32,38,99,5,0,62},{57,32,48,61,17,7,69,97,69,38},{28,39,18,70,85,92,80,42,54,33},{7,43,0,50,21,85,88,20,90,40},{34,47,25,83,61,94,42,30,91,63},{20,20,54,38,42,92,30,22,34,85},{8,94,80,8,44,2,45,84,22,87},{25,57,35,2,92,48,96,86,30,40},{49,51,12,56,89,54,48,72,28,82},{57,88,76,37,97,20,39,94,5,14},{82,82,23,69,36,15,17,84,53,99},{24,54,50,36,10,92,42,58,64,23},{41,21,11,69,10,60,90,2,55,47},{16,89,81,39,58,17,6,75,1,11},{74,78,65,77,66,76,69,61,34,33}};
float input_y[POINTS] = {36,27,6,99,97,16,60,39,70,67,86,86,8,67,77,66,36,35,93,37,46,19,67,12,96,34,40,17,95,74,50,31,2,8,30,51,25,42,90,47,61,76,34,69,95,63,35,31,51,80,20,97,0,88,61,96,74,1,14,69,28,16,52,82,25,82,33,2,77,23,49,90,51,35,60,46,99,47,29,2,28,49,99,28,89,13,76,63,66,90,84,94,59,36,76,84,71,9,38,0,84,39,90,35,75,50,81,26,50,62,28,78,64,79,58,53,44,34,69,11,77,5,57,36,42,34,72,65,95,10,65,32,49,7,67,76,58,1,2,60,63,82,38,27,14,96,33,58,30,54,69,7,59,27,95,1,13,67,18,60,29,35,92,31,43,12,7,53,13,62,13,28,96,51,56,10,99,41,69,81,95,90,89,54,69,36,8,82,4,26,95,33,14,87,64,57,51,24,10,64};

float parsed_x[POINTS][VARS+1] = {{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}};

float theta[VARS + 1] = {1,1,1,1,1,1,1,1,1,1,1};
float d_theta[VARS + 1] = {0,0,0,0,0,0,0,0,0,0,0};
float error[POINTS] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

void parse_x(){
    int i, j;
    for(i = 0; i < POINTS; i++){
        parsed_x[i][0] = 1;
        for(j = 1; j < VARS + 1; j++){
            parsed_x[i][j+1] = input_x[i][j]; 
        }
    }
}

void calc_h(){
    int i, j;
    for(i = 0; i < POINTS; i++){
        error[i] = 0;
        for(j = 0; j < VARS + 1; j++){
            error[i] += parsed_x[i][j]*theta[j]; 
        }
        error[i] -= input_y[i];
    }
}

void calc_d_theta(){
    int i, j;
    for(i = 0; i < VARS+1; i++){
        d_theta[i] = 0;
        for(j = 0; j < POINTS; j++){
            d_theta[i] += error[j] * parsed_x[j][i]; 
        }
        d_theta[i] = (2 * d_theta[i]) / POINTS;
    }
}

void update_theta(){
    int i;
    for(i = 0; i < VARS + 1; i++){
        theta[i] = theta[i] - (ALPHA * d_theta[i]); 
    }
}

float print_mse(){
    float result = 0;
    int i;
    for(i = 0; i < POINTS; i++){
        result = error[i] * error[i];
    }
    result = result / POINTS;
    printf("%.3f ", result);
}

void regression(){
    int i,j;
    parse_x();
    for(i = 0; i < ITER; i++){
        calc_h();
        calc_d_theta();
        update_theta();
    }
}

int main(){
    regression();
    return 0;
}
