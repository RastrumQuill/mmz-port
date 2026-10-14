// sub_08015528 at 0x08015528 (thumb)

undefined4 sub_08015528(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x48) = 0xc0;
    if (*(int *)(param_1 + 0x34) < 0x1680) {
      uVar1 = 0x348;
    }
    else {
      uVar1 = 0x5dc;
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    *(undefined4 *)(param_1 + 0x50) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

