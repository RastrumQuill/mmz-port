// sub_080E0E70 at 0x080E0E70 (thumb)

undefined8 sub_080E0E70(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0;
  DAT_020317c6 = 0;
  DAT_020317c7 = 0;
  uVar3 = 0;
  do {
    iVar1 = sub_080020F0(uVar3 & 0xff,0x1b4);
    if (iVar1 != 0) {
      sub_080021F0(uVar3 & 0xff,&DAT_02000040,0x1b4);
      iVar4 = iVar4 + 1;
      do {
        do {
          sub_080020D0();
        } while (DAT_02000d40 == '\x01');
      } while (DAT_02000d5e == 0);
      if (DAT_02000042 != '\0') {
        DAT_020317c6 = 1;
      }
      if (DAT_02000043 != '\0') {
        DAT_020317c7 = 1;
      }
    }
    uVar2 = uVar3 * 0x10000 + 0x10000;
    uVar3 = uVar2 >> 0x10;
  } while ((int)uVar2 >> 0x10 < 6);
  return CONCAT44(in_lr,iVar4);
}

