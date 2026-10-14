// sub_080E982C at 0x080E982C (thumb)

undefined4 sub_080E982C(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x18);
  bVar1 = *DAT_0202ebf0;
  if ((DAT_0202ebb4 & 2) == 0) {
    sVar3 = sub_080EF2B8(bVar1,5);
    sVar2 = (sVar3 * 2 + 0xc) * 0x20;
    sVar4 = sub_080EF330(bVar1,5);
    sVar4 = sVar4 * 2;
    *(ushort *)(iVar5 + 0x308) = sVar2 + sVar4 & 0x3ffU | 0x2000;
    *(ushort *)(iVar5 + 0x30a) = sVar2 + 1 + sVar4 & 0x3ffU | 0x2000;
    sVar2 = (sVar3 * 2 + 0xd) * 0x20;
    *(ushort *)(iVar5 + 0x348) = sVar2 + sVar4 & 0x3ffU | 0x2000;
    *(ushort *)(iVar5 + 0x34a) = sVar2 + 1 + sVar4 & 0x3ffU | 0x2000;
  }
  else {
    *(ushort *)(iVar5 + 0x1e) = bVar1 + 0xb6 | 0x6000;
    *(ushort *)(iVar5 + 0x5e) = bVar1 + 0xd6 | 0x6000;
  }
  return in_lr;
}

