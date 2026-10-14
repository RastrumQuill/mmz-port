// sub_080B718C at 0x080B718C (thumb)

undefined4 sub_080B718C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x54) + -0x60;
  *(int *)(param_1 + 0x54) = iVar2;
  if (iVar2 < 0xc01) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 8);
    *(undefined4 *)(param_1 + 0x54) = 0xc00;
  }
  cVar1 = *(char *)(param_1 + 0xbc);
  if (cVar1 != '\0') {
    uVar6 = *(undefined4 *)(param_1 + 0x20);
    iVar2 = sub_0801901C(uVar6,cVar1);
    iVar3 = sub_08019068(uVar6,cVar1);
    iVar4 = *(int *)(param_1 + 0x4c);
    iVar5 = *(int *)(param_1 + 0x50);
    iVar7 = 0x2800 - *(int *)(param_1 + 0x54);
    iVar2 = sub_080C8AD0(iVar7 * (iVar2 - iVar4),0x2800);
    iVar3 = sub_080C8AD0(iVar7 * (iVar3 - iVar5),0x2800);
    *(int *)(param_1 + 0x4c) = iVar4 + iVar2;
    *(int *)(param_1 + 0x50) = iVar5 + iVar3;
  }
  return in_lr;
}

