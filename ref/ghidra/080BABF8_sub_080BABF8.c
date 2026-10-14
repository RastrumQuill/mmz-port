// sub_080BABF8 at 0x080BABF8 (thumb)

undefined4 sub_080BABF8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080BB0E0();
  if (0x100 - iVar1 < 0x100) {
    *(short *)(param_1 + 0x48) = (short)(0x100 - iVar1);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080BAC28(param_1);
  }
  return in_lr;
}

