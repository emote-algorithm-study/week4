# 선형 자료구조

## 자료구조란?
> 자료구조(data structure)는 전산학에서 자료를 효율적으로 이용할 수 있도록 컴퓨터에 저장하는 방법이다. 신중히 선택한 자료구조는 보다 효율적인 알고리즘을 사용할 수 있게 한다.

## 자료구조의 분류

![자료구조의 분류](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=http%3A%2F%2Fcfile23.uf.tistory.com%2Fimage%2F21BA9A3359719D420434DD)

자료구조는 선형(Linear)구조와 비선형구조(non-linear)로 구분된다.


### 선형 구조
![선형구조](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=http%3A%2F%2Fcfile23.uf.tistory.com%2Fimage%2F25B4373359719D5E0313AF)
자료를 구성하는 데이터를 <u>순차적으로</u> 나열시킨 형태를 의미한다.
어떤 연산들을 수행할 수 있느냐에 따라 다시 세부적으로 분류할 수 있다.


### 비선형 구조
![비선현구조](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=http%3A%2F%2Fcfile9.uf.tistory.com%2Fimage%2F25FBB63359719D6937A583)


# 큐와 스택, 테크
대표적인 선형 자료구조들!

## 1. 큐
![큐](https://upload.wikimedia.org/wikipedia/commons/thumb/3/34/Fifo_queue.svg/1112px-Fifo_queue.svg.png)

큐란 리스트의 한 방향에서 삽입 작업이, 반대편 방향에서는 제거 작업이 이루어지는 데이터 구조이다. FIFO(First In First Out)이라고 불리며 운영체제의 작업 스케줄링, 키보드 버퍼 이용, 스플 등에 사용된다.

Head와 Tall이라는 개념을 사용하는데, Tail -> Head로 작업이 이루어지는 특징을 가진다.


## 2. 스택
![스택](https://www.studytonight.com/data-structures/images/stack-data-structure.png)
스택이란 <u>삽입/삭제가 한 방향에서</u> 이루어지는 데이터 구조이다. LIFO(Last In First Out)라 불리며 인터럽트의 처리나 수식의 계산, 서브 루틴의 복귀 번지 저장, 부트 프로그램 호출 등에 사용된다.

Top Point라는 개념을 사용하는데 Top Pointer는 가장 최근에 삽입된 자료 또는 가장 먼저 삭제될 자료를 가리키는 스택 포인터를 의미한다. 삽입시 Top의 값이 증가하며 삭제시 Top의 값이 감소한다.


## 3. 테크
![데크](https://media.geeksforgeeks.org/wp-content/uploads/anod.png)
데크란 삽입과 삭제가 리스트의 양쪽 끝에서 발생할 수 있는 자료구조다.
큐와의 차이점은 단방향이 아닌 양방향이라는 것이다.!