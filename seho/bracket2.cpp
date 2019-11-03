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

		if (brackets.front() != '[' && brackets.front() != '{' && brackets.front() != '(') // ����1. ���ڿ��� ������ ���� ��ȣ( [ or { or ( )�� �ƴѰ�� NO
		{
			answer = "NO";
			cout << answer << endl;
			stack.clear();
			continue;
		}



		for (j = 0; j < brackets.size(); ++j) // ���ڿ��� �տ������� Ž��
		{
			if (brackets.at(j) == '[' || brackets.at(j) == '{' || brackets.at(j) == '(')
			{
				stack.push_back(brackets.at(j)); // ���ʹ��� ��ȣ�� stack�� ����.
			}
			else if (brackets.at(j) == ']')
			{
				if (stack.size() != 0 && stack.back() == '[') { stack.pop_back(); continue; } // stack size�� 0�̸� �ݴ� ��ȣ�� �� ���� ����� �̶� ���� NO
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

		if (stack.size() == 0 && j == brackets.size()) answer = "YES"; // �� for���� ���������� Ż���ϰ�, stack�� �� ��� ��=YES
		else answer = "NO";

		cout << answer << endl;
		stack.clear();
	}

	

}