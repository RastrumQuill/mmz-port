// sub_08102028 at 0x08102028 (thumb)

undefined4 sub_08102028(int param_1)

{
  undefined4 in_lr;
  
  sub_08128884(param_1,*(undefined4 *)(&DAT_08868624 + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

