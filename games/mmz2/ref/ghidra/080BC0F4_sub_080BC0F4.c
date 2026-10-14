// sub_080BC0F4 at 0x080BC0F4 (thumb)

undefined4 sub_080BC0F4(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_0202ebbb & 0x20) == 0) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08347348 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

