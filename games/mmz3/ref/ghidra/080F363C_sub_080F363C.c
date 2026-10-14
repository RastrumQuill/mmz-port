// sub_080F363C at 0x080F363C (thumb)

undefined4 sub_080F363C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x64ac);
  pbVar5 = (byte *)(iVar6 + 0x124);
  bVar1 = *pbVar5;
  puVar7 = (undefined *)(iVar6 + 0xdc);
  uVar2 = *puVar7;
  bVar3 = *(byte *)(param_1 + 0xe12);
  if (bVar3 != *(byte *)(iVar6 + 0xc0)) {
    if (bVar3 != *(byte *)(iVar6 + 0xc1)) {
      pbVar4 = (byte *)(iVar6 + 0x136);
      bVar3 = *pbVar4;
      *pbVar4 = bVar3 | 0x80;
      *pbVar4 = bVar3 | 0x80 | (&DAT_0838ba00)[*(byte *)(param_1 + 0xe12)];
    }
    if (*(char *)(param_1 + 0xe13) == *(char *)(iVar6 + 0xc0)) {
      *pbVar5 = *pbVar5 & 0xef | (byte)((((uint)bVar1 << 0x1a) >> 0x1f) << 4);
      *puVar7 = *(undefined *)(iVar6 + 0xdd);
    }
    else {
      *pbVar5 = *pbVar5 & 0xef;
      *puVar7 = 0;
    }
  }
  bVar3 = *(byte *)(param_1 + 0xe13);
  if (bVar3 != *(byte *)(iVar6 + 0xc1)) {
    if (bVar3 != *(byte *)(iVar6 + 0xc0)) {
      pbVar5 = (byte *)(iVar6 + 0x136);
      bVar3 = *pbVar5;
      *pbVar5 = bVar3 | 0x80;
      *pbVar5 = bVar3 | 0x80 | (&DAT_0838ba00)[*(byte *)(param_1 + 0xe13)];
    }
    if (*(char *)(param_1 + 0xe12) == *(char *)(iVar6 + 0xc1)) {
      *(byte *)(iVar6 + 0x124) =
           *(byte *)(iVar6 + 0x124) & 0xdf | (byte)((((uint)bVar1 << 0x1b) >> 0x1f) << 5);
      *(undefined *)(iVar6 + 0xdd) = uVar2;
    }
    else {
      *(byte *)(iVar6 + 0x124) = *(byte *)(iVar6 + 0x124) & 0xdf;
      *(undefined *)(iVar6 + 0xdd) = 0;
    }
  }
  return in_lr;
}

