// sub_080D83C8 at 0x080D83C8 (thumb)

undefined4 sub_080D83C8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0xb7) - 1;
  *(byte *)(param_1 + 0xb7) = (byte)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
  }
  return in_lr;
}

