//
// Created by Roman Malkevych on 7/11/17.
//

//#include "ISquad.h"
//#include "ISpaceMarine.h"
#include "Squad.h"
#include "AssaultTerminator.h"
#include "TacticalMarine.h"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}