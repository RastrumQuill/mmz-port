// sub_08110B8C at 0x08110B8C (thumb)

undefined4 sub_08110B8C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 7) == '\0') {
    sub_08002B10(0x1c2);
    DAT_02000a00 = DAT_02000a00 & 0xf0ff | 0x3d00;
    *(undefined2 *)(param_1 + 8) = 0x20;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  if (*(short *)(param_1 + 8) != 0) {
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + -1;
  }
  DAT_03002ec2 = *(char *)(param_1 + 8) + ' ';
  DAT_03002ec0 = *(char *)(param_1 + 8) + ' ';
  DAT_03002ec1 = DAT_03002ec0;
  sub_080025D8(0x89);
  if (*(short *)(param_1 + 8) == 0) {
    *(undefined *)(param_1 + 6) = 2;
    *(undefined *)(param_1 + 7) = 0;
  }
  return in_lr;
}

