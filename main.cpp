#include "Util.h"
#include <vector>

using namespace std;

int main(void){
	vector<string> s;
	s=Util::split("test,test,test",',');
	for(int i=0;i<s.size();i++){
		cout<<s[i]<<endl;
	}
}