#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int case_n, number_person, number_skip;
	vector<int> vector_person;
	vector<int>::iterator iter;
	int suicide_target;


	cin >> case_n;
	for (int i = 0; i < case_n; ++i)
	{
		
		cin >> number_person >> number_skip;
		
		for (int j = 0; j < number_person; ++j)
		{
			vector_person.push_back(j + 1); // 사람 번호 1 ~ 매겨서 배열에 추가함.
		}

		// 첫번째 사람부터 죽음.
		suicide_target = 0;
		iter = vector_person.begin();
		while (1)
		{
			iter = vector_person.erase(iter); // 반복자가 가리키는 원소 삭제
			// 반환 값은 삭제된 원소의 다음을 가리킴.***********
			// iter역시 자동으로 다음을 가리킴.
			// iter를 반환값으로 재할당 하지 않으면 ++ 연산시에 오류가 발생한다. why? ... null을 가리킨다는데?


			// 삭제 후 원소개수가 2개이면 생존자 위치 출력 후 탈출(종료)
			if (vector_person.size() == 2)
			{
				for (int k = 0; k < vector_person.size(); ++k)
				{
					cout << vector_person[k] << " ";
				}
				cout << endl;
				break; // while문 탈출
			}
			else
			{
				for (int k = 0; k < number_skip -1 ; ++k) // N(number_skip)만큼 생존자를 건너뛰는 과정. // 위에서 자동으로 1만큼 증가했으므로 skip -1 반복
				{
					if (iter == vector_person.end()) // Error 2로 인한 추가
					{
						iter = vector_person.begin();
					}
					++iter; // Error2 : 위에서 마지막 원소가 삭제된 경우, 이미 반복자가 end를 가리키고 있는 경우 ++시 오류 발생. 그러므로 end인지 앞에서도 검사필요
					if (iter == vector_person.end()) // 만약 end위치를 가리키는 경우, 다시 처음을 가리키고 + 1함.(end는 끝의 다음을 가리키기 때문에 + 1함) // 인줄 알았으나, end면 다시 begin을 가리키면 됨.
					{
						iter = vector_person.begin();
						//++iter;
					}
				}
			}
		}
		
		
		vector_person.clear(); // 해당 case 종료 후, vector clear
	}

}