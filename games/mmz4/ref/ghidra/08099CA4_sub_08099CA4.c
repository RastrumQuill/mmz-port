// sub_08099CA4 at 0x08099CA4 (thumb)

undefined4 sub_08099CA4(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x10) < 4) && ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08099CF4(param_1);
  }
  else {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885d92c + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  return in_lr;
}

