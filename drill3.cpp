#include "std_lib_facilities.h"

using namespace std;

int main()
{
	string first_name;
	string friend_name;
	char friend_sex=0;
	int age;


	cout << "Enter the name of the person you want to write to:\n";
	cin >> first_name;
	cout << "\nDear "<< first_name << ", How are you?\n";
	cout << "Im fine.\n" "I miss you.\n\n";

	cout << "Enter the name of your friend:\n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n\n";

	cout << "Enter the sex of friend (m-male; f-female):\n";
	cin >> friend_sex;
	if (friend_sex=='m')
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n"
			"How old is he?\n";

	}
	else if (friend_sex== 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me.\n"
			"How old is she?\n";
	}
	cin >> age;

	cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	if (age<=0 || age>=110)
	{
		simple_error("you're kidding!");
	}

	else if (age<12)
	{
		cout<< "Next year you will be " << age + 1 << ".\n";
	}
	
	else if (age==17)
	{
		cout << "Next year you will be able to vote.\n";
	}

	else if (age>70)
	{
		cout << "I hope you are enjoying retirement.\n";
	}

	cout << "Yours sincerely,\n\n\nPeter Puskas";

	return 0;
}