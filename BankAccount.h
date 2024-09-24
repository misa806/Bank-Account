// Misael Lopez Programming Assignment #1- BankAccount.h

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#using namespace std;

class BankAccount {
private:
    string customerName;
    double chBalance;
    double sBalance;

public:
    BankAccount(std::string newName, double amt1, double amt2);
    
    //void SetName(string newName) - set the customer name to parameter newname 
      string GetName() - return the customer name

    void SetName(string newName);
    string GetName() const;

    // void SetChecking(double balance) - set the checking account balance to parameter balance
       double GetChecking() - return the checking account balance

    void SetChecking(double amt);
    double GetChecking() const;

    // void SetSavings(double balance) - set the savings account balance to parameter balance
       double GetSavings() - return the savings account balance

    void SetSavings(double amt);
    double GetSavings() const;

    // void DepositChecking(double amt) - add parameter amt to the checking account balance (only if positive) 
       void DepositSavings(double amt) - add parameter amt to the savings account balance (only if positive)

    void DepositChecking(double amt);
    void WithdrawChecking(double amt);

    // void WithdrawChecking(double amt) - subtract parameter amt from the checking account balance (only if positive)
       void WithdrawSavings(double amt) - subtract parameter amt from the savings account balance (only if positive)

    void DepositSavings(double amt);
    void WithdrawSavings(double amt);

    // void TransferToSavings(double amt) - subtract parameter amt from the checking account balance and add to the savings account balance (only if positive)

    void TransferToSavings(double amt);
};

#endif