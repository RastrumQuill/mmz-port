// sub_0806C23C at 0x0806C23C (thumb)

undefined4 sub_0806C23C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0xc6) = 0xffff;
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0e14 + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

