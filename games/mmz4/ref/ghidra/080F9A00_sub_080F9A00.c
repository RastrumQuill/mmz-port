// sub_080F9A00 at 0x080F9A00 (thumb)

undefined4 sub_080F9A00(int param_1)

{
  undefined4 in_lr;
  
  sub_08128884(param_1,*(undefined4 *)(&DAT_088671bc + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

