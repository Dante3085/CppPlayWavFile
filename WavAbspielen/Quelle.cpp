#include <iostream>								//Auf Reihenfolge der #includes achten.
#include <windows.h>			
#include <mmsystem.h>

//Zus�tzlich zu dem was hier zu sehen ist, muss rechts im Explorer, rechte Maustaste auf den Namen des Projektes (WavAbspielen), Eigenschaften, unter Linker, Eingabe, Zus�tzliche Abh�ngigkeiten "winmm.lib" eingef�gt werden.

bool sound_is_playing = false;

int main() {

	PlaySound(TEXT("gun, Pistol _.38 calibre, 38 calibre, 2 shots.wav"), NULL, SND_SYNC);	//Um den Sound abzuspielen. "SND_SYNC" spielt den Sound in Reihenfolge. "SND_ASYNC" spielt den Sound im Hintergrund, sodass alles andere weiterflie�en kann.
	PlaySound(NULL, 0, 0);																	//Um den Sound zu stoppen.

	//Programmende
	system("pause");
	return 0;
}