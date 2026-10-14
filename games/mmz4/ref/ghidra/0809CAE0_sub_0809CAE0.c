// sub_0809CAE0 at 0x0809CAE0 (thumb)

undefined4 sub_0809CAE0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885df18 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_0809CB1C(param_1);
  return in_lr;
}

