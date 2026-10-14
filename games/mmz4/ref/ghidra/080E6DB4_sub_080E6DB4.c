// sub_080E6DB4 at 0x080E6DB4 (thumb)

undefined4 sub_080E6DB4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_080E6B38(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
  }
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  *(undefined4 *)(param_1 + 100) = 0;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08865b3c + (uint)*(byte *)(param_1 + 0x11) * 2));
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

