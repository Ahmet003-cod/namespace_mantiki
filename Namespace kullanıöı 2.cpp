#include<iostream>
#include<string>
using namespace std;//cout kullandýðýmýz yerdelerde bize yazdýran ve çýktý veren  fonksiyonu çalýþtýrýr bunu yazmasak her cout baþýna std::yazmamýz gerekir
namespace friend1{
	string name="Ahmet";
	string surname="Gun";
	int scool_no=240568256;
	int age=20;
	string hobi="play fotball";
	int plaka_city=21;
	void password(){
		cout<<"password="<<friend1::name<<friend1::age*2+96-9*(plaka_city);
	}
	class pet_animal{
		public:
			string cat_name="Minnos";
			string dog_name="Pusar";
			void backup_password(){
		    cout<<"backup password="<<cat_name<<scool_no<<endl;
	}
	};		
}
namespace friend2{
	string name="Mert";
	string surname="Cabael";
	int scool_no=240568001;
	int age=19;
	string hobi="play chess";
	int plaka_city=27;
	void password(){
		cout<<"password="<<friend1::name<<friend2::age*3+96-0.4*(plaka_city);
	}
	class pet_animal{
		public:
			string cat_name="Boncuk";
			string dog_name="Kara";
			void backup_password(){
		    cout<<"backup password="<<dog_name<<scool_no<<endl;
	}
	};		
}
namespace friend3{
	string name="Sefa";
	string surname="Sahin";
	int scool_no=240568089;
	int age=21;
	string hobi="Researching Dinosaur Bones";
	int plaka_city=44;
	void password(){
		cout<<"password="<<friend1::name<<friend3::plaka_city*3+96-0.4*(age);
	}
	class pet_animal{
		public:
			string cat_name="Milo";
			string dog_name="Jack";
			void backup_password(){
		    cout<<"backup password="<<dog_name<<scool_no<<endl;
	}
	};		
}
using namespace friend1;//friend1 yazarken ismini yazmaya gerek yok ama diðer friend namespacelerde gerekir  
int main(){
	cout<<"*******friend1*******";
	cout<<"\n";
	cout<<"name="<<name<<endl;
	cout<<"surname="<<surname<<endl;
	cout<<"hobi="<<hobi<<endl;
	cout<<"age="<<age;
	cout<<"\nscool number="<<scool_no;
	cout<<"\nplaka city="<<plaka_city;
	cout<<"\n";
	pet_animal obj1;//friend1
	cout<<obj1.cat_name<<endl;//friend1
	password();//friend1
	cout<<"\n";
	obj1.backup_password();//friend1
	cout<<"\n\n";
	
	cout<<"*******friend2*******";
	cout<<"\n";
	cout<<"name="<<friend2::name<<endl;
	cout<<"surname="<<friend2::surname<<endl;
	cout<<"hobi="<<friend2::hobi<<endl;
	cout<<"age="<<friend2::age;
	cout<<"\nscool number="<<friend2::scool_no;
	cout<<"\nplaka city="<<friend2::plaka_city;
	cout<<"\n";
	friend2::pet_animal obj2;//friend1
	cout<<obj2.dog_name<<endl;//friend1
	friend2::password();//friend1
	cout<<"\n";
	obj2.backup_password();//friend1
	cout<<"\n\n";
	
	cout<<"*******friend3*******";
	cout<<"\n";
	cout<<"name="<<friend3::name<<endl;
	cout<<"surname="<<friend3::surname<<endl;
	cout<<"hobi="<<friend3::hobi<<endl;
	cout<<"age="<<friend3::age;
	cout<<"\nscool number="<<friend3::scool_no;
	cout<<"\nplaka city="<<friend3::plaka_city;
	cout<<"\n";
	friend3::pet_animal obj3;//friend1
	cout<<obj3.dog_name<<endl;//friend1
	friend3::password();//friend1
	cout<<"\n";
	obj3.backup_password();//friend1
	cout<<"\n\n";
	
	
	
   
    
   
	
	
	
}
