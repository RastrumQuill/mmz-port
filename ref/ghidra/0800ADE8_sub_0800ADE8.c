// sub_0800ADE8 at 0x0800ADE8 (thumb)

undefined4 sub_0800ADE8(int param_1)

{
  undefined4 in_lr;
  
  DAT_02004f70 = 0;
  sub_08001EE8((int)(short)DAT_0202266c);
  DAT_0202266c._0_2_ = 0;
  DAT_02004f30 = (ushort)(*(int *)(param_1 + 0x54) << 8) | DAT_02004f30;
  return in_lr;
}

