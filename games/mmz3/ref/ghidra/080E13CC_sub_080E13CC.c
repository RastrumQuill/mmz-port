// sub_080E13CC at 0x080E13CC (thumb)

ulonglong sub_080E13CC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0xce) == '\x02') {
    uVar1 = (uint)*(ushort *)(param_1 + 0xb8);
    *(undefined2 *)(param_1 + 0xb8) = 0;
  }
  else {
    if ((*DAT_0203063c & 2) != 0) {
      uVar1 = 5;
    }
    if ((DAT_0203063c[1] & 2) != 0) {
      uVar1 = uVar1 + 2;
    }
    if ((DAT_0203063c[2] & 2) != 0) {
      uVar1 = uVar1 + 2;
    }
    if ((DAT_0203063c[3] & 2) != 0) {
      uVar1 = uVar1 + 2;
    }
    if ((DAT_0203063c[4] & 2) != 0) {
      uVar1 = uVar1 + 2;
    }
    if ((DAT_0203063c[5] & 2) != 0) {
      uVar1 = uVar1 + 2;
    }
    if ((DAT_0203063c[6] & 2) != 0) {
      uVar1 = uVar1 + 2;
    }
    if ((DAT_0203063c[0x1b] & 2) != 0) {
      uVar1 = uVar1 + 5;
    }
    if ((DAT_0203063c[0x1c] & 2) != 0) {
      uVar1 = uVar1 + 2;
    }
    if ((DAT_0203063c[0x1d] & 2) != 0) {
      uVar1 = uVar1 + 2;
    }
    if ((DAT_0203063c[0x1e] & 2) != 0) {
      uVar1 = uVar1 + 2;
    }
    if ((DAT_0203063c[0x1f] & 2) != 0) {
      uVar1 = uVar1 + 2;
    }
    if ((DAT_0203063c[0x28] & 2) != 0) {
      uVar1 = uVar1 + 5;
    }
    if ((DAT_0203063c[0x29] & 2) != 0) {
      uVar1 = uVar1 + 1;
    }
    if ((DAT_0203063c[0x2a] & 2) != 0) {
      uVar1 = uVar1 + 1 & 0xffff;
    }
    if ((DAT_0203063c[0x2b] & 2) != 0) {
      uVar1 = uVar1 + 2 & 0xffff;
    }
    if ((DAT_0203063c[0x2c] & 2) != 0) {
      uVar1 = uVar1 + 1 & 0xffff;
    }
    if ((DAT_0203063c[0x2d] & 2) != 0) {
      uVar1 = uVar1 + 2 & 0xffff;
    }
    if ((DAT_0203063c[0x2e] & 2) != 0) {
      uVar1 = uVar1 + 1 & 0xffff;
    }
    if ((DAT_0203063c[0x2f] & 2) != 0) {
      uVar1 = uVar1 + 1 & 0xffff;
    }
    if ((DAT_0203063c[0x30] & 2) != 0) {
      uVar1 = uVar1 + 1 & 0xffff;
    }
    if ((DAT_0203063c[0x31] & 2) != 0) {
      uVar1 = uVar1 + 1 & 0xffff;
    }
    if ((DAT_0203063c[0x32] & 2) != 0) {
      uVar1 = uVar1 + 1 & 0xffff;
    }
    if ((DAT_0203063c[0x33] & 2) != 0) {
      uVar1 = uVar1 + 1 & 0xffff;
    }
    if ((DAT_0203063c[0x34] & 2) != 0) {
      uVar1 = uVar1 + 1 & 0xffff;
    }
    uVar1 = uVar1 + *(ushort *)(param_1 + 0xb8) & 0xffff;
    *(undefined2 *)(param_1 + 0xb8) = 0;
  }
  if (0x73 < uVar1) {
    uVar1 = 0x73;
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

