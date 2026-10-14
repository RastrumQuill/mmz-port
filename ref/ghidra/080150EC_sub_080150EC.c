// sub_080150EC at 0x080150EC (thumb)

longlong sub_080150EC(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint in_lr;
  
  iVar5 = *(int *)(param_1 + 0xc);
  uVar3 = *(uint *)(iVar5 + 4);
  if ((uVar3 & 2) == 0) {
    iVar2 = (uint)*(byte *)(iVar5 + 1) * 0x10;
    if (*(int *)(param_1 + 0x10 + iVar2) != 0) {
      if (uVar3 == 0) {
        bVar1 = *(byte *)(param_1 + iVar2 + 0x19) & ~*(byte *)(iVar5 + 2);
      }
      else {
        bVar1 = *(byte *)(param_1 + iVar2 + 0x19) | *(byte *)(iVar5 + 2);
      }
      *(byte *)(param_1 + iVar2 + 0x19) = bVar1;
    }
  }
  else {
    if ((uVar3 & 1) == 0) {
      pbVar4 = &DAT_02022ad4 + ((int)((uint)*(ushort *)(iVar5 + 2) << 0x10) >> 0x13);
      bVar1 = *pbVar4 & ~(byte)(1 << (*(ushort *)(iVar5 + 2) & 7));
    }
    else {
      pbVar4 = &DAT_02022ad4 + ((int)((uint)*(ushort *)(iVar5 + 2) << 0x10) >> 0x13);
      bVar1 = (byte)(1 << (*(ushort *)(iVar5 + 2) & 7)) | *pbVar4;
    }
    *pbVar4 = bVar1;
  }
  return (ulonglong)in_lr << 0x20;
}

