// sub_080B18A4 at 0x080B18A4 (thumb)

undefined4 sub_080B18A4(int param_1,int *param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  sub_08006984(0x38);
  if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
     && (*(undefined *)(iVar3 + 0xb4) = 1, DAT_0202dbf0 != 0)) {
    sub_0803A584(DAT_0202dbf0,6,10);
  }
  iVar2 = *(int *)(iVar3 + 0x54) - *param_2 >> 8;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 < 5) {
    iVar2 = *(int *)(iVar3 + 0x58) - param_2[1] >> 8;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 5) {
      uVar1 = 5;
      goto LAB_080b1922;
    }
  }
  if (*(char *)(iVar3 + 0xd) == '\x05') {
    return in_lr;
  }
  uVar1 = 4;
LAB_080b1922:
  *(undefined *)(iVar3 + 0xd) = uVar1;
  *(undefined *)(iVar3 + 0xe) = 0;
  return in_lr;
}

