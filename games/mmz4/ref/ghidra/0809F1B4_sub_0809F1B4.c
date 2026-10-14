// sub_0809F1B4 at 0x0809F1B4 (thumb)

undefined4 sub_0809F1B4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xc0) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885e254 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_0809F1F8(param_1);
  return in_lr;
}

