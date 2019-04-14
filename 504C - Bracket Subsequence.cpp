#include<iostream>
#include<cstdio>
#include<malloc.h>
#include<stack>
using namespace std;
#define min(a,b)	((a)<(b)?(a):(b))
#define max(a,b)	((a)>(b)?(a):(b))
#define abs(a)		((a)<0?-(a):(a))
#define mod			1000000007
#define MAX			INT_MAX
#define MIN			INT_MIN
#define ull			unsigned long long
#define ll			long long
#define ul			unsigned long

/*
typedef struct Node {
int pos;
struct Node *next;
struct Node *prev;
}Node;

typedef struct stack {
Node *topNode;
int stackSize;
};

void init(stack *st) {
st->topNode = NULL;
st->stackSize = 0;
}

bool empty(stack *st) {
return st->stackSize == 0;
}

int size(stack *st) {
return st->stackSize;
}

char top(stack *st) {
return st->topNode->pos;
}

void push(stack *st, int posi) {
Node *temp = (Node *)malloc(sizeof(Node));
temp->pos = posi;
temp->next = NULL;
temp->prev = NULL;
if (st->stackSize == 0) {
st->topNode = temp;
}
else {
Node *prevNode = st->topNode;
st->topNode->next = temp;
st->topNode = temp;
st->topNode->prev = prevNode;
}
st->stackSize++;
}
void pop(stack *st) {
Node *temp = st->topNode;
st->topNode = st->topNode->prev;
free(temp);
st->stackSize--;
}

*/
ll n, k;
char str[200005];
bool used[200005] = { false };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	cin >> n >> k;
	cin >> str;
	int marked = 0;
	//stack s;
	//init(&s);
	stack<int>s;
	for (int i = 0; i < n; i++) {
		if (str[i] == '(') {
			s.push(i);
		}
		if (str[i] == ')') {
			used[s.top()] = true;
			used[i] = true;
			marked += 2;
			s.pop();
		}
		if (marked == k)
			break;
	}
	for( int i = 0 ; i < n ; i++ )
		if (used[i]) {
			cout << str[i];
		}
	return 0;
}
