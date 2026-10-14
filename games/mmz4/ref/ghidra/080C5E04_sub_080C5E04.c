// sub_080C5E04 at 0x080C5E04 (thumb)

undefined4 sub_080C5E04(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_0801CFF0();
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (((cVar1 == '\0') || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) ||
     (sVar2 = sub_08007C7C(iVar4,*(undefined4 *)(param_1 + 0x58)), sVar2 != 0)) {
    sub_080D0894(2,param_1 + 0x54);
    sub_08002B10(0x2a);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C5EA4(param_1);
  }
  else {
    uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (0x1000 < uVar3) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080C5EA4(param_1);
    }
  }
  return in_lr;
}

