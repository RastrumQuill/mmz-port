// sub_0809CA38 at 0x0809CA38 (thumb)

undefined8 sub_0809CA38(char param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(DAT_02022b20 + 0xf);
  if (bVar2 == 3) {
    if (DAT_02022af3 == 0) {
      uVar3 = 0x23;
      if ((*(uint *)(DAT_02022b20 + 0x14) & 8) != 0) {
        uVar3 = 0x22;
      }
    }
    else {
      uVar3 = 0x24;
    }
LAB_0809caf2:
    bVar2 = 1;
  }
  else {
    if (bVar2 < 4) {
      if (bVar2 == 1) {
        if ((DAT_02022ad4 & 0x40) == 0) {
          if ((DAT_02022ad5 & 1) == 0) {
            uVar3 = 0x10;
            if ((DAT_02022ad4 & 0x80) != 0) {
              uVar3 = 0xe;
            }
          }
          else {
            uVar3 = 0xf;
          }
        }
        else {
          uVar3 = 0xd;
        }
        bVar2 = 9;
        goto LAB_0809caf4;
      }
    }
    else if (bVar2 == 0xf) {
      uVar3 = 0x45;
      if (DAT_02022af3 == 0) {
        uVar3 = 0x39;
      }
      goto LAB_0809caf2;
    }
    iVar1 = (uint)*(byte *)(DAT_02022b20 + 0xf) * 4;
    if ((*(uint *)(DAT_02022b20 + 0x14) & 1 << (uint)*(byte *)(DAT_02022b20 + 0xf)) == 0) {
      iVar1 = iVar1 + 2;
    }
    uVar3 = (uint)*(ushort *)(&DAT_082b538a + iVar1);
    bVar2 = 1;
  }
LAB_0809caf4:
  if ((param_1 == '\0') && (bVar2 <= DAT_02022af3)) {
    uVar3 = 0xffffffff;
  }
  else if (DAT_02022af3 < 8) {
    DAT_02022af3 = DAT_02022af3 + 1;
  }
  return CONCAT44(in_lr,uVar3);
}

