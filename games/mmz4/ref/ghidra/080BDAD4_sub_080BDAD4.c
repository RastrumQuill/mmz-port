// sub_080BDAD4 at 0x080BDAD4 (thumb)

undefined4 sub_080BDAD4(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  cVar1 = *(char *)(param_1 + 0x11);
  sub_0801CFF0(param_1);
  iVar3 = *(int *)(param_1 + 0xb4);
  if (iVar3 < 1) {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar6 = *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x58);
    iVar5 = *(int *)(param_1 + 0x60);
    sVar2 = sub_08007C7C();
    if (sVar2 == 0) {
      *(int *)(param_1 + 0x54) = iVar3 + iVar6;
      *(int *)(param_1 + 0x58) = iVar4 + iVar5;
    }
    else {
      sub_080BD5C4(param_1 + 0x54,0,cVar1 + 'Q');
      sub_080BD5C4(param_1 + 0x54,1,cVar1 + -0x51);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc);
    }
  }
  else if (*(byte *)(iVar6 + 0xc) < 2) {
    *(int *)(param_1 + 0xb4) = iVar3 + -1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080BDBA8(param_1);
  }
  return in_lr;
}

