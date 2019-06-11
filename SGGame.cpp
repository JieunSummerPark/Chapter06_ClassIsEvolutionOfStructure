#include "SpeedGuguGame.h"
void main()
{
	srand((unsigned)time(NULL));

	int nPlay;

	printf("몇 번 게임을 하고 싶습니까? => ");
	scanf_s("%d", &nPlay);

	printf("\n\n[스피드구구단게임]\n\n");
	printf(" 당신의 구구단 실력을 테스트하세요!!!\n");
	printf(" %d번 테스트 하겠습니다.\n", nPlay);
	printf(" 크게 심호흡 하시고...\n 준비되면 엔터를 누르세요...\n\n");
	getchar();
	//system("cls");	// 콘솔 화면을 깨끗이 지움

	SpeedGuguGame game;
	double score = game.play(nPlay);
	printf("\n점수 = %4.1f점 (총 %4.1f초)\n", score, game.tElapsed);

	/*
	double score = playSpeedGugu(nPlay);
	printf("\n점수 = %4.1f점 (총 %4.1f초)\n", score, tElapsed);
	*/
}