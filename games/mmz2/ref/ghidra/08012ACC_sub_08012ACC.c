// sub_08012ACC at 0x08012ACC (thumb)

undefined4 sub_08012ACC(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(char *)(param_1 + 0x71) * 2 +
                   *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x4e) = bVar1;
  if ((*(byte *)(param_1 + 0xb) & 4) != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x1e);
    iVar5 = *(int *)(&DAT_084ad300 + uVar3 * 4);
    if (*(int *)(param_1 + 0x3c) != iVar5) {
      *(int *)(param_1 + 0x3c) = iVar5;
    }
    bVar1 = *(byte *)((uint)bVar1 * 4 + iVar5 + 3);
    uVar6 = (uint)bVar1;
    if (uVar6 != *(byte *)(param_1 + 0x1f)) {
      *(byte *)(param_1 + 0x1f) = bVar1;
      uVar2 = *(short *)(&DAT_0202e790 + uVar3 * 2) + *(short *)(param_1 + 0x20);
      uVar4 = (uint)*(ushort *)(&DAT_0202e190 + uVar3 * 2) + (uint)*(byte *)(param_1 + 0x22) &
              0xffff;
      if (uVar3 < 0x90) {
        iVar5 = (int)(&DAT_084cc680 + uVar3) + uVar6 * 0xc + (&DAT_084cc680)[uVar3];
        sub_080027AC(iVar5,((uint)uVar2 - (uint)(*(ushort *)(iVar5 + 6) >> 6)) * 0x20 + 0x10000);
      }
      else {
        iVar5 = (int)(&DAT_084cc680 + uVar3) + uVar6 * 0x14 + (&DAT_084cc680)[uVar3];
        sub_080027AC(iVar5,((uint)uVar2 - (uint)(*(ushort *)(iVar5 + 6) >> 6)) * 0x20 + 0x10000);
        sub_08002AEC(iVar5 + 0xc,(uVar4 - *(byte *)(iVar5 + 0x13)) * 0x20 + 0x200);
      }
      *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) & 0xfc00 | uVar2 & 0x3ff;
      if ((*(byte *)(param_1 + 0xb) & 0x20) == 0) {
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | (byte)(uVar4 << 4);
        *(char *)(param_1 + 0x23) = (char)uVar4;
      }
    }
  }
  return in_lr;
}

