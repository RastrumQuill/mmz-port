// sub_081278C8 at 0x081278C8 (thumb)

undefined4 sub_081278C8(int param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if ((*(short *)(param_1 + 0x24) != 0) &&
     (sVar2 = *(short *)(param_1 + 0x26) + -1, *(short *)(param_1 + 0x26) = sVar2, sVar2 == 0)) {
    *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x24);
    uVar1 = *(ushort *)(param_1 + 0x28);
    if ((uVar1 & 2) == 0) {
      iVar4 = uVar1 - 0x10;
      *(short *)(param_1 + 0x28) = (short)iVar4;
      if (iVar4 * 0x10000 < 1) {
        uVar3 = (uint)*(byte *)(param_1 + 8);
        pbVar5 = *(byte **)(param_1 + 0x2c);
        if (uVar3 != 0) {
          do {
            sub_08126C8C(param_1,pbVar5);
            if ((*(ushort *)(param_1 + 0x28) & 1) == 0) {
              *pbVar5 = (byte)*(ushort *)(param_1 + 0x28) & 1;
            }
            uVar3 = uVar3 - 1;
            pbVar5 = pbVar5 + 0x50;
          } while (0 < (int)uVar3);
        }
        if ((*(ushort *)(param_1 + 0x28) & 1) == 0) {
          uVar3 = 0x80000000;
        }
        else {
          uVar3 = *(uint *)(param_1 + 4) | 0x80000000;
        }
        *(uint *)(param_1 + 4) = uVar3;
        *(undefined2 *)(param_1 + 0x24) = 0;
        return in_lr;
      }
    }
    else {
      uVar3 = uVar1 + 0x10;
      *(short *)(param_1 + 0x28) = (short)uVar3;
      if (0xff < (uVar3 & 0xffff)) {
        *(undefined2 *)(param_1 + 0x28) = 0x100;
        *(undefined2 *)(param_1 + 0x24) = 0;
      }
    }
    uVar3 = (uint)*(byte *)(param_1 + 8);
    pbVar5 = *(byte **)(param_1 + 0x2c);
    if (uVar3 != 0) {
      do {
        if ((*pbVar5 & 0x80) != 0) {
          pbVar5[0x13] = (byte)(*(ushort *)(param_1 + 0x28) >> 2);
          *pbVar5 = *pbVar5 | 3;
        }
        uVar3 = uVar3 - 1;
        pbVar5 = pbVar5 + 0x50;
      } while (0 < (int)uVar3);
    }
  }
  return in_lr;
}

