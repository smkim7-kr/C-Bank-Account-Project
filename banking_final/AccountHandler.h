#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "Account.h"
#include "BoundCheckArray.h"

class AccountHandler{
private:
    BoundCheckArray<Account *> accarr;
    int numOfUsers;
public:
    AccountHandler();
    void StartingMenu(void) const;
    void createAccount(void);
    void deposit(void);
    void withdraw(void);
    void showAllInfo(void) const;
    ~AccountHandler();
    //virtual void moneyDeposit() = 0;
};

#endif
