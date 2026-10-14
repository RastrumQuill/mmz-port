// sub_0805EE9C at 0x0805EE9C (thumb)

undefined4 sub_0805EE9C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    sub_0800471C(0xff);
  }
  *(bool *)(iVar1 + 0xcb) = 0 < *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(iVar1 + 0x54);
  return in_lr;
}

