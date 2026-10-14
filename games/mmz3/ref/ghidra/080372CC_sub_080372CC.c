// sub_080372CC at 0x080372CC (thumb)

undefined4 sub_080372CC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b62c + (uint)*(byte *)(param_1 + 0x10) * 4));
    sub_080177F4(param_1);
  }
  else if (*(char *)(param_1 + 0x10) == '\x05') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0xc0) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

