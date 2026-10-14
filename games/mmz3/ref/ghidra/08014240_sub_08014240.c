// sub_08014240 at 0x08014240 (thumb)

undefined4 sub_08014240(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x34) < 0xb40) && (*(int *)(param_1 + 0x38) < 0x3c0)) {
    *(undefined4 *)(param_1 + 0x44) = 0x40;
    *(undefined4 *)(param_1 + 0x48) = 0x40;
    *(undefined4 *)(param_1 + 0x4c) = 0x4ec;
    uVar1 = 0xf0;
  }
  else if (*(int *)(param_1 + 0x34) < 0xf00) {
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(undefined4 *)(param_1 + 0x4c) = 0x5a0;
    if (*(int *)(param_1 + 0x38) < 0x3c0) {
      uVar1 = 400;
    }
    else {
      uVar1 = 800;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(undefined4 *)(param_1 + 0x4c) = 0x8e8;
    uVar1 = 0x410;
  }
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  return in_lr;
}

