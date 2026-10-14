// sub_08067200 at 0x08067200 (thumb)

undefined4 sub_08067200(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x909);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  sVar1 = sub_08008CFC(iVar2 + 0x880,*(int *)(param_1 + 0x58) + -0x800);
  if ((sVar1 != 0) || (*(int *)(DAT_0202e130 + 0x54) + 0x3000 < *(int *)(param_1 + 0x54))) {
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

