// sub_080BB524 at 0x080BB524 (thumb)

undefined8 sub_080BB524(undefined4 param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = (uint)param_2;
  bVar1 = (&DAT_0202b720)[uVar4];
  if (bVar1 - 1 < 0x4e) {
    uVar2 = sub_080BB5FC(&DAT_0202b5a0,(uint)bVar1);
    uVar2 = uVar2 & 0xffff;
    iVar3 = uVar2 * 0x14;
    sub_080014E8(&DAT_08532000 + iVar3,
                 ((uVar4 * 0x80 + 0x280) - (uint)((ushort)(&DAT_08532006)[uVar2 * 10] >> 6)) * 0x20
                 + 0x10000);
    sub_0800179C(&DAT_0853200c + iVar3,
                 ((uVar4 + 5) - (uint)(byte)(&DAT_08532013)[iVar3]) * 0x20 + 0x200);
    iVar3 = sub_08005458(DAT_02023210);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 9) = 8;
      *(undefined4 *)(iVar3 + 0x14) = 0x80bb239;
      *(undefined2 *)(iVar3 + 0x1c) = 0x390;
      *(undefined *)(iVar3 + 0x1e) = 6;
      *(undefined *)(iVar3 + 0x10) = 1;
      *(byte *)(iVar3 + 0x11) = param_2;
      *(byte *)(iVar3 + 0x74) = bVar1;
      *(char *)(iVar3 + 0x13) = (char)uVar2;
      *(undefined4 *)(iVar3 + 0x20) = param_1;
    }
  }
  else {
    iVar3 = 0;
  }
  return CONCAT44(in_lr,iVar3);
}

