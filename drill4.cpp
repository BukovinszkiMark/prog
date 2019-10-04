#include "std_lib_facilities.h"

int main()
{
	//1.,2.,3. feladat
	/**
	int a,b;
	while(cin>>a && cin>>b)
	{
		cout<<a<<' '<<b<<'\n';
		if(a>b)
			cout<<"The larger value is: "<<a<<'\n';
		else if(b>a)
			cout<<"The larger value is: "<<b<<'\n';
		else if(a==b)
			cout<<"The numbers are equal"<<'\n';
	}
	*/

	//4.,5. feladat
	/**
	double a,b;
	while(cin>>a && cin >> b)
	{
		if(a>b)
		{
			cout<<"The larger value is: "<<a<<'\n';
			if((a-b)<(1.0/100))
				cout<<"The numbers are almost equal\n";
		}
		else if(b>a)
		{
			cout<<"The larger value is: "<<b<<'\n';
			if((b-a)<(1.0/100))
				cout<<"The numbers are almost equal\n";
		}
		else if(a==b)
			cout<<"The numbers are equal"<<'\n';
	}
	*/

	//6. feladat
	/**
	double a;
	double ma = 0;
	double mi = 0;
	while(cin>>a)
	{
		cout<<"The value entered: "<<a<<'\n';
		if(mi == 0 && ma == 0)
		{
			cout<<"The smallest so far\nThe largest so far\n";
			ma = a;
			mi = a;
		}
		if(a < mi)
		{
			cout<<"The smallest so far\n";
			mi = a;
		}
		else if(a > ma)
		{
			cout<<"The largest so far\n";
			ma = a;
		}
	}
	*/

	//7.,8.,9.,10.,11. feladat
	double szam;
	double minimum = 0;
	double maximum = 0;
	double hany = 0;
	double osszesen = 0;
	double maxmeter = 0;
	double minmeter = 0;
	vector<double> vektor;
	string egyseg, maxegyseg, minegyseg;
	cout << "Accepted units: cm, m, in, ft\n";
	while (cin >> szam && cin >> egyseg)
	{
		double seged = 0;
		if (egyseg == "cm" || egyseg == "m" || egyseg == "in" || egyseg == "ft")
		{
			if (egyseg == "cm")
				seged = szam / 100;
			else if (egyseg == "m")
				seged = szam;
			else if (egyseg == "in")
				seged = szam * 2.54 / 100;
			else if (egyseg == "ft")
				seged = szam * 12 * 2.54 / 100;
			//--------------------------------------------
			if (minimum == 0 && maximum == 0)
			{
				maximum = szam;
				maxegyseg = egyseg;
				maxmeter = seged;
				minimum = szam;
				minegyseg = egyseg;
				minmeter = seged;
			}
			else if (seged < minmeter)
			{
				minegyseg = egyseg;
				minimum = szam;
				minmeter = seged;
			}
			else if (seged > maxmeter)
			{
				maxegyseg = egyseg;
				maximum = szam;
				maxmeter = seged;
			}

			++hany;
			osszesen += seged;

			cout << "A most beirt mennyiseg: " << szam << egyseg << '\n';
			cout << "A legnagyobb beirt mennyiseg: " << maximum << maxegyseg << '\n';
			cout << "A legkisebb beirt mennyiseg: " << minimum << minegyseg << '\n';
			cout << "Beirt mennyisegek osszesen: " << hany << '\n';
			cout << "A beirt mennyisegek osszege: " << osszesen << "meter\n";

			cout << "Az eddigi osszes megadott szam meterben, rendezve: ";
			vektor.push_back(seged);
			sort(vektor.begin(), vektor.end());
			for (int i = 0; i < vektor.size(); ++i)
			{
				cout << vektor[i] << ", ";
			}
			cout << "\n";
		}
		else
		{
			cout << "Illegal unit.\n";
		}
	}
}