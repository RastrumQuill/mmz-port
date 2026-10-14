// sub_0803A2C4 at 0x0803A2C4 (thumb)

undefined8 sub_0803A2C4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x06') || (*(char *)(param_1 + 0xc1) == '\x06')) {
    iVar1 = sub_08128888(param_1,0,
                         *(undefined4 *)(&DAT_08850118 + (uint)*(byte *)(param_1 + 0xc3) * 4));
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 0x40;
  }
  return CONCAT44(in_lr,iVar1);
}

