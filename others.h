#define RAIN		(Stride == 20 && (NumVertices == 4096 && primCount == 2048))
#define FULLBRIGHT	((NumVertices == 4))
#define SMOKE		((NumVertices == 16384))
#define WALLS		((Stride == 44))
#define Scope1		((NumVertices == 374 && primCount == 286) || (NumVertices == 841 && primCount == 648) || (NumVertices == 743 && primCount == 620) )
#define Scope2		((NumVertices == 785 && primCount == 606) || (NumVertices == 48 && primCount == 30) || (NumVertices == 202 && primCount == 126) )
#define Scope3		((NumVertices == 640 && primCount == 492) || (NumVertices == 374 && primCount == 286) || (NumVertices == 174 && primCount == 106) || (NumVertices == 55 && primCount == 36) || (NumVertices == 232 && primCount == 146) )
#define Scope4		((NumVertices == 299 && primCount == 242) || (NumVertices == 739 && primCount == 576) || (NumVertices == 59 && primCount == 38) || (NumVertices == 497 && primCount == 368) || (NumVertices == 315 && primCount == 250))
#define SniperScope (Stride == 32 && (NumVertices == 16 && primCount == 6))
#define claymore ((NumVertices == 469 && primCount == 316) || (NumVertices == 262 && primCount == 160) || (NumVertices == 68 && primCount == 34))
#define OpforAssualt ((NumVertices == 3124 && primCount == 4132) || (NumVertices == 1970 && primCount == 2186) || (NumVertices == 1252 && primCount == 1160) || (NumVertices == 470 && primCount == 352))
#define OpforGunnermen ((NumVertices == 2715 && primCount == 3588) || (NumVertices == 1620 && primCount == 1886) || (NumVertices == 943 && primCount == 908) || (NumVertices == 441 && primCount == 308))
#define OpforSniper ((NumVertices == 250 && primCount == 304) || (NumVertices == 2818 && primCount == 3672) || (NumVertices == 150 && primCount == 142) || (NumVertices == 1715 && primCount == 1950) || (NumVertices == 1101 && primCount == 1066) || (NumVertices == 481 && primCount == 350)) || ( (NumVertices == 2816 && primCount == 3642) || (NumVertices == 1773 && primCount == 2022) || (NumVertices == 1150 && primCount == 1086) || (NumVertices == 435 && primCount == 320))
#define Opfor ((NumVertices == 3531 && primCount == 4526) || (NumVertices == 2188 && primCount == 2386) || (NumVertices == 1325 && primCount == 1194) || (NumVertices == 499 && primCount == 352))
#define MarinesAssault ((NumVertices == 2613 && primCount == 3248) || (NumVertices == 1842 && primCount == 1978) || (NumVertices == 1144 && primCount == 814) || (NumVertices == 1034 && primCount == 904) || (NumVertices == 447 && primCount == 312))
#define MarinesGunnremen ((NumVertices == 3597 && primCount == 4280) || (NumVertices == 2301 && primCount == 2364) || (NumVertices == 1341 && primCount == 1132) || (NumVertices == 580 && primCount == 380))
#define MarinesSniper ((NumVertices == 2516 && primCount == 2940) || (NumVertices == 681 && primCount == 588) || (NumVertices == 106 && primCount == 114) || (NumVertices == 1726 && primCount == 1760) || (NumVertices == 1020 && primCount == 872) || (NumVertices == 587 && primCount == 370))
#define Marines ((NumVertices == 689 && primCount == 1172) || (NumVertices == 367 && primCount == 298) || (NumVertices == 4050 && primCount == 4486) || (NumVertices == 308 && primCount == 212) || (NumVertices == 2540 && primCount == 2444) || (NumVertices == 628 && primCount == 670) || (NumVertices == 1488 && primCount == 1114) || (NumVertices == 105 && primCount == 74) || (NumVertices == 592 && primCount == 374))
#define Marines2 ((NumVertices == 3790 && primCount == 4078) || (NumVertices == 2784 && primCount == 2384) || (NumVertices == 1572 && primCount == 1166) || (NumVertices == 634 && primCount == 372) || (NumVertices == 233 && primCount == 330))
#define SpetzAssualt ((NumVertices == 4358 && primCount == 4864) || (NumVertices == 3278 && primCount == 3188) || (NumVertices == 503 && primCount == 704) || (NumVertices == 1633 && primCount == 1332) || (NumVertices == 840 && primCount == 618) || (NumVertices == 783 && primCount == 1168))
#define SpetzGunnermen ((NumVertices == 4270 && primCount == 4804) || (NumVertices == 2755 && primCount == 2494) || (NumVertices == 1317 && primCount == 1054) || (NumVertices == 809 && primCount == 590))
#define SPETZ_SNIPER ((NumVertices == 726 && primCount == 556) || (NumVertices == 1315 && primCount == 1170) || (NumVertices == 2140 && primCount == 2310) || (NumVertices == 3326 && primCount == 4336) || (NumVertices == 2578 && primCount == 2192) || (NumVertices == 482 && primCount == 476) || (NumVertices == 3254 && primCount == 4122) || (NumVertices == 1730 && primCount == 1938) || (NumVertices == 398 && primCount == 410) || (NumVertices == 327 && primCount == 500) || (NumVertices == 2388 && primCount == 2040) || (NumVertices == 222 && primCount == 298) || (NumVertices == 1111 && primCount == 986) || (NumVertices == 1186 && primCount == 1184) || (NumVertices == 339 && primCount == 248) || (NumVertices == 994 && primCount == 714))
#define Spetz ((NumVertices == 4242 && primCount == 5028) || (NumVertices == 2391 && primCount == 2488) || (NumVertices == 1689 && primCount == 1422) || (NumVertices == 384 && primCount == 250) || (NumVertices == 969 && primCount == 708))
#define Spetz2 ((NumVertices == 793 && primCount == 834) || (NumVertices == 3891 && primCount == 4598) || (NumVertices == 592 && primCount == 532) || (NumVertices == 2510 && primCount == 2470) || (NumVertices == 171 && primCount == 114) || (NumVertices == 1398 && primCount == 1176) || (NumVertices == 384 && primCount == 250) || (NumVertices == 384 && primCount == 250) || (NumVertices == 994 && primCount == 714) || (NumVertices == 529 && primCount == 540) || (NumVertices == 353 && primCount == 346))
#define SASAssualt ((NumVertices == 447 && primCount == 312) || (NumVertices == 1034 && primCount == 904) || (NumVertices == 1842 && primCount == 1978) || (NumVertices == 2613 && primCount == 3248) || (NumVertices == 1001 && primCount == 964) || (NumVertices == 3935 && primCount == 5226) || (NumVertices == 960 && primCount == 1072) || (NumVertices == 2640 && primCount == 3070) || (NumVertices == 212 && primCount == 288) || (NumVertices == 214 && primCount == 202) || (NumVertices == 1373 && primCount == 1256) || (NumVertices == 585 && primCount == 440))
#define SASGunnermen ((NumVertices == 193 && primCount == 140) || (NumVertices == 580 && primCount == 380) || (NumVertices == 1341 && primCount == 1132) || (NumVertices == 802 && primCount == 800) || (NumVertices == 2301 && primCount == 2364) || (NumVertices == 275 && primCount == 322) || (NumVertices == 3597 && primCount == 4280) || (NumVertices == 3716 && primCount == 5064) || (NumVertices == 2578 && primCount == 2994) || (NumVertices == 1412 && primCount == 1330) || (NumVertices == 568 && primCount == 470))
#define SASSniper ((NumVertices == 1615 && primCount == 1706) || (NumVertices == 541 && primCount == 366) || (NumVertices == 3667 && primCount == 4952) || (NumVertices == 2460 && primCount == 2882) || (NumVertices == 1479 && primCount == 1402) || (NumVertices == 552 && primCount == 452)) 
#define SAS ((NumVertices == 634 && primCount == 372) || (NumVertices == 1572 && primCount == 1166) || (NumVertices == 2784 && primCount == 2384) || (NumVertices == 3790 && primCount == 4078) || (NumVertices == 3585 && primCount == 4858) || (NumVertices == 1498 && primCount == 1304) || (NumVertices == 2525 && primCount == 3022) || (NumVertices == 695 && primCount == 478)) 
#define SAS2 ((NumVertices == 689 && primCount == 1172) || (NumVertices == 367 && primCount == 298) || (NumVertices == 4050 && primCount == 4486) || (NumVertices == 308 && primCount == 212) || (NumVertices == 2540 && primCount == 2444) || (NumVertices == 628 && primCount == 670) || (NumVertices == 1488 && primCount == 1114) || (NumVertices == 105 && primCount == 74) || (NumVertices == 592 && primCount == 374) || (NumVertices == 3562 && primCount == 4784) || (NumVertices == 2509 && primCount == 2954) || (NumVertices == 1402 && primCount == 1164) || (NumVertices == 628 && primCount == 450))
#define grenade ((NumVertices == 374 && primCount == 438) || (NumVertices == 30 && primCount == 22) )
#define OpforHands ( NumVertices == 156 && primCount == 240 )
#define MarinesHands ( NumVertices == 718 && primCount == 1236 )
#define SpetzHands ( NumVertices == 1926 && primCount == 3128)
#define SASHands (NumVertices == 2138)
#define Sas_Gunner \
((NumVertices == 394 && primCount == 274 && Stride == 32) || \
(NumVertices == 716 && primCount == 962 && Stride == 32) || \
(NumVertices == 275 && primCount == 322 && Stride == 32) || \
(NumVertices == 127 && primCount == 124 && Stride == 32) || \
(NumVertices == 178 && primCount == 166 && Stride == 32) || \
(NumVertices == 3597 && primCount == 4280 && Stride == 32) || \
(NumVertices == 2301 && primCount == 2364 && Stride == 32) || \
(NumVertices == 828 && primCount == 1300 && Stride == 32) || \
(NumVertices == 493 && primCount == 688 && Stride == 32) || \
(NumVertices == 90 && primCount == 140 && Stride == 32) || \
(NumVertices == 802 && primCount == 800 && Stride == 32) || \
(NumVertices == 193 && primCount == 140 && Stride == 32) || \
(NumVertices == 1341 && primCount == 1132 && Stride == 32) || \
(NumVertices == 580 && primCount == 380 && Stride == 32))

