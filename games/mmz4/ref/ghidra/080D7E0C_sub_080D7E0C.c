// sub_080D7E0C at 0x080D7E0C (thumb)

undefined4 sub_080D7E0C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x74) + -1;
  *(int *)(param_1 + 0x74) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080D7ED0(param_1);
    return in_lr;
  }
  uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x2000 < uVar3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  uVar3 = *(uint *)(param_1 + 0x74);
  if ((int)uVar3 < 0x18) {
    if ((uVar3 & 3) == 0) {
LAB_080d7e9e:
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  else {
    if (0x2f < (int)uVar3) goto LAB_080d7ea6;
    if ((uVar3 & 1) == 0) goto LAB_080d7e9e;
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_080d7ea6:
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  return in_lr;
}

