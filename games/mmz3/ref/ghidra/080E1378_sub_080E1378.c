// sub_080E1378 at 0x080E1378 (thumb)

undefined8 sub_080E1378(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  while( true ) {
    if ((((byte)(&DAT_0836e30c)[uVar2 * 4] & 7) !=
         (uint)(*(int *)(DAT_0203063c + uVar2) << 0x1b) >> 0x1e) ||
       ((((uint)(byte)(&DAT_0836e30c)[uVar2 * 4] << 0x1a) >> 0x1d == 2 &&
        ((*(byte *)(int *)(DAT_0203063c + uVar2) & 4) == 0)))) break;
    uVar2 = uVar2 + 1 & 0xff;
    if (0x49 < uVar2) {
      uVar1 = 1;
LAB_080e13c4:
      return CONCAT44(in_lr,uVar1);
    }
  }
  uVar1 = 0;
  goto LAB_080e13c4;
}

