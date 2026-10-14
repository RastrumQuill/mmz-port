// sub_080EAB0C at 0x080EAB0C (thumb)

undefined4 sub_080EAB0C(ushort *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  bVar2 = DAT_0202ebb4 & 2;
  iVar4 = 0;
  do {
    if (bVar2 == 0) {
      bVar1 = (&DAT_0835e725)[iVar4];
      puVar3 = &DAT_0835e724;
    }
    else {
      bVar1 = (&DAT_0835e719)[iVar4];
      puVar3 = &DAT_0835e718;
    }
    *param_1 = (ushort)bVar1 * 0x20 + (ushort)(byte)puVar3[iVar4] & 0x3ff |
               (ushort)(((param_2 & 0xf) << 0x18) >> 0xc);
    param_1 = param_1 + 1;
    iVar4 = iVar4 + 2;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 6);
  return in_lr;
}

