#include "cUser.h"

User::User(sUs_initials auth)
{
	initials = auth;
}

User::sUs_initials User::retName()
{
	return initials;
}

vector<�assette>& User::retBooks()
{
	return casseteGoted;
}

void User::putBook(�assette cc)
{
	casseteGoted.push_back(cc);
}
