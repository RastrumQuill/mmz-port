// sub_08094924 at 0x08094924 (thumb)

undefined4 sub_08094924(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    sub_08006E08(param_1 + 0x74,&DAT_08342b10);
    sub_080127E4(param_1,0x9802);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar1 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    if (iVar1 < 0) {
      iVar1 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54);
    }
    if (iVar1 < 0x6000) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_08094370(param_1,0,0x100);
  sub_080128D4(param_1);
  return in_lr;
}

