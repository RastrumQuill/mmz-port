// sub_080DC7A0 at 0x080DC7A0 (thumb)

undefined4 sub_080DC7A0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080DCB6C();
  if (iVar1 < 1) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    *(short *)(param_1 + 0x50) = (short)iVar1;
  }
  return in_lr;
}

