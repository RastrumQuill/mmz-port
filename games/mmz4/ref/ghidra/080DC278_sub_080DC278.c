// sub_080DC278 at 0x080DC278 (thumb)

undefined4 sub_080DC278(int param_1)

{
  undefined4 in_lr;
  
  if (((DAT_0202e8b9 & 4) == 0) || (*(char *)(param_1 + 0x78) == '\0')) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088650c4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

