// sub_08034578 at 0x08034578 (thumb)

undefined4 sub_08034578(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 6;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fb98 + (uint)*(byte *)(param_1 + 0x101) * 4));
  return in_lr;
}