#define Sas_Demolition \
((NumVertices == 367 && primCount == 298 && Stride == 32) || \
(NumVertices == 686 && primCount == 952 && Stride == 32) || \
(NumVertices == 308 && primCount == 212 && Stride == 32) || \
(NumVertices == 568 && primCount == 698 && Stride == 32) || \
(NumVertices == 306 && primCount == 274 && Stride == 32) || \
(NumVertices == 4050 && primCount == 4486 && Stride == 32) || \
(NumVertices == 2540 && primCount == 2444 && Stride == 32) || \
(NumVertices == 689 && primCount == 1172 && Stride == 32) || \
(NumVertices == 90 && primCount == 140 && Stride == 32) || \
(NumVertices == 628 && primCount == 670 && Stride == 32) || \
(NumVertices == 105 && primCount == 74 && Stride == 32) || \
(NumVertices == 1488 && primCount == 1114 && Stride == 32) || \
(NumVertices == 592 && primCount == 374 && Stride == 32))

#define Sas_Sniper \
((NumVertices == 438 && primCount == 376 && Stride == 32) || \
(NumVertices == 2334 && primCount == 2826 && Stride == 32) || \
(NumVertices == 177 && primCount == 120 && Stride == 32) || \
(NumVertices == 1615 && primCount == 1706 && Stride == 32) || \
(NumVertices == 822 && primCount == 1084 && Stride == 32) || \
(NumVertices == 562 && primCount == 632 && Stride == 32) || \
(NumVertices == 698 && primCount == 1200 && Stride == 32) || \
(NumVertices == 357 && primCount == 566 && Stride == 32) || \
(NumVertices == 49 && primCount == 50 && Stride == 32) || \
(NumVertices == 470 && primCount == 506 && Stride == 32) || \
(NumVertices == 71 && primCount == 50 && Stride == 32) || \
(NumVertices == 1021 && primCount == 872 && Stride == 32) || \
(NumVertices == 541 && primCount == 366 && Stride == 32))

