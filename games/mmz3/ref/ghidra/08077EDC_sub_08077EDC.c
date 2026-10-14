// sub_08077EDC at 0x08077EDC (thumb)

undefined8 sub_08077EDC(int param_1)

{
  undefined4 in_lr;
  bool bVar1;
  
  bVar1 = (*(uint *)(param_1 + 0x8c) & 0x200) != 0;
  if (bVar1) {
    sub_08078150(param_1);
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

