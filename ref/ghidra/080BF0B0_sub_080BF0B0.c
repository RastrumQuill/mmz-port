// sub_080BF0B0 at 0x080BF0B0 (thumb)

undefined8 sub_080BF0B0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0;
  DAT_020251d2 = 0;
  DAT_020251d3 = 0;
  uVar3 = 0;
  do {
    iVar1 = sub_08001018(uVar3 & 0xff,0x170);
    if (iVar1 != 0) {
      sub_08001118(uVar3 & 0xff,&DAT_02002180,0x170);
      iVar4 = iVar4 + 1;
      while ((DAT_02004ce0 == '\x01' || (DAT_02004cfe == 0))) {
        FUN_08000d3c(1);
      }
      if (DAT_02002182 != '\0') {
        DAT_020251d2 = 1;
      }
      if (DAT_02002183 != '\0') {
        DAT_020251d3 = 1;
      }
    }
    uVar2 = uVar3 * 0x10000 + 0x10000;
    uVar3 = uVar2 >> 0x10;
  } while ((int)uVar2 >> 0x10 < 3);
  return CONCAT44(in_lr,iVar4);
}

