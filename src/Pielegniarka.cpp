#include "Pielegniarka.h"

void Pielegniarka::usuniecie_pacjenta(int numer_pacjenta, vector<Pacjent*> &pacjenciVector)
{
	for (int i = 0; i < pacjenciVector.size(); i++)
	{
		if (pacjenciVector[i]->getNumerPacjenta() == numer_pacjenta) 
		{
			pacjenciVector.erase(pacjenciVector.begin()+i-1);
			break;
		}
	}
}

void Pielegniarka::dodaj_wolny_termin(Date data)
{
	// TODO - implement Pielegniarka::dodaj_wolny_termin
	throw "Not yet implemented";
}
