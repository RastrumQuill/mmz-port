// sub_080DC660 at 0x080DC660 (thumb)

undefined4 sub_080DC660(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080DCB6C();
  if (0x100 - iVar1 < 0x100) {
    *(short *)(param_1 + 0x50) = (short)(0x100 - iVar1);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DC690(param_1);
  }
  return in_lr;
}

