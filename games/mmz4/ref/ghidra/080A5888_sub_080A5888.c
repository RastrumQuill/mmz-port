// sub_080A5888 at 0x080A5888 (thumb)

undefined4 sub_080A5888(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined auStack_10 [4];
  
  sub_08128B5C(auStack_10,&DAT_0812968c,3);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885ef00);
    sub_0801CF00(param_1,0x8802);
    sub_0801D3D0(param_1,5);
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(char *)(param_1 + 0x71) == '\x06')) {
    sub_08005784(param_1 + 0x74,&DAT_0885ef18);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = auStack_10[bVar1];
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

