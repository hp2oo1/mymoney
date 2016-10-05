#include "TransactionViewModel.h"


namespace myMoneyLib
{
	TransactionViewModel::TransactionViewModel()
	{
	}

	TransactionViewModel::~TransactionViewModel()
	{
	}

	void TransactionViewModel::Load()
	{
		transactionsTotal = repository.LoadData(inputFilename);
	}

	void TransactionViewModel::SetInputFile(std::string filename)
	{
		inputFilename = filename;
	}

	int TransactionViewModel::GetTransactionsTotal()
	{
		return transactionsTotal;
	}

	void TransactionViewModel::Search()
	{
		if (searchTerm == "") 
		{
			transactionsFound = std::vector<Transaction>();
		}
		else
		{
			transactionsFound = repository.SearchTransactions(searchTerm);
		}
	}
	void TransactionViewModel::SetSearchTerm(std::string search)
	{
		searchTerm = search;
	}
	std::vector<Transaction> TransactionViewModel::GetSearchResults()
	{
		return transactionsFound;
	}
}