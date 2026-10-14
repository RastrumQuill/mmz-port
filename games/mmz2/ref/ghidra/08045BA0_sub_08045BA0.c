// sub_08045BA0 at 0x08045BA0 (thumb)

undefined4 sub_08045BA0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa007);
    iVar1 = *(int *)(param_1 + 0xc0);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0xb4) = 1;
      *(int *)(param_1 + 0xc0) = 0;
    }
    sub_080032EC(0x4f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  return in_lr;
}

