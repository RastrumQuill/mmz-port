// sub_0800DB9C at 0x0800DB9C (thumb)

undefined4 sub_0800DB9C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 2;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x48) = 0xc0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = (&DAT_08335ec0)[*(int *)(param_1 + 0x34) >> 4];
  if (bVar1 < 6) {
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(undefined4 *)(param_1 + 0x4c) = 0x78;
    return in_lr;
  }
  if (bVar1 < 0x11) {
    uVar2 = 0x3c0;
  }
  else {
    if (bVar1 < 0x14) {
      *(undefined4 *)(param_1 + 0x4c) = 0x438;
      uVar2 = 0x8c;
      goto LAB_0800dc10;
    }
    uVar2 = 0x6d8;
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  uVar2 = 200;
LAB_0800dc10:
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  return in_lr;
}

