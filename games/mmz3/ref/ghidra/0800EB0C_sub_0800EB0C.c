// sub_0800EB0C at 0x0800EB0C (thumb)

undefined4 sub_0800EB0C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0x38) < 0x691) {
      if (*(int *)(param_1 + 0x34) < 0x780) {
        *(undefined4 *)(param_1 + 0x44) = 0x20;
        *(undefined4 *)(param_1 + 0x48) = 0x20;
        *(undefined4 *)(param_1 + 0x4c) = 0x276;
        uVar1 = 0x4ec;
      }
      else {
        *(undefined4 *)(param_1 + 0x44) = 0x100;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        uVar1 = 0xa0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0x80;
      *(undefined4 *)(param_1 + 0x48) = 0x80;
      *(undefined4 *)(param_1 + 0x4c) = 0x78;
      uVar1 = 0x3c0;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

