// sub_080F5790 at 0x080F5790 (thumb)

undefined4 sub_080F5790(int param_1)

{
  undefined4 in_lr;
  
  sub_08128884(param_1,*(undefined4 *)(&DAT_08866bf8 + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080F57CC(param_1);
  return in_lr;
}

