// sub_0800DC18 at 0x0800DC18 (thumb)

undefined4 sub_0800DC18(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = (&DAT_08335ec0)[*(int *)(param_1 + 0x34) >> 4];
  if (bVar1 < 6) {
    *(undefined4 *)(param_1 + 0x44) = 0x40;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(undefined4 *)(param_1 + 0x4c) = 0x168;
    return in_lr;
  }
  if (bVar1 < 0xf) {
    *(undefined4 *)(param_1 + 0x4c) = 0x618;
    uVar2 = 0x140;
  }
  else {
    if (bVar1 < 0x11) {
      uVar2 = 0x780;
    }
    else {
      if (bVar1 < 0x14) {
        *(undefined4 *)(param_1 + 0x4c) = 0x870;
        uVar2 = 0x118;
        goto LAB_0800dc7e;
      }
      if (bVar1 < 0x1c) {
        uVar2 = 3000;
      }
      else {
        uVar2 = 0xdb0;
      }
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    uVar2 = 400;
  }
LAB_0800dc7e:
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  return in_lr;
}

