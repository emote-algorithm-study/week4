
#include <iostream>
#include <vector>
using namespace std;

enum ToBeOrNotToBe {SURVIVE, DIE};

void Josephus();
int findNextIndex(vector<ToBeOrNotToBe> peoples, int K, int N, int index);

int main(){
    int C;
    
    //cout << "Enter num of case";
    cin >> C;
    
    for(int i=0; i<C; i++){
        Josephus();
    }
    
    return 0;
}

void Josephus(){
    int N, K;
    
    //cout << "Start Josephus! enter N and K : " << endl;
    cin >> N >> K;
    
    vector<ToBeOrNotToBe> peoples(N, SURVIVE);
    int numOfSurvive = N;
    
    //반복문 시작하기 앞서 초기 설정
    int i=0; //죽이는 인덱스
    int k=1; //반복획수
    
    peoples[i] = DIE;
    numOfSurvive--;
    //cout << i+1 << " is died. num of Survie == " << numOfSurvive << endl;

    while(true){
        if(numOfSurvive == 2)
            break;
        
        if(peoples[i] == SURVIVE){
            if(k == 3){
                peoples[i] = DIE;
                numOfSurvive--;
                //cout << i+1 << " is died. num of Survie == " << numOfSurvive << endl;
                k = 1; //k 리셋
            }else{ //
                k++;
                i++;
                if(i > N-1)
                    i = i - N;
            }
            
        }else{ //죽어있으면
            i++;
            if (i>N-1)
                i = i - N;
        }
                
    }
    
    for(int j=0; j<N; j++){
        if(peoples[j] == SURVIVE){
            cout << j+1 << " ";
        }
    }
    
    cout << endl;
    
}
