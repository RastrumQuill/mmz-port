// sub_08057B0C at 0x08057B0C (thumb)

undefined8 sub_08057B0C(int param_1,char param_2)

{
  undefined4 in_lr;
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0xba) == param_2;
  if (!bVar1) {
    *(undefined *)(param_1 + 0xbb) = 0;
    *(char *)(param_1 + 0xba) = param_2;
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

