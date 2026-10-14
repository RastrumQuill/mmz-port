// sub_0810380C at 0x0810380C (thumb)

undefined4 sub_0810380C(int param_1)

{
  undefined4 in_lr;
  
  sub_08128884(param_1,*(undefined4 *)(&DAT_08868b08 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (0x2000 < DAT_0202ea30 - (*(int *)(param_1 + 0x54) + 0x7800)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

