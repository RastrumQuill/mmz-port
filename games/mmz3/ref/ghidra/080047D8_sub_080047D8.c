// sub_080047D8 at 0x080047D8 (thumb)

undefined4 sub_080047D8(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080046DC(param_1 & 0xffff);
  if (iVar1 != 0) {
    sub_080FDC44((&DAT_0810bf34)[(uint)*(ushort *)(&DAT_0810bfec + (param_1 & 0xffff) * 8) * 3],
                 0xffff,0x100);
  }
  return in_lr;
}

