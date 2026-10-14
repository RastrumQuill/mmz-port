// sub_080A0C80 at 0x080A0C80 (thumb)

undefined4 sub_080A0C80(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  byte abStack_10 [4];
  
  sub_08128B5C(abStack_10,&DAT_0812960c,4);
  cVar1 = *(char *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xa9);
    sub_0801CF00(param_1,0x820a);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,&DAT_0885e4e0 + (uint)abStack_10[*(char *)(param_1 + 0x71)] * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if ((cVar1 == '\x01') && (DAT_0202e8d6 != '\0')) {
      DAT_0202e8d6 = DAT_0202e8d6 + -1;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

