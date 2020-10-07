/*

c++ standard library exception class hierarchy

C++ provides class hierarchy of exception classes
 - std::exception is the base class
 - all subclasses implement the what() virtual function 
 - we can create our own user defined exception subclasses
 
 virtual const char *what() const no except;
 
 class IllegalBalanceException: public std::exception{
     
 public:
    Illegalbalanceexception() noexcept = default;
    ~IllegalBalanceException() = default;
    virtual cosnt char* what() const noexcept{
        return "Illegal balance Exception"; // standard non specific description of error
      }
     
}

- no except --> tells compilers that these functions do throw exceptions


modified Account class constructor

Account::Account(std::string name, double balance)
    : name{name} , balance{balance}{
        
    if (balance < 0.0)
        throw IllegalBalanceException{}; throws the class object 
}

creating an ccount object

try{
    std::unique_ptr<Account> moesAccount = std::make_unique<Checking_Account>("Moe", -10.0);
    std::cout << "Use moes accoount " << std::endl;
}
catch (const IllegalBalanceException &ex){ // catches the account objects throw of an illegal balance. 
    std::cerr << ex.what() << std::endl;
        // displays illegal balance exception.
    
}
*/