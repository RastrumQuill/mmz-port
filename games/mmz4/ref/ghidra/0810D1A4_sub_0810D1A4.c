// sub_0810D1A4 at 0x0810D1A4 (thumb)

undefined8 sub_0810D1A4(byte *param_1)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  undefined4 in_lr;
  uint uVar4;
  
  uVar4 = 0;
  sVar3 = 0;
  bVar1 = *param_1;
  while (bVar1 < 0xfd) {
    if (bVar1 == 0xf9) {
      iVar2 = sub_0810D1A4(DAT_0202f354);
      uVar4 = (short)uVar4 + iVar2 & 0xffff;
    }
    if (*param_1 < 0xf0) {
      uVar4 = uVar4 * 0x10000 + 0x10000 >> 0x10;
    }
    sVar3 = (short)uVar4;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  return CONCAT44(in_lr,(int)sVar3);
}

