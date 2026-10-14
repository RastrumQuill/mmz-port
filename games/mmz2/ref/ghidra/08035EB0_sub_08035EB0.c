// sub_08035EB0 at 0x08035EB0 (thumb)

undefined8 sub_08035EB0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(byte)(&DAT_08334566)[param_1];
  if (param_2 == 0) {
    uVar1 = 0x80 - uVar1 & 0xff;
  }
  return CONCAT44(in_lr,uVar1);
}

