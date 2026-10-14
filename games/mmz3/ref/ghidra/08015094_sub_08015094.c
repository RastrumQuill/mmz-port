// sub_08015094 at 0x08015094 (thumb)

undefined4 sub_08015094(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0x34) < 0x871) {
      if (*(int *)(param_1 + 0x38) < 0x1e0) {
        *(undefined4 *)(param_1 + 0x44) = 0x80;
        *(undefined4 *)(param_1 + 0x48) = 0x80;
        *(undefined4 *)(param_1 + 0x4c) = 0x78;
        uVar1 = 0x50;
      }
      else {
        *(undefined4 *)(param_1 + 0x44) = 0x40;
        *(undefined4 *)(param_1 + 0x48) = 0x40;
        *(undefined4 *)(param_1 + 0x4c) = 0x168;
        uVar1 = 0x2d0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0x100;
      *(undefined4 *)(param_1 + 0x48) = 0x40;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      uVar1 = 0x708;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