#define Sniper_Camouflage \
((NumVertices == 2578  && primCount == 2192 && Stride == 32) || \
(NumVertices == 398  && primCount == 410 && Stride == 32) || \
(NumVertices == 2388  && primCount == 2040 && Stride == 32) || \
(NumVertices == 222  && primCount == 298 && Stride == 32) || \
(NumVertices == 1186  && primCount == 1184 && Stride == 32) || \
(NumVertices == 71  && primCount == 66 && Stride == 32) || \
(NumVertices == 339  && primCount == 248 && Stride == 32))

#define Claymore_Mines \
((NumVertices == 262 && primCount == 160 && Stride == 32) || \
(NumVertices == 469 && primCount == 316 && Stride == 32) || \
(NumVertices == 68 && primCount == 34 && Stride == 32) || \
(NumVertices == 627 && primCount == 476 && Stride == 32))

#define C4_Charge \
((NumVertices == 1862 && primCount == 1372 && Stride == 32) || \
(NumVertices == 40 && primCount == 28 && Stride == 32) || \
(NumVertices == 500 && primCount == 328 && Stride == 32))

#define Frag_Grenade \
((NumVertices == 321 && primCount == 480 && Stride == 32) || \
(NumVertices == 374 && primCount == 438 && Stride == 32) || \
(NumVertices == 30 && primCount == 22 && Stride == 32))

