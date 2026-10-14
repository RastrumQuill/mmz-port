// sub_08096A5C at 0x08096A5C (thumb)

undefined4 sub_08096A5C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  cVar1 = *(char *)(param_1 + 0x13);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x13) = cVar1 + -1;
    if (cVar1 != '\x01') {
      return in_lr;
    }
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x2a);
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0802AB70(3,6,param_1 + 0x54);
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

