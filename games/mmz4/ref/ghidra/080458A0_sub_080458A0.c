// sub_080458A0 at 0x080458A0 (thumb)

undefined4 sub_080458A0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x2c) + 0xfa) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088536c8 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  return in_lr;
}

