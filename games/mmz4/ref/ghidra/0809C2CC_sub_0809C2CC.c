// sub_0809C2CC at 0x0809C2CC (thumb)

undefined4 sub_0809C2CC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885de68 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_0809C308(param_1);
  return in_lr;
}

