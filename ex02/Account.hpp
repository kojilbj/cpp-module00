// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                      //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#pragma once
#ifndef __ACCOUNT_H__
#	define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account
{

public:
	typedef Account t;

	static int getNbAccounts(void);
	static int getTotalAmount(void);
	static int getNbDeposits(void);
	static int getNbWithdrawals(void);
	static void displayAccountsInfos(void);

	Account(int initialDeposit);
	~Account(void);

	void makeDeposit(int deposit);
	bool makeWithdrawal(int withdrawal);
	int checkAmount(void) const;
	void displayStatus(void) const;

private:
	static int nbAccounts;
	static int totalAmount;
	static int totalNbDeposits;
	static int totalNbWithdrawals;

	static void displayTimestamp(void);

	int accountIndex_;
	int amount_;
	int nbDeposits_;
	int nbWithdrawals_;

	Account(void);
};

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //

#endif /* __ACCOUNT_H__ */
