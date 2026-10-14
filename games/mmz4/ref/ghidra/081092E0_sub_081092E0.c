// sub_081092E0 at 0x081092E0 (thumb)

undefined4 sub_081092E0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08869378)[*(byte *)(param_1 + 9)] + 4);
  sub_08128884(param_1,*(undefined4 *)(&DAT_088693a8 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_0810931C(param_1);
  return in_lr;
}

