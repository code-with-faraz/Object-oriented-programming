#include<iostream>
#include<string>
#include<list>
using namespace std;

struct YouTubeChannel{
string Name;
int SubscribersCount;

YouTubeChannel(string name, int subscribers) {
    Name = name;
    SubscribersCount = subscribers;
}

bool operator == (const YouTubeChannel& ytChannel) const{
    return this->Name == ytChannel.Name;

}

};

ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel){
    COUT<<"Name: "<<ytChannel.Name<<endl;
    COUT<<"Subscribers: "<<ytChannel.SubscribersCount<<endl;
    return COUT;
}

struct MyCollection{
  list<YouTubeChannel> myChannels;

    void operator += (YouTubeChannel& channel){
        this->myChannels.push_back(channel);
    }

    void operator -= (YouTubeChannel& channel){
        this->myChannels.remove(channel);
    } 
    
};

ostream& operator<<(ostream& COUT, MyCollection& myCollection){
    for(YouTubeChannel ytChannel: myCollection.myChannels){
        COUT<<ytChannel<<endl;
    }
    return COUT;
}

int main(){

    YouTubeChannel yt1= YouTubeChannel("Miraculer 2.0", 13000);
    YouTubeChannel yt2= YouTubeChannel("Starburst", 10000);
    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;
    myCollection -= yt1;
    cout << myCollection;


    cin.get();
}