// sub_080AB210 at 0x080AB210 (thumb)

undefined4 sub_080AB210(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_083457ac + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080AB258(param_1);
  }
  return in_lr;
}

