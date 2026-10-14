// sub_08068EB8 at 0x08068EB8 (thumb)

undefined4 sub_08068EB8(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 0xb6) = 0x100;
    *(undefined *)(param_1 + 0xbc) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  cVar1 = *(char *)(iVar8 + 0xe3);
  if (cVar1 == '\x02') {
    *(undefined2 *)(param_1 + 0xb6) = 0x20;
    *(undefined *)(param_1 + 0xbc) = 0xf8;
  }
  else if (cVar1 == '\x01') {
    puVar5 = (ushort *)(param_1 + 0xb6);
    uVar3 = *puVar5;
    *puVar5 = uVar3 - 8;
    if ((ushort)(uVar3 - 8) < 0x80) {
      *puVar5 = 0x80;
    }
    pbVar6 = (byte *)(param_1 + 0xbc);
    bVar2 = *pbVar6;
    *pbVar6 = (byte)(bVar2 - 1);
    if ((int)((bVar2 - 1) * 0x1000000) >> 0x18 < -8) {
      *pbVar6 = 0xf8;
    }
  }
  else {
    puVar5 = (ushort *)(param_1 + 0xb6);
    uVar3 = *puVar5;
    *puVar5 = uVar3 + 8;
    if (0x100 < (ushort)(uVar3 + 8)) {
      *puVar5 = 0x100;
    }
    pbVar6 = (byte *)(param_1 + 0xbc);
    bVar2 = *pbVar6;
    *pbVar6 = bVar2 + 1;
    if (0 < (int)((uint)(byte)(bVar2 + 1) * 0x1000000)) {
      *pbVar6 = 0;
    }
  }
  uVar4 = ((int)*(char *)(param_1 + 0xbc) +
          (uint)(byte)(&DAT_0833e07e)[*(byte *)(param_1 + 0x12) >> 3 & 7]) *
          (*(byte *)(param_1 + 0x10) + 1) - 0x40;
  iVar7 = (uint)*(ushort *)(param_1 + 0xb6) *
          (uint)*(ushort *)(&DAT_0833e074 + (uint)*(byte *)(param_1 + 0x10) * 2);
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  *(char *)(param_1 + 0xb4) = (char)uVar4;
  sub_080693E4(param_1,uVar4 & 0xff,(uint)(iVar7 << 8) >> 0x10);
  if (*(char *)(iVar8 + 0xe2) != '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

