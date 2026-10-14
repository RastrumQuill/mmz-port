// sub_080A2028 at 0x080A2028 (thumb)

undefined4 sub_080A2028(int param_1)

{
  undefined4 in_lr;
  
  sub_080D0894(3,param_1 + 0x54);
  *(undefined *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

