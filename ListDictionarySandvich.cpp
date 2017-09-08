#include <iostream>
#include <string>
#include <map>
#include <utility>

int main(){
	std::map<int, std::pair<int, std::string> > mpair;
	std::cout << "
	std::map<int, std::pair<int, std::string> >::iterator mpairIt;
	int x = 1;

	mpair[0] = std::make_pair(1, "insertStuffHere");
	std::cout << "Using map val 0, pair( 1, \"insertStuffHere\")\n";
	std::cout << "Made a pair! :D\n\n";
		
	while(x != 5){
		mpair[x] = std::make_pair(x + 1, "insertOtherThingsIDK");
		std::cout << "Using map val " << x << ", pair( " << x + 1 << ", \"insertStuffHere\")\n";
		std::cout << "Made a pair! In position " << x << "! :)\n\n";
		x++;
	}
	std::cout << "\n\n\n";
	x = 0;
	while(x != 5){
		std::cout << "Reading pair number " << x << "! :D\n";
		std::cout << "Pair number " << x << " contains value " << mpair.find(x)->second.first << " and text value  " << mpair.find(x)->second.second << ".\n\n";
		x++;
	}

	return 0;
}
