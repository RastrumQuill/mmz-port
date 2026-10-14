// sub_080B0D08 at 0x080B0D08 (thumb)

undefined4 sub_080B0D08(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  if ((*(byte *)(iVar1 + 3) & 1) != 0) {
    sub_080AC60C(3,param_1 + 0x54);
  }
  if ((*(byte *)(iVar1 + 3) & 2) != 0) {
    sub_080AC60C(2,param_1 + 0x54);
  }
  if ((*(byte *)(iVar1 + 3) & 4) != 0) {
    sub_080AC60C(1,param_1 + 0x54);
    sub_080032EC(0x2a);
  }
  if ((*(byte *)(iVar1 + 3) & 8) != 0) {
    sub_080AC60C(1,param_1 + 0x54);
    sub_080032EC(0x35);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

