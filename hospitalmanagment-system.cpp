#include <iostream>
//made by -> dev choudhary
using namespace std;
class hospital{
  int totalpatient,id;
  struct patient
  {
    string name,address;
    long long contactno;
    int pendingcash;
    int ID;
  }patient[100];
  public:
  hospital(){
    totalpatient=0;
  }
        void choice();

		void setData();

		void show();

		void update();

		void search();

		void transactions();

		void del();
  
};
void hospital::choice(){
    char ch;
    while(1){

	cout<<"\n\nPRESS..!!"<<endl;

	cout<<"1. Create new account"<<endl;

	cout<<"2. View customers list"<<endl;

	cout<<"3. Update information of existing account"<<endl;

	cout<<"4. Check the details of an existing account"<<endl;

	cout<<"5. For transactions"<<endl;

	cout<<"6. Remove existing account"<<endl;

	cout<<"7. Exit"<<endl;

    cin>>ch;
    switch(ch){

		case '1':

			hospital::setData();

			break;

		case '2':

			if(totalpatient==0){

				cout<<"No data is entered"<<endl;

			}else{

			hospital::show();

		   }

			break;

		case '3':

			if(totalpatient==0){

			cout<<"No data is entered"<<endl;}

			else{

			hospital::update();}

			break;

		case '4':

			if(totalpatient==0)

			cout<<"No data is entered"<<endl;

			else

			hospital::search();

			break;

		case '5':

			if(totalpatient==0)

			cout<<"No data is entered"<<endl;

			else

			hospital::transactions();

			break;

		case '6':

			if(totalpatient==0)

			cout<<"No data is entered"<<endl;

			else

			hospital::del();

			break;

		case '7':

			exit(0);

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}
	}
    


};
void hospital::setData(){

	cout<<"---------------------------------"<<endl;

	cout<<"Enter data of person "<<totalpatient+1<<endl;

	cout<<"Enter name: ";

	cin>>patient[totalpatient].name;

	cout<<"ID: ";

	cin>>patient[totalpatient].ID;

	cout<<"Address: ";

	cin>>patient[totalpatient].address;

	cout<<"Contact: ";

	cin>>patient[totalpatient].contactno;

	cout<<"Total pending Cash: ";

	cin>>patient[totalpatient].pendingcash;
	cout<<"--------------------"<<endl;

	totalpatient++;

};
void hospital::show(){

	for(int i=0;i<totalpatient;i++){
		cout<<"---------------------------------"<<endl;
		cout<<"Data of person "<<i+1<<endl;

		cout<<"Name: "<<patient[i].name<<endl;

		cout<<"ID: "<<patient[i].ID<<endl;

		cout<<"Address: "<<patient[i].address<<endl;

		cout<<"Contact: "<<patient[i].contactno<<endl;

		cout<<"Cash: "<<patient[i].pendingcash<<endl;
		cout<<"---------------------------------"<<endl;
	}

};
void hospital::update(){

	cout<<"Enter id of patient those data you want to update"<<endl;

	cin>>id;

	for(int i=0;i<totalpatient;i++){

		if(id==patient[i].ID){

		cout<<"Previous data"<<endl;

		cout<<"Data of person "<<i+1<<endl;

		cout<<"Name: "<<patient[i].name<<endl;

		cout<<"ID: "<<patient[i].ID<<endl;

		cout<<"Address: "<<patient[i].address<<endl;

		cout<<"Contact: "<<patient[i].contactno<<endl;

		cout<<"Cash: "<<patient[i].pendingcash<<endl;

		cout<<"\nEnter new data"<<endl;

		cout<<"Enter name: ";

	cin>>patient[i].name;

	cout<<"ID: ";

	cin>>patient[i].ID;

	cout<<"Address: ";

	cin>>patient[i].address;

	cout<<"Contact: ";

	cin>>patient[i].contactno;

	cout<<"Total Cash: ";

	cin>>patient[i].pendingcash;

	break;

		}

		if(i==totalpatient-1){

			cout<<"No such record found"<<endl;

		}

	}

};
void hospital::search(){

cout<<"Enter id of patient those data you want to search"<<endl;

cin>>id;

for(int i=0;i<totalpatient;i++){

	if(id==patient[i].ID){

		cout<<"Name: "<<patient[i].name<<endl;

		cout<<"ID: "<<patient[i].ID<<endl;

		cout<<"Address: "<<patient[i].address<<endl;

		cout<<"Contact: "<<patient[i].contactno<<endl;

		cout<<"Cash: "<<patient[i].pendingcash<<endl;

		break;

	}

	if(i==totalpatient-1){

		cout<<"No such record found"<<endl;

	}

}

};
//del and transcition pending
void hospital::del(){
	cout<<"Enter id of patient whose data you want to remove"<<endl;

     cin>>id;

     for(int i=0;i<totalpatient;i++){

     	if(id==patient[i].ID){

     		for(int j=i;j<totalpatient;j++){

     		patient[j].name=patient[j+1].name;

     		patient[j].ID=patient[j+1].ID;

     		patient[j].address=patient[j+1].address;

     		patient[j].contactno=patient[j+1].contactno;

     		patient[j].pendingcash=patient[j+1].pendingcash;

     		totalpatient--;

     		cout<<"Your required data is deleted"<<endl;

     		break;

			 }

		 }

		 if(i=totalpatient-1){

		cout<<"No such record found"<<endl;

		 }

	 }

	 
	

};
void hospital::transactions(){
	cout<<"Enter id of patient those data you want to transaction"<<endl;
	int cash;
     cin>>id;

     for(int i=0;i<totalpatient;i++){

     	if(id==patient[i].ID){

     		cout<<"Name: "<<patient[i].name<<endl;

     	     cout<<"Address: "<<patient[i].address<<endl;

		     cout<<"Contact: "<<patient[i].contactno<<endl;

		     cout<<"\n Pending payment to hospital "<<patient[i].pendingcash<<endl;
			 cout<<"How much cash you want to deposit??"<<endl;

		     		cin>>cash;

		     		patient[i].pendingcash=patient[i].pendingcash-cash;

		     		cout<<"Your new pending cash is "<<patient[i].pendingcash<<endl;
		}
	 }
};

int main(){
    hospital neelam;
    neelam.choice();

    return 0;
}