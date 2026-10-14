// sub_080ECBD8 at 0x080ECBD8 (thumb)

undefined4 sub_080ECBD8(int param_1)

{
  undefined4 in_lr;
  
  sub_08128884(param_1,*(undefined4 *)(&DAT_088663dc + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return in_lr;
}

