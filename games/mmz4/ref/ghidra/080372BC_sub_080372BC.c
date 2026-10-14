// sub_080372BC at 0x080372BC (thumb)

undefined4 sub_080372BC(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 6;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fdac + (uint)*(byte *)(param_1 + 0x101) * 4));
  return in_lr;
}

