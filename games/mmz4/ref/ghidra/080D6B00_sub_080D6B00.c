// sub_080D6B00 at 0x080D6B00 (thumb)

undefined4 sub_080D6B00(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_0202e8b9 & 4) == 0) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08864a48 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

