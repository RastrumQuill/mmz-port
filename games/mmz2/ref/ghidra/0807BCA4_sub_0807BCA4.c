// sub_0807BCA4 at 0x0807BCA4 (thumb)

undefined4 sub_0807BCA4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080127E4(param_1,*(byte *)(param_1 + 0x10) + 0x501c);
    }
    else {
      sub_080127E4(param_1,*(byte *)(param_1 + 0x10) + 0x502c);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(int *)(iVar1 + 0xd4) == 0) {
    *(undefined *)(param_1 + 0xd) = 0x11;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

