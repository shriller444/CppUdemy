// this = reserved keyword. 
// contains the address of the object thus a pointer to an object in current use by the class memmber methods. 
// only used in scope of the current class
// all member access done via this pointer

// used by programmer:

// 1) access data member and methods
// 2) determine if 2 objects are identical
// 3) dereference with *this to get the current object
// the same as self as in python. 

// void Account::set_balance(double bal){
//       balance = bal; // this->balacnce is implied (this.balance())
//}

// void Account::set_balance(double balance){
//       balance = balance; // which balance , does point to the data member balance to set its value as we like
//}

// void Account::set_balance(double balance){
//       this->balance = balance; // unambiguous. like forgetting to do self.balance = balance in python. 
//}