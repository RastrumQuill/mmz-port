// sub_0800F4B8 at 0x0800F4B8 (thumb)

undefined4 sub_0800F4B8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = (&DAT_0831348c)[*(int *)(param_1 + 0x34) >> 4];
    if (bVar1 < 3) {
      *(undefined4 *)(param_1 + 0x44) = 0xc0;
      *(undefined4 *)(param_1 + 0x4c) = 0x3c;
    }
    else if (bVar1 < 10) {
      *(undefined4 *)(param_1 + 0x44) = 0xc0;
      *(undefined4 *)(param_1 + 0x4c) = 0x1e0;
    }
    else if (bVar1 < 0x12) {
      *(undefined4 *)(param_1 + 0x44) = 0xc0;
      *(undefined4 *)(param_1 + 0x4c) = 0x2d0;
    }
    else if (bVar1 < 0x1a) {
      *(undefined4 *)(param_1 + 0x48) = 0x80;
      *(undefined4 *)(param_1 + 0x50) = 800;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0xc0;
      *(undefined4 *)(param_1 + 0x4c) = 0x654;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

