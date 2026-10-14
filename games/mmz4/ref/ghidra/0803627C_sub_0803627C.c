// sub_0803627C at 0x0803627C (thumb)

undefined4 sub_0803627C(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 6;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fce0 + (uint)*(byte *)(param_1 + 0x101) * 4));
  return in_lr;
}

