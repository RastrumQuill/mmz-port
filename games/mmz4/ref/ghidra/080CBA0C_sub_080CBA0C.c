// sub_080CBA0C at 0x080CBA0C (thumb)

undefined4 sub_080CBA0C(int param_1)

{
  undefined4 in_lr;
  byte abStack_10 [8];
  
  sub_08128B5C(abStack_10,&DAT_08129b0e,6);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x131);
    sub_0801CF00(param_1,0x9201);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,&DAT_0886308c + (uint)abStack_10[*(char *)(param_1 + 0x71)] * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

