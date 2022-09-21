#include "NewBear.h"
#include <iostream>
using namespace std;

#pragma once

// Fill in here
float Bear::getWeight() {
	return Weight;
}

void Bear::SetWeight(float w) {
	Weight = w;
}

Bear::Bear(float b_w) {
	Weight = b_w;
}


Polar::Polar(float pw):Bear(pw) { }

Grizzly::Grizzly(float gw):Bear(gw) { }

Black::Black(float bw):Bear(bw) { }

float Grizzly::getWeight() {
	return Weight *0.9;
}

float Black::getWeight() {
	return Weight *0.7;
}

float Black_Momma::getWeight() {
	if (cub != NULL) return sum * 2;
	else return sum;
}

float Black_Momma::getTotal() {
	if (cub != NULL) return sum * 0.7 + Black_Momma::Weight * 1.4;
	else return sum * 0.7 + Black_Momma::Weight *0.7;

}


Black_Momma::Black_Momma(float bm):Black(bm) {
	Weight = bm;
	cub = NULL;
}


void Black_Momma::AddCub(Bear *aCub) {
	cub = aCub;
	sum += cub->getWeight();
	count++;
}

void Bear::PrintSelf(void) {
	cout << "I am Bear, Weight=" << Weight << ", " << "Aggressiveness=" << getWeight() << endl;
}


void Polar::PrintSelf(void) {
	cout << "I am Polar bear, Weight=" << Weight << ", " << "Aggressiveness=" << getWeight() << endl;
}

void Grizzly::PrintSelf(void) {
	cout << "I am Grizzly bear, Weight=" << Weight << ", " << "Aggressiveness=" << getWeight() << endl;
}

void Black::PrintSelf(void) {
	cout << "I am Black bear, Weight=" << Weight << ", " << "Aggressiveness=" << getWeight()<< endl;
}


void Black_Momma::PrintSelf(void) {
	if (cub != NULL)
		cout << "I am Black Mommabear with " << count << " cub(s), Weight=" << Weight << ", " << "Aggressiveness=" << getWeight() << ", " <<  "Total Aggressiveness=" << getTotal() << endl;
	else
		cout << "I am Black Mommabear with " << count << " cub(s), Weight=" << Weight << ", " << "Aggressiveness=" << getWeight() << ", " << "Total Aggressiveness=" << getTotal() << endl;
}

