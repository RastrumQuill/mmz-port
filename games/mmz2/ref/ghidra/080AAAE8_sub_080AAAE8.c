// sub_080AAAE8 at 0x080AAAE8 (thumb)

undefined4 sub_080AAAE8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08345744 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080AAB30(param_1);
  }
  return in_lr;
}