#define Flash_Grenade \
((NumVertices == 194 && primCount == 226 && Stride == 32) || \
(NumVertices == 275 && primCount == 184 && Stride == 32) || \
(NumVertices == 341 && primCount == 256 && Stride == 32) || \
(NumVertices == 196 && primCount == 130 && Stride == 32) || \
(NumVertices == 50 && primCount == 32 && Stride == 32))

#define Cobra_Helicopter \
((NumVertices == 2335 && primCount == 2166 && Stride == 32) || \
(NumVertices == 275 && primCount == 182 && Stride == 32) || \
(NumVertices == 323 && primCount == 306 && Stride == 32) || \
(NumVertices == 961 && primCount == 656 && Stride == 32) || \
(NumVertices == 278 && primCount == 184 && Stride == 32) || \
(NumVertices == 64 && primCount == 32 && Stride == 32) || \
(NumVertices == 36 && primCount == 24 && Stride == 32) || \
(NumVertices == 76 && primCount == 38 && Stride == 32))

#define Mi28_Helicopter \
((NumVertices == 902 && primCount == 664 && Stride == 32) || \
(NumVertices == 219 && primCount == 118 && Stride == 32) || \
(NumVertices == 1724 && primCount == 1466 && Stride == 32) || \
(NumVertices == 3437 && primCount == 2646 && Stride == 32) || \
(NumVertices == 32 && primCount == 18 && Stride == 32))

#define M40A3_Sniper_handheld \
((NumVertices == 284 && primCount == 272 && Stride == 32) || \
(NumVertices == 841 && primCount == 648 && Stride == 32) || \
(NumVertices == 13 && primCount == 12 && Stride == 32) || \
(NumVertices == 1024 && primCount == 690 && Stride == 32) || \
(NumVertices == 45 && primCount == 34 && Stride == 32))

#define M40A3_Sniper_ACOG_handheld \
((NumVertices == 739 && primCount == 576 && Stride == 32) || \
(NumVertices == 284 && primCount == 272 && Stride == 32) || \
(NumVertices == 1024 && primCount == 690 && Stride == 32) || \
(NumVertices == 9 && primCount == 8 && Stride == 32) || \
(NumVertices == 8 && primCount == 6 && Stride == 32) || \
(NumVertices == 48 && primCount == 30 && Stride == 32) || \
(NumVertices == 45 && primCount == 34 && Stride == 32))

#define W1200_Shotgun_NOATTACH_handheld \
((NumVertices == 232 && primCount == 184 && Stride == 32) || \
(NumVertices == 134 && primCount == 112 && Stride == 32) || \
(NumVertices == 546 && primCount == 444 && Stride == 32) || \
(NumVertices == 1204 && primCount == 918 && Stride == 32) || \
(NumVertices == 190 && primCount == 148 && Stride == 32))

#define W1200_Shotgun_REDDOT_handheld \
((NumVertices == 374 && primCount == 286 && Stride == 32) || \
(NumVertices == 232 && primCount == 184 && Stride == 32) || \
(NumVertices == 134 && primCount == 112 && Stride == 32) || \
(NumVertices == 546 && primCount == 444 && Stride == 32) || \
(NumVertices == 6 && primCount == 4 && Stride == 32) || \
(NumVertices == 1204 && primCount == 918 && Stride == 32) || \
(NumVertices == 190 && primCount == 148 && Stride == 32))

#define M249SAW_NOATTACH_handheld \
((NumVertices == 1055 && primCount == 728 && Stride == 32) || \
(NumVertices == 171 && primCount == 120 && Stride == 32) || \
(NumVertices == 337 && primCount == 248 && Stride == 32) || \
(NumVertices == 640 && primCount == 524 && Stride == 32) || \
(NumVertices == 514 && primCount == 434 && Stride == 32) || \
(NumVertices == 246 && primCount == 216 && Stride == 32))

#define M249SAW_REDDOT_handheld \
((NumVertices == 374 && primCount == 286 && Stride == 32) || \
(NumVertices == 1055 && primCount == 728 && Stride == 32) || \
(NumVertices == 640 && primCount == 524 && Stride == 32) || \
(NumVertices == 337 && primCount == 248 && Stride == 32) || \
(NumVertices == 246 && primCount == 216 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 6 && primCount == 4 && Stride == 32))

