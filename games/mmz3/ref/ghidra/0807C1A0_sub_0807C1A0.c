// sub_0807C1A0 at 0x0807C1A0 (thumb)

undefined4 sub_0807C1A0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  iVar1 = sub_08025794(*(undefined4 *)(param_1 + 0xbc));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

