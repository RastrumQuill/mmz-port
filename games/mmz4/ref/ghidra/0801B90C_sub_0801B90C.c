// sub_0801B90C at 0x0801B90C (thumb)

undefined4 sub_0801B90C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x34) < 0x780) {
      *(undefined4 *)(param_1 + 0x4c) = 0x2d0;
      uVar1 = 0x6e0;
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 0xb40;
      uVar1 = 0x3c0;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

