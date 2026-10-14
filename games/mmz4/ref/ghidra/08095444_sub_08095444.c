// sub_08095444 at 0x08095444 (thumb)

undefined4 sub_08095444(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) && ((*(uint *)(param_1 + 0x8c) & 0x200) == 0))
  {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885d184 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_08095ACC(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080959A4(param_1);
  }
  return in_lr;
}

