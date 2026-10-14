// sub_0800F218 at 0x0800F218 (thumb)

undefined4 sub_0800F218(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    return in_lr;
  }
  bVar1 = (&DAT_0831348c)[*(int *)(param_1 + 0x34) >> 4];
  bVar2 = (&DAT_08312c8c)[*(int *)(param_1 + 0x38) >> 4];
  if (bVar2 < 5) {
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(undefined4 *)(param_1 + 0x4c) = 0x78;
    uVar3 = 0x140;
  }
  else {
    if (bVar1 < 0xe) {
      *(undefined4 *)(param_1 + 0x44) = 0xc0;
      *(undefined4 *)(param_1 + 0x4c) = 0xf0;
      goto LAB_0800f2a0;
    }
    if (((0x10 < bVar1) && (7 < bVar2)) && (bVar2 < 10)) {
      *(undefined4 *)(param_1 + 0x44) = 0xc0;
      *(undefined4 *)(param_1 + 0x4c) = 0x4b0;
      goto LAB_0800f2a0;
    }
    if (((0xf < bVar1) && (10 < bVar2)) && (bVar2 < 0xd)) {
      *(undefined4 *)(param_1 + 0x44) = 0xc0;
      *(undefined4 *)(param_1 + 0x4c) = 0x438;
      goto LAB_0800f2a0;
    }
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(undefined4 *)(param_1 + 0x4c) = 0x690;
    uVar3 = 0x3c0;
  }
  *(undefined4 *)(param_1 + 0x50) = uVar3;
LAB_0800f2a0:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

