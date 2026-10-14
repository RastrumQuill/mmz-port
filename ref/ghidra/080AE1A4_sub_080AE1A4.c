// sub_080AE1A4 at 0x080AE1A4 (thumb)

undefined4 sub_080AE1A4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,5);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  sub_0809C980(param_1);
  if ((DAT_02022ada & 0x80) == 0) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

