//  Name        : Jessie Gayeon Ko
//  Student ID  : 040 704 124
//  Email       : gko4@myseneca.ca
//  Section     : OPP244SGG
//  Date        : Mar 27 2018
//  Virtual Functions

#ifndef SICT_SAVINGSACCOUNT_H__
#define SICT_SAVINGSACCOUNT_H__

#include <iostream>
#include "Account.h"

namespace sict {
    
    class SavingsAccount : public Account{ // An concrete class
        
        double m_interest;
	
	public:
			// TODO: constructor initializes balance and interest rate
        SavingsAccount(double bal, double interest): Account(bal)
        {m_interest = interest > 0 ? interest : 0;} // conditional ternary operator 

			// TODO: perform month end transactions
        virtual void monthEnd();

			// TODO: display inserts the account information into an ostream			
        virtual void display(std::ostream&) const;
	};
}
#endif
