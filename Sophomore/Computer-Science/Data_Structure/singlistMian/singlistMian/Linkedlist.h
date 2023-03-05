#pragma once
#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* link; // �� ����ü ��ü�� ����Ű�� �������̹Ƿ� struct���� ����
};

struct HeadNode {
	Node* head; // Node�� ����Ű�� ������, head
};

class Singlist {

public:
	/*����Ʈ ����, ����� */
	HeadNode* createList() {
		HeadNode* H = new HeadNode; // HeadNode�� ����Ű�� ������, H
		H->head = NULL;
		return H;
	}

	/* ����Ʈ�� �������� ��� ����*/
	void addNode(HeadNode* H, int x) {
		Node* NewNode = new Node;  //���� ���� ��� 
		Node* LastNode; //���� �ִ� ����� ������ ���
		NewNode->data = x;
		NewNode->link = NULL;

		if (H->head == NULL) { // ����Ʈ�� ������� ���
			H->head = NewNode;
			return;
		}

		LastNode = H->head;   // ����Ʈ�� ������� ���� ��쿡 ���Ḯ��Ʈ�� ���� ó�� ��尡 LastNode�� ����Ű�� �Ѵ�.
		while (LastNode->link != NULL) LastNode = LastNode->link; // ���Ḯ��Ʈ�� ������ ��带 ã�� ����
		LastNode->link = NewNode; // ������ ��带 ã�� while���� ������ �ڿ� �� ��带 ����Ű�� �Ѵ�.
	}

	/* ����Ʈ�� ������ ��� ����*/
	void deleteNode(HeadNode* H) {
		Node* prevNode;  // �����Ǵ� ����� �� ���
		Node* delNode;  // �����Ǵ� ���

		if (H->head == NULL) return; // ����Ʈ�� �� ���
		if (H->head->link == NULL) { // �� ���� ��常 ���� ���
			delete H->head;  // head�� ����Ű�� �޸� ������ �� ������ ��ȯ
			H->head = NULL;  // ��� ����� link �κ��� head�� null�� ����.
			return;
		}
		else {  // ����Ʈ�� ��� ���� �� �ִ� ���
			prevNode = H->head; // ��� ��尡 ����Ű�� ��尡 prevNode�� �ǰ� ����
			delNode = H->head->link; // prevNode ���� ��ġ�� delNode ����
			while (delNode->link != NULL) { //delNode�� ��������尡 �� ������
				prevNode = delNode;       // prevNode�� ��ĭ�� ����
				delNode = prevNode->link; // delNode�� ��ĭ�� ������ ����.
			}
			free(delNode);  // ������ ����� �޸� ������ ��ȯ
			prevNode->link = NULL;
		}
	}

	/* ����Ʈ�� Ư�� ��� ����*/
	void deleteThisNode(HeadNode* H, int deldata) {
		Node* delNode;  // �����Ϸ��� ���
		Node* prevNode; // �����Ϸ��� ����� �� ���
		prevNode = H->head;

		while (prevNode->link->data != deldata) {
			prevNode = prevNode->link;
		}

		delNode = prevNode->link;   // prevNode�� ����Ű�� ��尡 ������ ���
		prevNode->link = delNode->link;  // prevNode�� delNode ���� ��带 ����Ű����
		free(delNode);  // delNode ����

		cout << deldata << " ������ ���� ���� ��尡 �����ƽ��ϴ�." << endl;
		return;
	}

	/* ����Ʈ�� Ư�� ��� ����*/
	void addThisNode(HeadNode* H, int afterthisdata, int adddata) {
		// afterthisdata: �� ������ �ڿ� �����ϰ� �ͼ�.
		// adddata: �� �����͸� �����ϰ� �ͼ�.

		Node* prevNode;  //�����Ϸ��� ����� ���� ���
		prevNode = H->head;

		while (prevNode->data != afterthisdata) {
			prevNode = prevNode->link;
		}

		Node* NewNode = new Node;
		NewNode->data = adddata;
		NewNode->link = prevNode->link;
		prevNode->link = NewNode;
		return;
	}

	/* ����Ʈ�� Ư�� ��� �˻�*/
	void searchNode(HeadNode* H, int thisdata) {
		Node* someNode;
		someNode = H->head;

		while (someNode->data != thisdata) {
			someNode = someNode->link;
		}
		cout << thisdata << " �����͸� �˻��ϴ� �� �����߽��ϴ�." << endl;
	}

	/* ���Ḯ��Ʈ ���*/
	void printList(HeadNode* L) {
		//��� ������� ����Ʈ ���
		Node* p;
		cout << "���Ḯ��Ʈ ��� = ( ";
		p = L->head;

		while (p != NULL) {
			cout << p->data;
			p = p->link;
			if (p != NULL) cout << " --> ";
		}
		cout << " )" << endl;
	}
};