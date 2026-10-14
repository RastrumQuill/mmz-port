// sub_080F58C0 at 0x080F58C0 (thumb)

undefined4 sub_080F58C0(int param_1)

{
  short sVar1;
  undefined uVar2;
  int iVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x58);
  if (0x4b000 < *(int *)(DAT_0202dbf0 + 0x54) - 0x13b000U) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080F57E4(param_1);
  }
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
LAB_080f5938:
    if (*(char *)(param_1 + 0xd) == '\x01') {
      uVar2 = 2;
      goto LAB_080f5942;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x58) - *(int *)(DAT_0202dbf0 + 0x58);
    if (iVar3 < 0) {
      iVar3 = *(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58);
    }
    if (0x1ff < iVar3) goto LAB_080f5938;
    uVar2 = 1;
LAB_080f5942:
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08866c00 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (iVar6 < *(int *)(param_1 + 0x58)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08866c24,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sVar1 = *(short *)(param_1 + 0xb4);
    sVar4 = 0x174;
  }
  else {
    if (iVar6 <= *(int *)(param_1 + 0x58)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&DAT_08866c0c,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      psVar5 = (short *)(param_1 + 0xb4);
      if (*psVar5 != 0) {
        sub_08002B5C((int)*psVar5);
        *psVar5 = 0;
      }
      goto LAB_080f5a06;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08866c0c,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sVar1 = *(short *)(param_1 + 0xb4);
    sVar4 = 0x1c9;
  }
  if (sVar1 != sVar4) {
    sub_08002B10(sVar4);
    *(short *)(param_1 + 0xb4) = sVar4;
  }
LAB_080f5a06:
  sub_0801CFF0(param_1);
  return in_lr;
}

