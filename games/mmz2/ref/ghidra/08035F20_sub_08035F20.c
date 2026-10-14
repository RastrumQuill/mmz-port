// sub_08035F20 at 0x08035F20 (thumb)

undefined8 sub_08035F20(int param_1,short *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (int)*param_2;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar1 = -iVar1;
  }
  return CONCAT44(in_lr,iVar1);
}

