#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

namespace first_space{
	int val;
	int x;
	int y;
	void func(int a, int b, int c){
			val=a;
			x= b;
			y=c;
	}

}
namespace second_space{
	int val;
	int p;
	int q;
	void func(int a, int b, int c){
			int val=a;
			int p=b;
			int q=c;
	}
}
class country{
	public:
	string country_name;
	country(string c):country_name(c){};
	virtual void print(){
		cout << country_name <<endl;
	}
	 
};

class state: public country {
	public:
	string state_name;
	state(string c, string s): country(c),state_name(s){}
		
	void virtual print(){
		cout << "country name: " << country_name << endl;
		cout << "state name: " << state_name <<endl;	
	}
};

class district: public state {
	public:
		string dist_name;
		district(string c, string s, string d):state(c,s), dist_name(d){}
		void virtual print(){
			cout << "country name: " << country_name << endl;
			cout << "state name: " << state_name <<endl;
			cout << "district name: " << dist_name << endl;
		}
};

class my_home: public district{
	public:
		string home_adr;
		my_home(string c, string s, string d, string h):district(c,s,d),home_adr(h){}
		void virtual print(){
			cout << "country name: " << country_name << endl;
			cout << "state name: " << state_name <<endl;
			cout << "district name: " << dist_name << endl;
			cout << "home_adr: "<< home_adr << endl;
		}
};

class union_territories: public country {
	public:
		string ut_name;
		union_territories(string c, string u): country(c),ut_name(u){}
		virtual void print(){
			cout << "country name: " << country_name << endl;
			cout << "ut_name: " << ut_name << endl;
		}
};

class friend_home : public union_territories{
	public:
		string frn_adr;
		friend_home(string c, string u, string f): union_territories(c,u), frn_adr(f){}
		virtual void print(){
			cout << "country name: " << country_name << endl;
			cout << "ut_name: " << ut_name << endl;
			cout << "friend_address: " << frn_adr << endl;
		}
};

int main() {
	// your code goes here
	 
 
	// country* c= new district("india", "jharkhand", "east singhbhum");
	// c->print();
	
	 district d("India","jharkhand", "jamshedpur");
	country* c=dynamic_cast<country*>(&d);
	c->print();
	const type_info& ti1 = typeid(c); 
	ti1.name();
	cout << endl;

	
	state* s =&d;
	s->print();
	const type_info& ti2 = typeid(s); 
	ti2.name();
	
	district* dptr= &d;
	dptr->print();
	const type_info& ti3 = typeid(dptr); 
	ti3.name();
	
 	my_home* h= new my_home("India","jharkhand", "jamshedpur","Jojobera");
 	h->print();
 	const type_info& ti4 = typeid(h); 
	ti4.name();
	
	cout << "**************************" << endl;
	
	union_territories u("India", "andaman");
	country* c1= dynamic_cast<country*>(&u);
	c1->print();
//	state *s1 = dynamic_cast<state*>(&u);
//	s1->print();
	
	friend_home f("India", "andaman","portblair");
	country* c3=dynamic_cast<country*>(&f);
	c3->print();
	
	cout << "**********************************" << endl;
	
	first_space::func(1,2,3);
	second_space::func(5,6,7);
	cout << "first_space::val: " << first_space::val << endl;
	cout << "second_space::val: "<< second_space::val << endl;
	cout << "first_space::x: " << first_space::x << endl;
	cout << "second_space::p: "<< second_space::p << endl;
	cout << "first_space::y: " << first_space::y << endl;
	cout << "second_space::q: "<< second_space::q << endl;
	return 0;
}