#define M249SAW_GRIP_handheld \
((NumVertices == 1055 && primCount == 728 && Stride == 32) || \
(NumVertices == 171 && primCount == 120 && Stride == 32) || \
(NumVertices == 337 && primCount == 248 && Stride == 32) || \
(NumVertices == 640 && primCount == 524 && Stride == 32) || \
(NumVertices == 514 && primCount == 434 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 171 && primCount == 124 && Stride == 32) || \
(NumVertices == 246 && primCount == 216 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32))

#define M249SAW_ACOG_handheld \
((NumVertices == 785 && primCount == 606 && Stride == 32) || \
(NumVertices == 1055 && primCount == 728 && Stride == 32) || \
(NumVertices == 640 && primCount == 524 && Stride == 32) || \
(NumVertices == 337 && primCount == 248 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 52 && primCount == 32 && Stride == 32) || \
(NumVertices == 9 && primCount == 8 && Stride == 32) || \
(NumVertices == 8 && primCount == 6 && Stride == 32) || \
(NumVertices == 246 && primCount == 216 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32))


#define MP5NAVY_NOATTACH_handheld \
((NumVertices == 1329 && primCount == 1038 && Stride == 32) || \
(NumVertices == 164 && primCount == 138 && Stride == 32) || \
(NumVertices == 468 && primCount == 384 && Stride == 32))

#define MP5NAVY_SIL_handheld \
((NumVertices == 1367 && primCount == 1068 && Stride == 32) || \
(NumVertices == 58 && primCount == 56 && Stride == 32) || \
(NumVertices == 322 && primCount == 264 && Stride == 32) || \
(NumVertices == 164 && primCount == 138 && Stride == 32))

#define MP5NAVY_REDDOT_handheld \
((NumVertices == 1329 && primCount == 1038 && Stride == 32) || \
(NumVertices == 164 && primCount == 138 && Stride == 32) || \
(NumVertices == 299 && primCount == 242 && Stride == 32) || \
(NumVertices == 374 && primCount == 286 && Stride == 32) || \
(NumVertices == 299 && primCount == 242 && Stride == 32) || \
(NumVertices == 202 && primCount == 126 && Stride == 32) || \
(NumVertices == 468 && primCount == 384 && Stride == 32) || \
(NumVertices == 6 && primCount == 4 && Stride == 32))

#define MP5NAVY_ACOG_handheld \
((NumVertices == 640 && primCount == 492 && Stride == 32) || \
(NumVertices == 202 && primCount == 126 && Stride == 32) || \
(NumVertices == 1329 && primCount == 1038 && Stride == 32) || \
(NumVertices == 164 && primCount == 138 && Stride == 32) || \
(NumVertices == 468 && primCount == 384 && Stride == 32) || \
(NumVertices == 9 && primCount == 8 && Stride == 32) || \
(NumVertices == 8 && primCount == 6 && Stride == 32) || \
(NumVertices == 48 && primCount == 30 && Stride == 32))

#define M16A4_NOATTACH_handheld \
((NumVertices == 1600 && primCount == 978 && Stride == 32) || \
(NumVertices == 188 && primCount == 140 && Stride == 32) || \
(NumVertices == 775 && primCount == 570 && Stride == 32))

#define M16A4_GL_handheld \
((NumVertices == 2122 && primCount == 1430 && Stride == 32) || \
(NumVertices == 299 && primCount == 224 && Stride == 32) || \
(NumVertices == 72 && primCount == 94 && Stride == 32))

#define M16A4_SIL_handheld \
((NumVertices == 775 && primCount == 570 && Stride == 32) || \
(NumVertices == 1764 && primCount == 1070 && Stride == 32) || \
(NumVertices == 50 && primCount == 40 && Stride == 32) || \
(NumVertices == 611 && primCount == 478 && Stride == 32) || \
(NumVertices == 188 && primCount == 140 && Stride == 32))

#define M16A4_REDDOT_handheld \
((NumVertices == 1600 && primCount == 978 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 188 && primCount == 140 && Stride == 32) || \
(NumVertices == 374 && primCount == 286 && Stride == 32))

