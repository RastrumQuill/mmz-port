// sub_0804D068 at 0x0804D068 (thumb)

undefined4 sub_0804D068(int param_1)

{
  undefined4 in_lr;
  
  sub_080489E4();
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0809DE84(param_1);
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 2;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  sub_0804D0E4(param_1);
  return in_lr;
}

