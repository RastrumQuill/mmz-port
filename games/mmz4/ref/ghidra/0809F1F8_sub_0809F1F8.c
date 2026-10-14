// sub_0809F1F8 at 0x0809F1F8 (thumb)

undefined4 sub_0809F1F8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\0') || ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885e260 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809F24C(param_1);
  }
  return in_lr;
}

