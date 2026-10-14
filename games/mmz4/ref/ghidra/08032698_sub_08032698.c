// sub_08032698 at 0x08032698 (thumb)

undefined4 sub_08032698(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x173) == '\0') {
    *(char *)(param_1 + 0x173) = '\x01';
    DAT_0202e918 = DAT_0202e918 & 0xfffe | 8;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08002B10(10);
    if ((*(byte *)(param_1 + 10) >> 4 & 1) == (*(byte *)(param_1 + 0x142) & 1)) {
      sub_0801CF00(param_1,0x4a00);
    }
    else {
      sub_0801CF00(param_1,0x4b00);
    }
    *(undefined *)(param_1 + 0xf) = 1;
    sub_08032730(param_1);
  }
  else {
    sub_080327CC(param_1);
    *(undefined *)(param_1 + 0xf) = 3;
  }
  return in_lr;
}

