// sub_080AA12C at 0x080AA12C (thumb)

undefined4 sub_080AA12C(int param_1)

{
  undefined4 in_lr;
  
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08368aac + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08368ab0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

