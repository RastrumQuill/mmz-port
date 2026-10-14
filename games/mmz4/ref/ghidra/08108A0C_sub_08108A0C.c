// sub_08108A0C at 0x08108A0C (thumb)

undefined8 sub_08108A0C(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  do {
    pbVar4 = (byte *)(DAT_0202edac + (uVar5 >> 2));
    uVar2 = 0x10 << (uVar5 & 3);
    bVar1 = *pbVar4;
    *pbVar4 = (byte)uVar2 | bVar1;
    if ((uVar2 & 0xff | (uint)bVar1) == 0) {
      uVar3 = 0;
      goto LAB_08108a40;
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 0x1c);
  uVar3 = 1;
LAB_08108a40:
  return CONCAT44(in_lr,uVar3);
}

