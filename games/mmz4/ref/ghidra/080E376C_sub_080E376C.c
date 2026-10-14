// sub_080E376C at 0x080E376C (thumb)

undefined4 sub_080E376C(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar1 = sub_08007C7C(iVar2,iVar3 + -0x1200);
  if (sVar1 != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0x1200;
    sub_080D0894(2,&local_18);
    sub_08002B10(0x2a);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      sub_080E32E4(param_1 + 0x54,0x201,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_080E32E4(param_1 + 0x54,0x202,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      sub_080E32E4(param_1 + 0x54,0x203,*(byte *)(param_1 + 10) >> 4 & 1);
    }
  }
  return in_lr;
}

