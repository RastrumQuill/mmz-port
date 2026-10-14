// sub_08038908 at 0x08038908 (thumb)

undefined8 sub_08038908(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x13e) == 0) {
    iVar1 = 0x100;
  }
  else {
    iVar1 = 0x100 - (uint)*(byte *)(param_1 + 0x13e);
  }
  return CONCAT44(in_lr,iVar1);
}

