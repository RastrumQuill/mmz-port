// sub_080009DC at 0x080009DC (thumb)

undefined4 sub_080009DC(void)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_r4;
  short *psVar6;
  short *psVar7;
  short *unaff_r5;
  undefined *unaff_r6;
  int unaff_r7;
  char cVar8;
  char in_OV;
  bool bVar9;
  undefined *puVar10;
  
  iVar5 = 8;
  bVar9 = false;
  cVar8 = '\0';
  psVar7 = unaff_r5;
  puVar10 = unaff_r6;
  sub_08000FFC();
  iVar4 = unaff_r7;
  psVar6 = unaff_r5;
  if (bVar9 || cVar8 != in_OV) {
    do {
      if (*psVar6 == 0x62) {
        *unaff_r6 = 8;
        sub_0800100C();
        return 0;
      }
      if (*psVar6 != 0x60) {
        return 1;
      }
      iVar2 = iVar4 + -1;
      bVar9 = 0 < iVar4;
      iVar4 = iVar2;
      psVar6 = psVar6 + 1;
    } while (iVar2 != 0 && bVar9);
    iVar2 = 0;
    iVar4 = unaff_r7;
    do {
      puVar1 = (ushort *)((int)unaff_r5 + iVar5);
      if ((*(ushort *)((int)&DAT_08000a74 + iVar2) & *puVar1) == 0) {
        return 1;
      }
      unaff_r5 = unaff_r5 + 1;
      iVar2 = iVar2 + 2;
      iVar3 = iVar4 + -1;
      bVar9 = 0 < iVar4;
      iVar4 = iVar3;
    } while (iVar3 != 0 && bVar9);
    *(ushort *)(unaff_r4 + 4) = *puVar1;
    while (CONCAT22(psVar7[0xc],psVar7[8]) == *(int *)(puVar10 + 0x1c)) {
      psVar7 = psVar7 + 1;
      iVar4 = unaff_r7 + -1;
      bVar9 = unaff_r7 < 1;
      unaff_r7 = iVar4;
      if (iVar4 == 0 || bVar9) {
        *(undefined2 *)(puVar10 + 0xe) = 1;
        return 0;
      }
    }
  }
  return 1;
}

