// sub_08099834 at 0x08099834 (thumb)

undefined4 sub_08099834(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_0202ebbb & 0x20) == 0) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
      *(undefined *)(param_1 + 0x12) = 0;
      sub_080032EC(0x35);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      sub_08099900(param_1 + 0x54,((uint)(*(byte *)(param_1 + 0x12) >> 1) << 0x1d) >> 0x18);
      sub_08015518(4,param_1 + 0x54);
      if (*(char *)(param_1 + 0x12) == '\x10') {
        *(undefined4 *)(param_1 + 0xc) = 4;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
        return in_lr;
      }
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

