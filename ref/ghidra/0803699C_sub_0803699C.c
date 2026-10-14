// sub_0803699C at 0x0803699C (thumb)

undefined4 sub_0803699C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = 0x30;
  if (DAT_02005208 == 0x10000) {
    iVar1 = 0x40;
  }
  if ((*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0xb8) + iVar1 * 0x100) ||
     (*(int *)(param_1 + 0xb8) + (0x1e0 - iVar1) * 0x100 < *(int *)(param_1 + 0x4c))) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xc4);
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
  return in_lr;
}

