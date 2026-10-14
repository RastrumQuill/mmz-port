// sub_080B59DC at 0x080B59DC (thumb)

undefined4 sub_080B59DC(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) && ((*(uint *)(param_1 + 0x8c) & 0x200) == 0))
  {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0886059c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080B5C14(param_1);
  }
  return in_lr;
}

