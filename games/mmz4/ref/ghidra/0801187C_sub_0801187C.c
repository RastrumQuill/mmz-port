// sub_0801187C at 0x0801187C (thumb)

undefined4 sub_0801187C(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = *(short *)(param_1 + 0x68) + -1;
  *(short *)(param_1 + 0x68) = sVar1;
  if (sVar1 == 0) {
    DAT_0202dad4 = DAT_0202dad4 + '\x01';
  }
  return in_lr;
}

