// sub_080B08C0 at 0x080B08C0 (thumb)

undefined4 sub_080B08C0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x12) == -1) {
      sub_08005784(param_1 + 0x74,&DAT_0885fd58 + (uint)*(byte *)(param_1 + 0x11) * 0x30);
    }
    else {
      sub_08005784(param_1 + 0x74,&DAT_0885fe30);
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return in_lr;
}

