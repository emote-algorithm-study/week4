#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int case_n, j;
	string brackets, answer;
	vector<char> stack;

	cin >> case_n;
	for (int i = 0; i < case_n; ++i)
	{
		cin >> brackets; 

		if (brackets.front() != '[' && brackets.front() != '{' && brackets.front() != '(') // 예외1. 문자열의 시작이 여는 괄호( [ or { or ( )가 아닌경우 NO
		{
			answer = "NO";
			cout << answer << endl;
			stack.clear();
			continue;
		}



		for (j = 0; j < brackets.size(); ++j) // 문자열의 앞에서부터 탐색
		{
			if (brackets.at(j) == '[' || brackets.at(j) == '{' || brackets.at(j) == '(')
			{
				stack.push_back(brackets.at(j)); // 왼쪽방향 괄호는 stack에 넣음.
			}
			else if (brackets.at(j) == ']')
			{
				if (stack.size() != 0 && stack.back() == '[') { stack.pop_back(); continue; } // stack size가 0이면 닫는 괄호가 더 많은 경우임 이때 답은 NO
				else
				{
					answer = "NO";
					break;
				}
			}
			else if (brackets.at(j) == '}')
			{
				if (stack.size() != 0 && stack.back() == '{') { stack.pop_back(); continue; }
				else
				{
					answer = "NO";
					break;
				}
			}
			else if (brackets.at(j) == ')')
			{
				if (stack.size() != 0 && stack.back() == '(') { stack.pop_back(); continue; }
				else
				{
					answer = "NO";
					break;
				}
			}
		}

		if (stack.size() == 0 && j == brackets.size()) answer = "YES"; // 위 for문을 정상적으로 탈출하고, stack이 빈 경우 답=YES
		else answer = "NO";

		cout << answer << endl;
		stack.clear();
	}

	

}