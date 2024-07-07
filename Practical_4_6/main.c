#include <stdio.h>
#include <stdlib.h>

/*Create a structure named 'CircuitComponents' that contains the resistance (in ohms),
inductance (in henry), and capacitance (in farads) of an RLC circuit. Write a program that
prompts the user to input the values of these components and calculates the total impedance
of the circuit using the formula Z = sqrt((R2) + (X2)), where X is the reactance given by X = 2fL
- 1/(2fC), and f is the frequency (60 Hz). Finally, display the impedance.*/
float resistor, inductance, capacitance;/*Initialize constants*/
int f = 60;
struct CircuitComponents/*Initialize structure*/
{
    float resistance;
    float inductance;
    float capacitance;
};

void main()
{
    struct CircuitComponents circuit;
    /*Assign information to variables*/
    printf("What is the value of the resistor: ");
    scanf("%f", &circuit.resistance);
    float R = circuit.resistance;
    printf("What is the value of inductance: ");
    scanf("%f", &circuit.inductance);
    float L = circuit.inductance;
    printf("What is the value of capacitance: ");
    scanf("%f", &circuit.capacitance);
    float C = circuit.capacitance;

    float X = 2*f*L - 1/(2*f*C);
    float Z = sqrt((R) + (X));
    printf("The total impedance is: %.4f", Z); /*Diplay impedance*/

}



