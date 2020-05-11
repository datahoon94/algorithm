#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<int> numbers;

string solution(vector<int> numbers, string hand) {
	int distance_l;
	int distance_r;
	pair<int,int> left = make_pair(3,0);
	pair<int,int> right = make_pair(3,2);
    string answer = "";
    
    for(int i=0;i<numbers.size();++i) {
    	if(numbers[i] ==1) {
    		answer.append("L");
    		left.first = 0;
    		left.second = 0;
		}
		if(numbers[i] ==4) {
			answer.append("L");
			left.first=1;
			left.second=0;
		}
		if(numbers[i] ==7) {
			answer.append("L");
			left.first=2;
			left.second = 0;
		}
		if(numbers[i] == 3) {
			answer.append("R");
			right.first=0;
			right.second=2;
		}
		if(numbers[i]==6) {
			answer.append("R");
			right.first=1;
			right.second=2;
		}
		if(numbers[i]==9) {
			answer.append("R");
			right.first=2;
			right.second=2;
		}
		if(numbers[i]==2) {
			int temp_x, temp_y;
			temp_x = left.first-0;
			temp_y = left.second-1;
			if(temp_x<0) temp_x = -(temp_x);
			if(temp_y<0) temp_y = -(temp_y);
			distance_l = temp_x+temp_y;
			
			temp_x = right.first-0;
			temp_y = right.second-1;
			if(temp_x<0) temp_x = -(temp_x);
			if(temp_y<0) temp_y = -(temp_y);
			distance_r = temp_x+temp_y;
			
			if(distance_l < distance_r) {
				answer.append("L");
				left.first =0;
				left.second=1;
			}
			else if(distance_l > distance_r) {
				answer.append("R");
				right.first=0;
				right.second=1;
			}
			else {
				if(hand == "left") {
					answer.append("L");
					left.first =0;
					left.second=1;
				}
				else {
					answer.append("R");
					right.first=0;
					right.second=1;
				}
			}
		}
		
		if(numbers[i]==5) {
			int temp_x, temp_y;
			temp_x = left.first-1;
			temp_y = left.second-1;
			if(temp_x<0) temp_x = -(temp_x);
			if(temp_y<0) temp_y = -(temp_y);
			distance_l = temp_x+temp_y;
			
			temp_x = right.first-1;
			temp_y = right.second-1;
			if(temp_x<0) temp_x = -(temp_x);
			if(temp_y<0) temp_y = -(temp_y);
			distance_r = temp_x+temp_y;
			
			if(distance_l < distance_r) {
				answer.append("L");
				left.first =1;
				left.second=1;
			}
			else if(distance_l > distance_r) {
				answer.append("R");
				right.first=1;
				right.second=1;
			}
			else {
				if(hand == "left") {
					answer.append("L");
					left.first =1;
					left.second=1;
				}
				else {
					answer.append("R");
					right.first=1;
					right.second=1;
				}
			}
		}
		
		if(numbers[i]==8) {
			int temp_x, temp_y;
			temp_x = left.first-2;
			temp_y = left.second-1;
			if(temp_x<0) temp_x = -(temp_x);
			if(temp_y<0) temp_y = -(temp_y);
			distance_l = temp_x+temp_y;
			
			temp_x = right.first-2;
			temp_y = right.second-1;
			if(temp_x<0) temp_x = -(temp_x);
			if(temp_y<0) temp_y = -(temp_y);
			distance_r = temp_x+temp_y;
			
			if(distance_l < distance_r) {
				answer.append("L");
				left.first =2;
				left.second=1;
			}
			else if(distance_l > distance_r) {
				answer.append("R");
				right.first=2;
				right.second=1;
			}
			else {
				if(hand == "left") {
					answer.append("L");
					left.first =2;
					left.second=1;
				}
				else {
					answer.append("R");
					right.first=2;
					right.second=1;
				}
			}
		}
		
		if(numbers[i]==0) {
			int temp_x, temp_y;
			temp_x = left.first-3;
			temp_y = left.second-1;
			if(temp_x<0) temp_x = -(temp_x);
			if(temp_y<0) temp_y = -(temp_y);
			distance_l = temp_x+temp_y;
			
			temp_x = right.first-3;
			temp_y = right.second-1;
			if(temp_x<0) temp_x = -(temp_x);
			if(temp_y<0) temp_y = -(temp_y);
			distance_r = temp_x+temp_y;
			
			if(distance_l < distance_r) {
				answer.append("L");
				left.first =3;
				left.second=1;
			}
			else if(distance_l > distance_r) {
				answer.append("R");
				right.first=3;
				right.second=1;
			}
			else {
				if(hand == "left") {
					answer.append("L");
					left.first =3;
					left.second=1;
				}
				else {
					answer.append("R");
					right.first=3;
					right.second=1;
				}
			}
		}
	}
    cout << answer << endl;
    return answer;
}

int main(void) {
	numbers = {1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5};
	solution(numbers,"right");
	
}
