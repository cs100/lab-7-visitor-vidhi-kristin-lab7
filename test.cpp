#include <iostream>
#include <vector>
#include "composite.h"

using namespace std;

int main() {

	Op* op3 = new Op(3);
	Op* op4 = new Op(4);
	Op* op2 = new Op(2);
	Add* add = new Add(op3, op4);
	Sqr* sqr = new Sqr(op2);
	Sub* sub = new Sub(add, sqr);
	Root* root = new Root(sub);

cout << "Full Equation: (3 + 4) - (2 ^ 2)" << endl; 

	cout << "--- PreOrder Iteration ---" << endl;
	PreorderIterator* pre_itr = new PreorderIterator(root);
	for(pre_itr->first(); !pre_itr->is_done(); pre_itr->next()) {
		pre_itr->current()->print();
		cout << endl;
	}
	};


	//******************************************************
		
// 	Op* o1 = new Op(1);
// 	Op* o2 = new Op(2);
// 	Op* o3 = new Op(3);
// 	Op* o4 = new Op(4);
// 	Op* o5 = new Op(5);
// 	Op* o6 = new Op(6);
// 	Op* o7 = new Op(7);
// 	Add* add2_1 = new Add(o1, o2);
// 	Mult* mul2_1 = new Mult(o3, o4);
// 	Sub* sub2_1 = new Sub(o6, o5);
// 	Sqr* sqr2_1 = new Sqr(o7);
	
// 	Add* add2_2 = new Add(add2_1, mul2_1);
// 	Add* add2_3 = new Add(sub2_1, sqr2_1);
	
// 	Sub* sub2_2 = new Sub(add2_2, add2_3);
	
// 	Root* root = new Root(sub2_2);
	
// 	cout << endl;
	
// 	cout << "Equation: [(1 + 2) + (3 * 4)] - [(6 - 5) + 7^2]" << endl;
	
// 	cout << "--- PreOrder Iteration ---" << endl;
// PreorderIterator* pre_itr = new PreorderIterator(root);
// 	for(pre_itr->first(); !pre_itr->is_done(); pre_itr->next()) {
// 		pre_itr->current()->print();
// 		cout << endl;
// 	}
// };
	
	
	//******************************************************
	
	
	// Op* newO3_3 = new Op(3);
	// Op* newO2_3 = new Op(2);
	// Op* newO4_3 = new Op(4);
	// Op* newO1_3 = new Op(1);
	// Sub* newSub3_1 = new Sub(newO3_3, newO2_3);
	// Sqr* newSqr3_1 = new Sqr(newO4_3);
	// Add* newAdd3_1 = new Add(newSub3_1, newSqr3_1);
	// Sub* newSub3_2 = new Sub(newAdd3_1, newO1_3);
	// Root* root = new Root(newSub3_2);
	
	// cout << endl;
	
	// cout << "Equation: ((3 - 2) + 4^2) - 1" << endl;
	
	// cout << "--- PreOrder Iteration ---" << endl;
	// PreorderIterator* pre_itr = new PreorderIterator(root);
	// for(pre_itr->first(); !pre_itr->is_done(); pre_itr->next()) {
	// 	pre_itr->current()->print();
	// 	cout << endl;
	// }
	// };