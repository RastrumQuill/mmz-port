// sub_08011574 at 0x08011574 (thumb)

undefined4 sub_08011574(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(int *)(param_1 + 0x34) < 0x1c20) {
    uVar1 = 0xca8;
  }
  else {
    uVar1 = 0xe88;
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  return in_lr;
}

