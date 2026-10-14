// sub_080D5880 at 0x080D5880 (thumb)

undefined8 sub_080D5880(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_2 < (byte)(&DAT_0834a5ad)[param_1 * 2]) {
    uVar1 = (byte)(&DAT_0834a5ac)[param_1 * 2] + param_2 & 0xff;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

