// sub_08000A78 at 0x08000A78 (thumb)

undefined4 sub_08000A78(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *unaff_r5;
  char *unaff_r6;
  int unaff_r7;
  
  iVar5 = unaff_r7;
  psVar7 = unaff_r5;
  while( true ) {
    if (*psVar7 == 0x62) {
      *unaff_r6 = '\b';
      sub_0800100C();
      return 0;
    }
    if (*psVar7 != 0x60) break;
    psVar7 = psVar7 + 1;
    iVar3 = iVar5 + -1;
    bVar1 = iVar5 < 1;
    iVar4 = unaff_r7;
    iVar5 = iVar3;
    psVar6 = unaff_r5;
    if (iVar3 == 0 || bVar1) {
      do {
        if ((psVar6[4] & 0x1000U) == 0) {
          return 1;
        }
        iVar5 = iVar4 + -1;
        bVar1 = 0 < iVar4;
        iVar4 = iVar5;
        psVar7 = unaff_r5;
        psVar6 = psVar6 + 1;
      } while (iVar5 != 0 && bVar1);
      do {
        if (CONCAT22(psVar7[0xc],psVar7[8]) != *(int *)(unaff_r6 + 0x1c)) {
          return 1;
        }
        iVar5 = unaff_r7 + -1;
        bVar1 = 0 < unaff_r7;
        unaff_r7 = iVar5;
        psVar7 = psVar7 + 1;
      } while (iVar5 != 0 && bVar1);
      *(uint *)(unaff_r6 + 0x20) = CONCAT22(unaff_r5[0x15],unaff_r5[0x11]);
      *(uint *)(unaff_r6 + 0x40) = CONCAT22(unaff_r5[0x1d],unaff_r5[0x19]);
      cVar2 = unaff_r6[1];
      unaff_r6[1] = cVar2 + '\x04';
      *unaff_r6 = cVar2 + '\x04';
      *(undefined2 *)(unaff_r6 + 0xe) = 2;
      return 0;
    }
  }
  return 1;
}

