// sub_08069370 at 0x08069370 (thumb)

undefined4 sub_08069370(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  pbVar5 = (byte *)(param_1 + 0xb4);
  puVar4 = (ushort *)(param_1 + 0xb6);
  iVar3 = (uint)*puVar4 * (uint)*(ushort *)(&DAT_0833e0a4 + (uint)*(byte *)(param_1 + 0x10) * 2);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  sub_080693E4(param_1,(uint)*pbVar5 * (*(byte *)(param_1 + 0x10) + 1) - 0x40 & 0xff,
               (uint)(iVar3 << 8) >> 0x10);
  bVar1 = *pbVar5;
  *pbVar5 = bVar1 + 1;
  if (0x13 < (byte)(bVar1 + 1)) {
    *pbVar5 = 0x13;
  }
  uVar2 = *puVar4;
  *puVar4 = uVar2 + 0x10;
  if (0xff < (ushort)(uVar2 + 0x10)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

