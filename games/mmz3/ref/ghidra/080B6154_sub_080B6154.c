// sub_080B6154 at 0x080B6154 (thumb)

undefined4 sub_080B6154(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  if ((*(byte *)(iVar1 + 3) & 1) != 0) {
    sub_080B2484(3,param_1 + 0x54);
  }
  if ((*(byte *)(iVar1 + 3) & 2) != 0) {
    sub_080B2484(2,param_1 + 0x54);
  }
  if ((*(byte *)(iVar1 + 3) & 4) != 0) {
    sub_080B2484(1,param_1 + 0x54);
    if (DAT_0202e48c < *(int *)(param_1 + 0x58)) {
      sub_0800471C(0x31);
    }
    else {
      sub_0800471C(0x2a);
    }
  }
  if ((*(byte *)(iVar1 + 3) & 8) != 0) {
    sub_080B2484(1,param_1 + 0x54);
    if (DAT_0202e48c < *(int *)(param_1 + 0x58)) {
      sub_0800471C(0x31);
    }
    else {
      sub_0800471C(0x35);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

