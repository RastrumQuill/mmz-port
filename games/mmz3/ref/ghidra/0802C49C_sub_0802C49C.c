// sub_0802C49C at 0x0802C49C (thumb)

undefined4 sub_0802C49C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x147) = 5;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835acf8 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

