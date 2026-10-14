// sub_080C7EDC at 0x080C7EDC (thumb)

undefined4 sub_080C7EDC(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xb4) == '\0') {
    sub_08002B10(0x3f);
  }
  if (iVar2 != 0) {
    pcVar1 = (char *)(iVar2 + 0xb4);
    *pcVar1 = *pcVar1 + -1;
  }
  sub_080DE438(param_1 + 0x54,0,0);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

