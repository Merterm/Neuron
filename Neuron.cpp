/**
 * Author: Mert İNAN ID: 21402020
 * Description: This is the initial steps of creating a neuron object that is
                highly-detailed and expansive.
 * Date: 16/02/2017
 * Version: 1.0 -initial try-
 */

#include <string>
#include <cstring>
#include <iostream>
#include <cstddef>
#include <list>

using namespace std;

struct Neuron {
    //Defines the physiological type of neuron
    enum type {UNIPOLAR, BIPOLAR, PSEUDOPOLAR, MULTIPOLAR};
    int axonLength;
    int dendriteNumber;
    int age;
    list<int> dendriteLengths;
    list<int> contactPoints; //Not very sure whether list is the perfect data structure for this purpose
    list<string> proteins;
    list<char> dna;   //!!A BETTER STRUCTURE SHOULD BE FOUND!!
};

int main() {
    Neuron neuron;
    return 0;
}
