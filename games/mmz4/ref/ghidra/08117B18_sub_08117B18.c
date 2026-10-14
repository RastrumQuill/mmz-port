// sub_08117B18 at 0x08117B18 (thumb)

undefined4 sub_08117B18(int param_1)

{
  byte bVar1;
  undefined uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x63a8);
  pbVar7 = (byte *)(iVar5 + 0x153);
  bVar1 = *pbVar7;
  puVar8 = (undefined *)(iVar5 + 0xe4);
  uVar2 = *puVar8;
  bVar3 = *(byte *)(param_1 + 0xdf2);
  if (bVar3 != *(byte *)(iVar5 + 0xc0)) {
    if (bVar3 != *(byte *)(iVar5 + 0xc1)) {
      puVar6 = (ushort *)(iVar5 + 0x15a);
      uVar4 = *puVar6;
      *puVar6 = uVar4 | 0x8000;
      *puVar6 = uVar4 | 0x8000 | (ushort)(byte)(&DAT_08885dd0)[*(byte *)(param_1 + 0xdf2)];
    }
    if (*(char *)(param_1 + 0xdf3) == *(char *)(iVar5 + 0xc0)) {
      *pbVar7 = *pbVar7 & 0xef | (byte)((((uint)bVar1 << 0x1a) >> 0x1f) << 4);
      *puVar8 = *(undefined *)(iVar5 + 0xe5);
    }
    else {
      *pbVar7 = *pbVar7 & 0xef;
      *puVar8 = 0;
    }
  }
  bVar3 = *(byte *)(param_1 + 0xdf3);
  if (bVar3 != *(byte *)(iVar5 + 0xc1)) {
    if (bVar3 != *(byte *)(iVar5 + 0xc0)) {
      puVar6 = (ushort *)(iVar5 + 0x15a);
      uVar4 = *puVar6;
      *puVar6 = uVar4 | 0x8000;
      *puVar6 = uVar4 | 0x8000 | (ushort)(byte)(&DAT_08885dd0)[*(byte *)(param_1 + 0xdf3)];
    }
    if (*(char *)(param_1 + 0xdf2) == *(char *)(iVar5 + 0xc1)) {
      *(byte *)(iVar5 + 0x153) =
           *(byte *)(iVar5 + 0x153) & 0xdf | (byte)((((uint)bVar1 << 0x1b) >> 0x1f) << 5);
      *(undefined *)(iVar5 + 0xe5) = uVar2;
    }
    else {
      *(byte *)(iVar5 + 0x153) = *(byte *)(iVar5 + 0x153) & 0xdf;
      *(undefined *)(iVar5 + 0xe5) = 0;
    }
  }
  return in_lr;
}

