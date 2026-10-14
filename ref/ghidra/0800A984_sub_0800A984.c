// sub_0800A984 at 0x0800A984 (thumb)

undefined4 sub_0800A984(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (DAT_02005208 == 4) {
    bVar1 = *(byte *)(param_1 + 0xe);
    if (bVar1 == 0) {
      DAT_0202265c = (uint)bVar1;
      sub_08001EE8((int)(short)(ushort)DAT_0202266c);
      DAT_0202266c._0_2_ = (ushort)bVar1;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