#define M16A4_ACOG_handheld \
((NumVertices == 1600 && primCount == 978 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 4 && primCount == 2 && Stride == 32) || \
(NumVertices == 188 && primCount == 140 && Stride == 32) || \
(NumVertices == 374 && primCount == 286 && Stride == 32) || \
(NumVertices == 739 && primCount == 576 && Stride == 32) || \
(NumVertices == 9 && primCount == 8 && Stride == 32) || \
(NumVertices == 8 && primCount == 6 && Stride == 32) || \
(NumVertices == 48 && primCount == 30 && Stride == 32))

#define Equipment      ((Claymore_Mines) || (C4_Charge) || (Frag_Grenade) || (Flash_Grenade))
#define Helicopter ( (Cobra_Helicopter) || (Mi28_Helicopter))
#define EnemyHands ((MarinesHands) || (SASHands))
#define FriendHands ((OpforHands) || (SpetzHands))
#define chams1        ((MarinesAssault) || (MarinesGunnremen) || (MarinesSniper) || (Marines) || (Marines2) || (SAS) || (SAS2) || (SASSniper) || (SASGunnermen) || (SASAssualt) )
#define chams2        ((OpforAssualt) || (OpforGunnermen) || (OpforSniper) || (Opfor) || (Spetz) || (Spetz2) || (SPETZ_SNIPER) || (SpetzGunnermen) || (SpetzAssualt) )

HRESULT GenerateTexture(IDirect3DDevice9 *pD3Ddev, IDirect3DTexture9 **ppD3Dtex, DWORD colour32)
{
	if (FAILED(pD3Ddev->CreateTexture(8, 8, 1, 0, D3DFMT_A4R4G4B4, D3DPOOL_MANAGED, ppD3Dtex, NULL)))
		return E_FAIL;

	WORD colour16 = ((WORD)((colour32 >> 28) & 0xF) << 12)
		| (WORD)(((colour32 >> 20) & 0xF) << 8)
		| (WORD)(((colour32 >> 12) & 0xF) << 4)
		| (WORD)(((colour32 >> 4) & 0xF) << 0);

	D3DLOCKED_RECT d3dlr;
	(*ppD3Dtex)->LockRect(0, &d3dlr, 0, 0);
	WORD *pDst16 = (WORD*)d3dlr.pBits;

	for (int xy = 0; xy < 8 * 8; xy++)
		*pDst16++ = colour16;

	(*ppD3Dtex)->UnlockRect(0);

	return S_OK;
}

void *DetourFunction(BYTE *src, const BYTE *dst, const int len) {
	BYTE *jmp = (BYTE*)malloc(len + 5);
	DWORD dwBack;

	VirtualProtect(src, len, PAGE_EXECUTE_READWRITE, &dwBack);
	memcpy(jmp, src, len);
	jmp += len;
	jmp[0] = 0xE9;
	*(DWORD*)(jmp + 1) = (DWORD)(src + len - jmp) - 5;
	src[0] = 0xE9;
	*(DWORD*)(src + 1) = (DWORD)(dst - src) - 5;
	for (int i = 5; i<len; i++)  src[i] = 0x90;
	VirtualProtect(src, len, dwBack, &dwBack);
	return (jmp - len);
}

bool DataCompare(const BYTE* Data, const BYTE* HexMask, const char* MatchMask)
{
	for (;*MatchMask;++MatchMask, ++Data, ++HexMask)
	{
		if (*MatchMask == 'x' && *Data != *HexMask)
		{
			return false;
		}
	}
	return (*MatchMask) == NULL;
}

DWORD FindPattern(DWORD Address, DWORD Len, BYTE* HexMask, char* MatchMask)
{
	for (DWORD i = 0; i < Len; i++)
	{
		if (DataCompare((BYTE*)(Address + i), HexMask, MatchMask))
		{
			return (DWORD)(Address + i);
		}
	}
	return NULL;
}

static void XQZ_Wallhack(IDirect3DDevice9* device, LPDIRECT3DTEXTURE9 tex1, LPDIRECT3DTEXTURE9 tex2, D3DPRIMITIVETYPE Type, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT startIndex, UINT primCount)
{
	DWORD dwOldZEnable;
	

	device->SetRenderState(D3DRS_ZENABLE, D3DZB_FALSE);
	device->SetRenderState(D3DRS_ZFUNC, D3DCMP_NEVER);

	device->SetTexture(0, NULL);
	device->SetTexture(0, tex1);

	device->DrawIndexedPrimitive(Type, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);

	device->SetRenderState(D3DRS_ZENABLE, D3DZB_TRUE);
	device->SetRenderState(D3DRS_ZFUNC, D3DCMP_LESSEQUAL);
	device->SetTexture(0, tex2);
}

