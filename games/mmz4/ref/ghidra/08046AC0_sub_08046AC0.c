// sub_08046AC0 at 0x08046AC0 (thumb)

undefined4 sub_08046AC0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0801CFF0();
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  if (((*(uint *)(param_1 + 0x8c) & 0x1004) != 0) || (sVar1 = sub_08046B8C(iVar3,iVar2), sVar1 != 0)
     ) {
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
      sub_08002B10(0x2b);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_08046B2C(param_1);
  }
  return in_lr;
}

