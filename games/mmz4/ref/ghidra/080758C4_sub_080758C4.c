// sub_080758C4 at 0x080758C4 (thumb)

undefined4 sub_080758C4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaf16);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x72) < '\x02') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(param_1 + 0x54) - *(int *)(&DAT_08859bc4 + *(char *)(param_1 + 0x71) * 4);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_08859bc4 + *(char *)(param_1 + 0x71) * 4);
    }
    *(int *)(param_1 + 0x54) = iVar1;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

