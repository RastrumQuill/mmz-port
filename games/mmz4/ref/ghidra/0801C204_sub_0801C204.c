// sub_0801C204 at 0x0801C204 (thumb)

undefined4 sub_0801C204(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = *(short *)(param_1 + 0x68) + -1;
  *(short *)(param_1 + 0x68) = sVar1;
  if (sVar1 == 0) {
    DAT_0202dad5 = DAT_0202dad5 + '\x01';
  }
  return in_lr;
}

