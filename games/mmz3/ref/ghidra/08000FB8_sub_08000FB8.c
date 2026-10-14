// sub_08000FB8 at 0x08000FB8 (thumb)

undefined4 sub_08000FB8(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((DAT_02000fd1 == '\b') && (DAT_02000fd0 == '\b')) {
    uVar1 = FUN_08000e28(DAT_02001018);
    if ((uVar1 & 0x7f) == 0) {
      if (DAT_02000fdc != 0) {
        return 1;
      }
    }
    else if (7 < DAT_02000fdc) {
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