#define RED D3DCOLOR_ARGB(255, 255, 0, 0)
#define GREEN D3DCOLOR_ARGB(255, 0, 255, 0)
#define BLUE D3DCOLOR_ARGB(255, 0, 0, 255)
#define WHITE D3DCOLOR_ARGB(255, 255, 255, 255)
#define BLACK D3DCOLOR_ARGB(255, 0, 0, 0)
#define YELLOW D3DCOLOR_ARGB(255, 255, 255, 0)
#define TEAL D3DCOLOR_ARGB(255, 0, 255, 255)
#define PINK D3DCOLOR_ARGB(255, 255, 240, 0)
#define ORANGE D3DCOLOR_ARGB(255, 255, 132, 0)
#define LIME D3DCOLOR_ARGB(255, 198, 255, 0)
#define SKYBLUE D3DCOLOR_ARGB(255, 0, 180, 255)
#define MAROON D3DCOLOR_ARGB(255, 142, 30, 0)
#define LGRAY D3DCOLOR_ARGB(255, 174, 174, 174) 
#define DGRAY D3DCOLOR_ARGB(255, 71, 65, 64) 
#define BROWN D3DCOLOR_ARGB(255, 77, 46, 38)
#define SHIT D3DCOLOR_ARGB(255, 74, 38, 38)
#define PURPLE D3DCOLOR_ARGB(255, 255, 0, 255)

static void PrintText(CONST CHAR* pString, int x, int y, D3DCOLOR col, ID3DXFont *font)
{
	RECT FontRect = { x, y, x + 500, y + 30 };
	font->DrawTextA(NULL, pString, -1, &FontRect, DT_LEFT | DT_WORDBREAK, col);
}

static void FillRGB(int x, int y, int w, int h, D3DCOLOR color, IDirect3DDevice9* pDevice)
{
	if (w < 0)w = 1;
	if (h < 0)h = 1;
	if (x < 0)x = 1;
	if (y < 0)y = 1;

	D3DRECT rec = { x, y, x + w, y + h };
	pDevice->Clear(1, &rec, D3DCLEAR_TARGET, color, 0, 0);
}

static void DrawBorder(int x, int y, int w, int h, int px, D3DCOLOR BorderColor, IDirect3DDevice9* pDevice)
{
	FillRGB(x, (y + h - px), w, px, BorderColor, pDevice);
	FillRGB(x, y, px, h, BorderColor, pDevice);
	FillRGB(x, y, w, px, BorderColor, pDevice);
	FillRGB((x + w - px), y, px, h, BorderColor, pDevice);
}

static void DrawBox(int x, int y, int w, int h, D3DCOLOR BoxColor, D3DCOLOR BorderColor, IDirect3DDevice9* pDevice)
{
	FillRGB(x, y, w, h, BoxColor, pDevice);
	DrawBorder(x, y, w, h, 1, BorderColor, pDevice);
}



typedef HRESULT(__stdcall* DrawIndexedPrimitive_t)(IDirect3DDevice9*, D3DPRIMITIVETYPE, INT, UINT, UINT, UINT, UINT);
typedef HRESULT(__stdcall* Reset_t)(IDirect3DDevice9*, D3DPRESENT_PARAMETERS*);
typedef HRESULT(__stdcall* EndScene_t)(IDirect3DDevice9*);

/* All Scenes */

