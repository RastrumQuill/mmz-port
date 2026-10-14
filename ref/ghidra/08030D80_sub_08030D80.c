// sub_08030D80 at 0x08030D80 (thumb)

undefined4 sub_08030D80(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0x200;
      uVar1 = 0xfffffff8;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffe00;
      uVar1 = 8;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined4 *)(param_1 + 0x58) = 0xffffffc0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x54) == 0) {
    *(undefined *)(param_1 + 0xd) = 0xc;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

