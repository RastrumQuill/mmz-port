// sub_08071E00 at 0x08071E00 (thumb)

undefined4 sub_08071E00(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 0x19;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088592ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

