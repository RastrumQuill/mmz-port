// sub_080F42D8 at 0x080F42D8 (thumb)

undefined4 sub_080F42D8(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe19) == '\x01') {
    uVar1 = (ushort)DAT_020023d0 + 0x10;
  }
  else {
    uVar1 = (ushort)DAT_020023d0 - 0x10;
  }
  DAT_020023d0._0_2_ = uVar1 & 0x1ff;
  if ((uVar1 & 0xff) == 0) {
    *(undefined *)(param_1 + 0xe18) = *(undefined *)(param_1 + 0xe19);
    *(undefined *)(param_1 + 2) = 1;
    sub_080F4338(param_1);
  }
  return in_lr;
}

