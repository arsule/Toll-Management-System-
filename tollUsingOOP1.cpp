using namespace std;
#include<iostream>
#include<string.h>

class vehical
{
	int basicToll;
	int people;
	int extraCharges;

	
	
	public:
		vehical()
		{
			cout << "\nVehical default constructor called.";
			this->basicToll = 20;
			this->people = 1;
			this->extraCharges = 0;
			
		
		}
		vehical(int bt, int p, int xc)
		{
			cout << "\nVehical parameterised constructor called.";
			this->basicToll = bt;
			this->people = p;
			this->extraCharges = xc;
			
		
		}
	void setBasicToll(int i)
	{
		this->basicToll = i;
	}
	void setPeople(int p)
	{
		this->people = p;
	}
	
	void setExtraCharges(int xc)
	{
		this->extraCharges = xc;
	}
	int getExtraCharges()
	{
		return this->extraCharges;
	}
	
	int getBasicToll()
	{
		return this->basicToll;
	}
	int getPeople()
	{
		return this->people;
	}


	virtual void display()
	{
	
		cout << "\n Which includes basic toll  : " << this->basicToll;
		cout << "\n Extra charge :" << this->extraCharges;
		
	}
	virtual int CalToll()
	{
		return this->basicToll;
	}

};// vehical class ends here


struct twoWheeler :public vehical
{
		
	
public:
	twoWheeler() : vehical()
	{
		cout << "\n Two wheeler default constructor called.";
		
		
	}
	twoWheeler(int bt, int p,   int xc ) : vehical(bt, p, xc)
	{
		cout << "\n Two wheeler parameterised constructor called.";

		
	}
	
	void display()
	{
		vehical::display();
		cout << "\n Two wheeler display called." ;
	}
	int CalToll()
	{
		int toll;
		int p = this->getPeople();
		if(p>2)
		{
			int xtChagre = this->getExtraCharges();
			xtChagre = p * 10;
			toll = this->getBasicToll() + xtChagre;
			
		}
		else{
			toll = this->getBasicToll();
		}
		
		return toll;
	}
};// class Two Wheeler end here

struct threeWheeler :public vehical
{
		
	
public:
	threeWheeler() : vehical()
	{
		cout << "\n Three wheeler default constructor called.";
	
		
	}
	threeWheeler(int bt, int p,  int xc ) : vehical(bt, p,xc)
	{
		cout << "\n Three wheeler parameterised constructor called.";

		
	}
	
	void display()
	{
		vehical::display();
		cout << "\n Three wheeler display called." ;
	}
	int CalToll()
	{
		int toll;
		int p = this->getPeople();
		if(p>3)
		{
			int xtChagre = this->getExtraCharges();
			xtChagre = p * 20;
			toll = this->getBasicToll() + xtChagre;
			
		}
		else{
			toll = this->getBasicToll();
		}
		
		return toll;
	}
};// class Three Wheeler end here

struct fourWheeler :public vehical
{
	
	
public:
	fourWheeler() : vehical()
	{
		cout << "\n Three wheeler default constructor called.";
		
		
	}
	fourWheeler(int bt, int p,  int xc ) : vehical(bt, p, xc)
	{
		cout << "\n Three wheeler parameterised constructor called.";

		
	}
	
	void display()
	{
		vehical::display();
		cout << "\n four wheeler display called." ;
	}
	int CalToll()
	{
		int toll ;
		
		int p = this->getPeople();
		if(p>4)
		{
			int xtChagre = this->getExtraCharges();
			xtChagre = p * 40;
			toll = this->getBasicToll() + xtChagre;
			
		}
		else{
			toll = this->getBasicToll() ;
		}
		
		return toll;
	}
};// class four Wheeler end here

struct moreThanFourWheeler :public vehical
{

public:
	moreThanFourWheeler() : vehical()
	{
		cout << "\n moreThanFourWheeler default constructor called.";
		
		
	}
	moreThanFourWheeler(int bt, int p,  int xc ) : vehical(bt, p, xc)
	{
		cout << "\n moreThanFourWheeler parameterised constructor called.";

		
	}

	void display()
	{
		vehical::display();
		cout << "\n more than four wheeler display called." ;
	}
	int CalToll()
	{
		int toll;
		int p = this->getPeople();
		if(p>6)
		{
			int xtChagre = this->getExtraCharges();
			xtChagre = p * 100;
			toll = this->getBasicToll() + xtChagre;
			
		}
		else{
			toll = this->getBasicToll() ;
		}
		
		return toll;
	}
};// class moreThanFourWheeler end here



int main()//generic pointer
{
	int ch,basicT, Ppl, xCharge;
	vehical * v1;
	printf("\nVehical Class constructor display and calToll function is running:");
	v1 = new vehical();
	v1->display();
	cout << "\n Total toll :" << v1->CalToll();
	
	printf("\nWhich type of vehicle you have?");
	printf("\nEnter 1 for Two wheeler");
	printf("\nEnter 2 for Three wheeler");
	printf("\nEnter 3 for Four wheeler");
	printf("\nEnter 4 for vehicles more than four wheels");
	printf("\nEnter 5 to exit: ");
	scanf("%d", &ch);

	
	
	if (ch == 1){
		
		basicT = 20;
		printf("\nHow many people are by the vehicle?");
		scanf("%d",&Ppl);
		xCharge = 10;
	
	v1 = new twoWheeler(basicT, Ppl, xCharge);
	v1->display();
	cout << "\n Total toll :" << v1->CalToll();
	cout << "\n\n\n";
	
	}
	else if(ch == 2){
		basicT = 30;
		printf("\nHow many people are by the vehicle?");
		scanf("%d",&Ppl);
		xCharge = 20;
	v1 = new threeWheeler(basicT, Ppl, xCharge);
	v1->display();
	cout << "\n Total toll :"<< v1->CalToll();
	cout << "\n\n\n";
}
else if(ch == 3){
	
	basicT = 40;
		printf("\nHow many people are by the vehicle?");
		scanf("%d",&Ppl);
		xCharge = 40;
	v1 = new fourWheeler(basicT, Ppl, xCharge);
	v1->display();
	cout << "\n Total toll :" << v1->CalToll();
	cout << "\n\n\n";
}
else if(ch == 4){
	basicT = 60;
		printf("\nHow many people are by the vehicle?");
		scanf("%d",&Ppl);
		xCharge = 100;
	v1 = new moreThanFourWheeler(basicT, Ppl, xCharge);
	v1->display();
	cout << "\n Total toll :" << v1->CalToll();
	cout << "\n\n\n";
}
else if (ch == 5){
		printf("\nYou have pressed Exit.");
		cout << "\n\n\n";
			
}else{
		printf("\nPlease enter valid choice.");
		cout << "\n\n\n";
}
	

return 0;
}
