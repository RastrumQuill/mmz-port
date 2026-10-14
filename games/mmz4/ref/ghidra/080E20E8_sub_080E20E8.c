// sub_080E20E8 at 0x080E20E8 (thumb)

undefined4 sub_080E20E8(int param_1)

{
  undefined4 in_lr;
  
  sub_080D0C00(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
  sub_080D0C00(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500,1);
  sub_080D0C00(*(int *)(param_1 + 0x54) + 0x500,*(undefined4 *)(param_1 + 0x58),0);
  sub_080D0C00(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0);
  sub_080D0C00(*(int *)(param_1 + 0x54) + -0x500,*(undefined4 *)(param_1 + 0x58),0);
  return in_lr;
}

