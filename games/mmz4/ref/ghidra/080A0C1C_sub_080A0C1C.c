// sub_080A0C1C at 0x080A0C1C (thumb)

undefined4 sub_080A0C1C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  sub_080D0894(2,param_1 + 0x54);
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
  return in_lr;
}

