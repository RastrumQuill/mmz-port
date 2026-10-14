// sub_08038864 at 0x08038864 (thumb)

undefined8 sub_08038864(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x13e) == 0) {
    iVar1 = 0x4c0;
  }
  else {
    iVar1 = (int)((0x100 - (uint)*(byte *)(param_1 + 0x13e)) * 0x13) >> 2;
  }
  return CONCAT44(in_lr,iVar1);
}

