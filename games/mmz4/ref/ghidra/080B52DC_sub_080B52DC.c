// sub_080B52DC at 0x080B52DC (thumb)

undefined4 sub_080B52DC(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
  if (iVar2 < 0) {
    iVar2 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
  }
  if ((iVar2 < 0x3800) &&
     (uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3, DAT_0202dc38 = uVar1 & 0x7fffffff,
     (uVar1 * 2 >> 0x11 & 7) == 0)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xb6) = 1;
  }
  return in_lr;
}

