// sub_080388DC at 0x080388DC (thumb)

undefined8 sub_080388DC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x13e) == 0) {
    iVar1 = 0x540;
  }
  else {
    iVar1 = (int)((0x100 - (uint)*(byte *)(param_1 + 0x13e)) * 0x15) >> 2;
  }
  return CONCAT44(in_lr,iVar1);
}

