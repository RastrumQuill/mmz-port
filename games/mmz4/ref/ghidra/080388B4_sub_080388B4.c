// sub_080388B4 at 0x080388B4 (thumb)

undefined8 sub_080388B4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x13e) == 0) {
    iVar1 = 0x480;
  }
  else {
    iVar1 = (int)((0x100 - (uint)*(byte *)(param_1 + 0x13e)) * 9) >> 1;
  }
  return CONCAT44(in_lr,iVar1);
}