/*
Source: https://github.com/arvydas/blinkstick-client/blob/master/Capture/Hook/D3D9.cs

*/
enum scenes {
SCENE_QueryInterface = 0,
SCENE_AddRef = 1,
SCENE_Release = 2,
SCENE_TestCooperativeLevel = 3,
SCENE_GetAvailableTextureMem = 4,
SCENE_EvictManagedResources = 5,
SCENE_GetDirect3D = 6,
SCENE_GetDeviceCaps = 7,
SCENE_GetDisplayMode = 8,
SCENE_GetCreationParameters = 9,
SCENE_SetCursorProperties = 10,
SCENE_SetCursorPosition = 11,
SCENE_ShowCursor = 12,
SCENE_CreateAdditionalSwapChain = 13,
SCENE_GetSwapChain = 14,
SCENE_GetNumberOfSwapChains = 15,
SCENE_Reset = 16,
SCENE_Present = 17,
SCENE_GetBackBuffer = 18,
SCENE_GetRasterStatus = 19,
SCENE_SetDialogBoxMode = 20,
SCENE_SetGammaRamp = 21,
SCENE_GetGammaRamp = 22,
SCENE_CreateTexture = 23,
SCENE_CreateVolumeTexture = 24,
SCENE_CreateCubeTexture = 25,
SCENE_CreateVertexBuffer = 26,
SCENE_CreateIndexBuffer = 27,
SCENE_CreateRenderTarget = 28,
SCENE_CreateDepthStencilSurface = 29,
SCENE_UpdateSurface = 30,
SCENE_UpdateTexture = 31,
SCENE_GetRenderTargetData = 32,
SCENE_GetFrontBufferData = 33,
SCENE_StretchRect = 34,
SCENE_ColorFill = 35,
SCENE_CreateOffscreenPlainSurface = 36,
SCENE_SetRenderTarget = 37,
SCENE_GetRenderTarget = 38,
SCENE_SetDepthStencilSurface = 39,
SCENE_GetDepthStencilSurface = 40,
SCENE_BeginScene = 41,
SCENE_EndScene = 42,
SCENE_Clear = 43,
SCENE_SetTransform = 44,
SCENE_GetTransform = 45,
SCENE_MultiplyTransform = 46,
SCENE_SetViewport = 47,
SCENE_GetViewport = 48,
SCENE_SetMaterial = 49,
SCENE_GetMaterial = 50,
SCENE_SetLight = 51,
SCENE_GetLight = 52,
SCENE_LightEnable = 53,
SCENE_GetLightEnable = 54,
SCENE_SetClipPlane = 55,
SCENE_GetClipPlane = 56,
SCENE_SetRenderState = 57,
SCENE_GetRenderState = 58,
SCENE_CreateStateBlock = 59,
SCENE_BeginStateBlock = 60,
SCENE_EndStateBlock = 61,
SCENE_SetClipStatus = 62,
SCENE_GetClipStatus = 63,
SCENE_GetTexture = 64,
SCENE_SetTexture = 65,
SCENE_GetTextureStageState = 66,
SCENE_SetTextureStageState = 67,
SCENE_GetSamplerState = 68,
SCENE_SetSamplerState = 69,
SCENE_ValidateDevice = 70,
SCENE_SetPaletteEntries = 71,
SCENE_GetPaletteEntries = 72,
SCENE_SetCurrentTexturePalette = 73,
SCENE_GetCurrentTexturePalette = 74,
SCENE_SetScissorRect = 75,
SCENE_GetScissorRect = 76,
SCENE_SetSoftwareVertexProcessing = 77,
SCENE_GetSoftwareVertexProcessing = 78,
SCENE_SetNPatchMode = 79,
SCENE_GetNPatchMode = 80,
SCENE_DrawPrimitive = 81,
SCENE_DrawIndexedPrimitive = 82,
SCENE_DrawPrimitiveUP = 83,
SCENE_DrawIndexedPrimitiveUP = 84,
SCENE_ProcessVertices = 85,
SCENE_CreateVertexDeclaration = 86,
SCENE_SetVertexDeclaration = 87,
SCENE_GetVertexDeclaration = 88,
SCENE_SetFVF = 89,
SCENE_GetFVF = 90,
SCENE_CreateVertexShader = 91,
SCENE_SetVertexShader = 92,
SCENE_GetVertexShader = 93,
SCENE_SetVertexShaderConstantF = 94,
SCENE_GetVertexShaderConstantF = 95,
SCENE_SetVertexShaderConstantI = 96,
SCENE_GetVertexShaderConstantI = 97,
SCENE_SetVertexShaderConstantB = 98,
SCENE_GetVertexShaderConstantB = 99,
SCENE_SetStreamSource = 100,
SCENE_GetStreamSource = 101,
SCENE_SetStreamSourceFreq = 102,
SCENE_GetStreamSourceFreq = 103,
SCENE_SetIndices = 104,
SCENE_GetIndices = 105,
SCENE_CreatePixelShader = 106,
SCENE_SetPixelShader = 107,
SCENE_GetPixelShader = 108,
SCENE_SetPixelShaderConstantF = 109,
SCENE_GetPixelShaderConstantF = 110,
SCENE_SetPixelShaderConstantI = 111,
SCENE_GetPixelShaderConstantI = 112,
SCENE_SetPixelShaderConstantB = 113,
SCENE_GetPixelShaderConstantB = 114,
SCENE_DrawRectPatch = 115,
SCENE_DrawTriPatch = 116,
SCENE_DeletePatch = 117,
SCENE_CreateQuery = 118
};


namespace codekeem {
	bool secret1 = false;
	bool secret2 = false;
	bool secret3 = false;
}