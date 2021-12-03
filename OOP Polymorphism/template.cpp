#include <iostream>
#include <list>
using namespace std;

class youtubeChannel {
private:
	string Name;
	int SubsCount;
	list<string> PublishedVideosTitles;
protected:
	string OwnerName;
	int ContentQuality;
public:
	youtubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubsCount = 0;
		ContentQuality = 0;
	}
	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "Subs: " << SubsCount << endl;
		for (string videoTitle : PublishedVideosTitles) {
			cout << videoTitle << endl;
		}
	}
	void Subscribe() {
		SubsCount++;
	}
	void UnSubscribe() {
		if (SubsCount > 0)
			SubsCount--;
	}
	void PublishVideo(string title) {
		PublishedVideosTitles.push_back(title);
	}
	void CheckAnalitics() {
		if (ContentQuality < 5) {
			cout << Name << " has a bad quality content." << endl;
		}
		else {
			cout << Name << " has a good quality content." << endl;
		}
	}
};

class cookingYtChannel:public youtubeChannel {
public:
	cookingYtChannel(string name, string ownerName):youtubeChannel(name, ownerName) {

	}
	void Practice() {
		cout << OwnerName << " Sta imparando nuove ricette fantastiche" << endl;
		ContentQuality++;
	}
};

class SingersYtChannel :public youtubeChannel {
public:
	SingersYtChannel(string name, string ownerName) :youtubeChannel(name, ownerName) {

	}
	void Practice() {
		cout << OwnerName << " Sta creando un nuovo album" << endl;
		ContentQuality++;
	}
};

int main()
{
	/*
	cookingYtChannel ytChannel("Cock mama", "mama");
	ytChannel.PublishVideo("Bananeeeeeee");
	ytChannel.GetInfo();
	ytChannel.Practice();

	cookingYtChannel cookingYtChannel("Barbara", "papi");

	youtubeChannel ytChannel2("Nome", "Coglione");
	ytChannel2.PublishVideo("Non ho una vita sociale, less goooo");
	ytChannel2.Subscribe();
	ytChannel2.GetInfo();
	*/
	
	SingersYtChannel singingYtChannel("D&D", "Daniele");
	singingYtChannel.Practice();
	cookingYtChannel CookingYtChannel("CookAndFry", "Franco");
	CookingYtChannel.Practice();
	CookingYtChannel.Practice();
	CookingYtChannel.Practice();
	CookingYtChannel.Practice();
	CookingYtChannel.Practice();
	CookingYtChannel.Practice();
	CookingYtChannel.Practice();
	CookingYtChannel.Practice();

	youtubeChannel* yt1 = &CookingYtChannel;
	youtubeChannel* yt2 = &singingYtChannel;

	yt1->CheckAnalitics();
	yt2->CheckAnalitics();


	system("pause>0");
}
