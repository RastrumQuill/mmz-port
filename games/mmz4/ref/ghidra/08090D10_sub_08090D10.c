// sub_08090D10 at 0x08090D10 (thumb)

undefined4 sub_08090D10(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885cc84 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_08090D4C(param_1);
  return in_lr;
}

