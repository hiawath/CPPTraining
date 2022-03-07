#include "Main.h"
void list41();
void list42();

int main() {

	list41();
	list42();

}
void list41() {

	list<Item> Itemlist;

	//�տ� ������ �߰�
	Item item1(1, 2000);
	Itemlist.push_front(item1);

	Item item2(2, 1000);
	Itemlist.push_front(item2);

	Item item3(3, 3000);
	Itemlist.push_back(item3);

	Item item4(4, 4500);
	Itemlist.push_back(item4);

	list<Item>::iterator iterEnd = Itemlist.end();
	for (list<Item>::iterator iterPos = Itemlist.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "������ �ڵ�:" << iterPos->ItemCd << endl;
	}


	Itemlist.pop_front();

	Item front_item = Itemlist.front();

	cout << "������ �ڵ�: " << front_item.ItemCd << endl;

	Itemlist.pop_back();

	Item back_item = Itemlist.back();
	cout << "������ �ڵ�: " << back_item.ItemCd << endl;

	if (false == Itemlist.empty()) {
		list<Item >::size_type Count = Itemlist.size();
		cout << "���� �ִ� ������ ����: " << Count << endl;
	}

	Itemlist.clear();
	list<Item > ::size_type Count = Itemlist.size();
	cout << "���� �ִ� ������ ���� : " << Count << endl;
}
void list42() {
	list<int> list1;

	list1.push_back(20);
	list1.push_back(30);

	cout << "�����׽�Ʈ 1" << endl;

	list<int>::iterator iterInsertPos = list1.begin();
	list1.insert(iterInsertPos, 100);

	list<int>::iterator iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list 1 : " << *iterPos << endl;
	}
	cout << endl << "���� �׽�Ʈ 2 " << endl;

	iterInsertPos = list1.begin();
	++iterInsertPos;
	list1.insert(iterInsertPos, 2, 200);

	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list 1 : " << *iterPos << endl;
	}
	cout << endl << "���� �׽�Ʈ 3" << endl;

	list<int> list2;
	list2.push_back(1000);
	list2.push_back(2000);
	list2.push_back(3000);

	iterInsertPos = list1.begin();
	list1.insert(++iterInsertPos, list2.begin(), list2.end());

	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin();
		iterPos != iterEnd;
		++iterPos) {
		cout << "list 1 : " << *iterPos << endl;
	}
}