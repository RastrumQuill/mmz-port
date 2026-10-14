// sub_08022C50 at 0x08022C50 (thumb)

longlong sub_08022C50(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint in_lr;
  
  iVar5 = *(int *)(param_1 + 0xc);
  uVar2 = *(uint *)(iVar5 + 4);
  if ((uVar2 & 2) == 0) {
    iVar4 = (uint)*(byte *)(iVar5 + 1) * 0x10;
    if (*(int *)(param_1 + 0x10 + iVar4) != 0) {
      if (uVar2 == 0) {
        bVar1 = *(byte *)(param_1 + iVar4 + 0x19) & ~*(byte *)(iVar5 + 2);
      }
      else {
        bVar1 = *(byte *)(param_1 + iVar4 + 0x19) | *(byte *)(iVar5 + 2);
      }
      *(byte *)(param_1 + iVar4 + 0x19) = bVar1;
    }
  }
  else {
    if ((uVar2 & 1) == 0) {
      pbVar3 = &DAT_02030104 + ((int)((uint)*(ushort *)(iVar5 + 2) << 0x10) >> 0x13);
      bVar1 = *pbVar3 & ~(byte)(1 << (*(ushort *)(iVar5 + 2) & 7));
    }
    else {
      pbVar3 = &DAT_02030104 + ((int)((uint)*(ushort *)(iVar5 + 2) << 0x10) >> 0x13);
      bVar1 = (byte)(1 << (*(ushort *)(iVar5 + 2) & 7)) | *pbVar3;
    }
    *pbVar3 = bVar1;
  }
  return (ulonglong)in_lr << 0x20;
}

