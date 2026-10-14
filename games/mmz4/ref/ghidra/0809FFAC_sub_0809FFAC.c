// sub_0809FFAC at 0x0809FFAC (thumb)

undefined4 sub_0809FFAC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x18;
    sub_080A09B8(param_1 + 0x54,*(undefined *)(param_1 + 0x10),*(byte *)(param_1 + 10) >> 4 & 1);
    sub_08005784(param_1 + 0x74,&DAT_0885e418);
    sub_0801CF00(param_1,0x8203);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

