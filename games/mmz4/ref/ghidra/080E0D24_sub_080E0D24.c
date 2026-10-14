// sub_080E0D24 at 0x080E0D24 (thumb)

undefined4 sub_080E0D24(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_0801CFF0();
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') || (sVar2 = sub_08007C7C(uVar4), sVar2 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080E0D88(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(int *)(param_1 + 0x58) = iVar3 + iVar5;
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  return in_lr;
}

