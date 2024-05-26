#include "cUser.h"

User::User(sUs_initials auth)
{
	initials = auth;
}

User::sUs_initials User::retName()
{
	return initials;
}

vector<Ñassette>& User::retBooks()
{
	return casseteGoted;
}

void User::putBook(Ñassette cc)
{
	casseteGoted.push_back(cc);
}
