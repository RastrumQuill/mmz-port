// sub_08065198 at 0x08065198 (thumb)

undefined4 sub_08065198(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x1300);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (6 < *(short *)(DAT_020305f8 + 10)) {
    if (((*(int *)(DAT_0202f5c0 + 0x54) <= *(int *)(param_1 + 0x54) !=
          (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) &&
        ((*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6e00U < 0xdc01)) &&
       ((*(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x5000U < 0xa001)) {
      *(undefined *)(param_1 + 0xf) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

