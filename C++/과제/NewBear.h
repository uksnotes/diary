#pragma once

// Fill in here
class Bear {
protected:
	float Weight;
public:
	Bear(float b_w);
	float getWeight();
	void SetWeight(float w);
	virtual void PrintSelf(void);
};

class Polar : public Bear{
public:
	virtual void PrintSelf(void);
	Polar(float pw);
};

class Grizzly : public Bear {
public:
	virtual void PrintSelf(void);
	Grizzly(float gw);
	float getWeight();
};

class Black : public Bear {
public:
	virtual void PrintSelf(void);
	Black(float bw);
	float getWeight();
};

class Black_Momma : public Black {
public:
	virtual void PrintSelf(void);
	int count = 0;
	int sum = 0;
	float getWeight();
	float getTotal();
	Black_Momma(float bm);
	void AddCub(Bear *aCub);
protected:
	Bear *cub;
};
