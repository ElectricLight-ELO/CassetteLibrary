#include "c�assette.h"

�assette::�assette(string nam, sAuthor auth, int price)
{
	name = nam;
	author = auth;
	RentMoneyDay = price;
}

string �assette::GetName()
{
	return name;
}

�assette::sAuthor �assette::GetAuthor()
{
	return author;
}

int �assette::GetInfoTaking()
{
	return taked;
}

void �assette::PutDate(DateReceiv dRc, DateReturn dRt, int allPrice)
{
	dateRec = dRc;
	dateRet = dRt;
	RentMoneyAll = allPrice;
	taked++;
}

void �assette::RemoveDate()
{
	DateReceiv d1;
	DateReturn d2;
	d1.day = 0;
	d1.month = 0;
	d1.year = 0;
	d2.day = 0;
	d2.month = 0;
	d2.year = 0;

	dateRec = d1;
	dateRet = d2;
}

�assette::DateReceiv �assette::GetDateReceiv()
{
	return dateRec;
}

�assette::DateReturn �assette::GetDateReturn()
{
	return dateRet;
}

int �assette::GetPriceDay()
{
	return RentMoneyDay;
}

int �assette::GetPriceRent()
{
	return RentMoneyAll;
}

void �assette::RemovePriceRent()
{
	RentMoneyAll = 0;
}
