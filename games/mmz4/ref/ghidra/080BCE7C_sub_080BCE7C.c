// sub_080BCE7C at 0x080BCE7C (thumb)

undefined4 sub_080BCE7C(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(int *)(*(int *)(param_1 + 0x28) + 0xdd4) = *(int *)(*(int *)(param_1 + 0x28) + 0xdd4) + 10;
    sub_08002B10(0x1a4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pcVar1 = (char *)(param_1 + 0xb8);
  if (*pcVar1 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *pcVar1 = '\x01';
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    sub_0801CFF0(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *pcVar1 = '\0';
    sub_0801D1F4(param_1);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}

