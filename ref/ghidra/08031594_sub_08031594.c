// sub_08031594 at 0x08031594 (thumb)

undefined4 sub_08031594(int param_1)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 0x1a);
  if (((uVar1 & 0x40) == 0) && ((uVar1 & 1) != 0)) {
    iVar2 = *(int *)(param_1 + 0x40);
    pbVar3 = (byte *)(iVar2 + 0xd8);
    if ((int)*(short *)(iVar2 + 0x8c) < (int)(char)*pbVar3) {
      *(undefined *)(iVar2 + 0xd) = 0xd;
      *(undefined *)(iVar2 + 0xe) = 1;
      iVar2 = *(byte *)(short *)(iVar2 + 0x8c) - 0xc;
      *pbVar3 = (byte)iVar2;
      if (iVar2 * 0x1000000 < 0) {
        *pbVar3 = (byte)uVar1 & 0x40;
      }
    }
  }
  return in_lr;
}

