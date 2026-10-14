// sub_08078418 at 0x08078418 (thumb)

undefined4 sub_08078418(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x10) == 0) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b1b38 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

