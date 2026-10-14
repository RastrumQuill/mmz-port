// sub_0800CCD4 at 0x0800CCD4 (thumb)

undefined4 sub_0800CCD4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000a04)[(*(uint *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_02000a04)[(*(uint *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x34) < 0x1771) {
    if (0x10e0 < *(int *)(param_1 + 0x34)) {
      if (uVar2 == 0x24) {
        *(undefined4 *)(param_1 + 0x4c) = 0x924;
        *(undefined4 *)(param_1 + 0x50) = 400;
        uVar1 = 0x80;
        *(undefined4 *)(param_1 + 0x44) = 0x80;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = 0x12c0;
        *(undefined4 *)(param_1 + 0x50) = 0x280;
        uVar1 = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      goto LAB_0800cd76;
    }
    uVar1 = 0x2d0;
  }
  else {
    if (uVar2 == 0x24) {
      *(undefined4 *)(param_1 + 0x4c) = 0xd5c;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0x80;
      uVar1 = 0x100;
      goto LAB_0800cd76;
    }
    uVar1 = 0x1670;
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x40;
  uVar1 = 0x100;
LAB_0800cd76:
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  return in_lr;
}

