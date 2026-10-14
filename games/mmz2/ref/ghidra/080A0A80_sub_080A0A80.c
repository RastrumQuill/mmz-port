// sub_080A0A80 at 0x080A0A80 (thumb)

undefined4 sub_080A0A80(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080a0ade;
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0834441c);
  }
  else {
    sub_08006E08(param_1 + 0x74,&DAT_0834444c);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if ((*(uint *)(iVar1 + 0xc0) & 2) != 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
LAB_080a0ade:
  if (*(char *)(param_1 + 0xb4) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

