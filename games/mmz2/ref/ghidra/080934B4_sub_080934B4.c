// sub_080934B4 at 0x080934B4 (thumb)

undefined4 sub_080934B4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x9001);
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar1 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54);
    if (iVar1 < 0) {
      iVar1 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    }
    if (iVar1 < 0x7000) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_080128D4(param_1);
  return in_lr;
}

