// sub_080DA9B8 at 0x080DA9B8 (thumb)

undefined4 sub_080DA9B8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_080DA980();
  return in_lr;
}

