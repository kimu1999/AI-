class Exp {
private:
	int b;
	int idx;
	int res = 1;
public:
	Exp();
	Exp(int b);
	Exp(int b, int idx);
	int getBase();
	int getExp();
	int getValue();
	bool equals(Exp num);
};
