// sub_08036900 at 0x08036900 (thumb)

undefined4 sub_08036900(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 4;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fd18 + (uint)*(byte *)(param_1 + 0x101) * 4));
  return in_lr;
}

