// sub_08039508 at 0x08039508 (thumb)

undefined4 sub_08039508(int param_1)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 in_lr;
  
  pbVar4 = (byte *)(param_1 + 0x277);
  if (*pbVar4 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x250);
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 0x20) == 0) {
        *pbVar4 = (byte)uVar1 & 0x20;
        return in_lr;
      }
      uVar3 = 1;
      puVar5 = (ushort *)(param_1 + 0x1d0);
      do {
        uVar1 = puVar5[uVar3];
        if ((uVar1 & 0x1000) != 0) {
          return in_lr;
        }
        if ((uVar1 & 0x10) != 0) {
          return in_lr;
        }
        bVar2 = (byte)uVar1 & 0x20;
        if ((uVar1 & 0x20) != 0) {
          uVar6 = uVar3 + 0xb;
          if (uVar6 <= uVar3) {
            return in_lr;
          }
          do {
            if ((puVar5[uVar3] & 0x20) == 0) {
              *puVar5 = *puVar5 | 0x1000;
              *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 4;
              *(undefined *)(param_1 + 0x277) = 0x1c;
            }
            uVar3 = uVar3 + 1 & 0xff;
          } while (uVar3 < uVar6);
          return in_lr;
        }
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < 0xb);
    }
    else {
      uVar3 = 1;
      puVar5 = (ushort *)(param_1 + 0x1d0);
      do {
        uVar1 = puVar5[uVar3];
        if ((uVar1 & 0x1000) != 0) {
          return in_lr;
        }
        if ((uVar1 & 0x20) != 0) {
          return in_lr;
        }
        bVar2 = (byte)uVar1 & 0x10;
        if ((uVar1 & 0x10) != 0) {
          uVar6 = uVar3 + 10;
          if (uVar6 <= uVar3) {
            return in_lr;
          }
          do {
            if ((puVar5[uVar3] & 0x10) == 0) {
              *puVar5 = *puVar5 | 0x1000;
              *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 4;
              *(undefined *)(param_1 + 0x277) = 0x1c;
            }
            uVar3 = uVar3 + 1 & 0xff;
          } while (uVar3 < uVar6);
          return in_lr;
        }
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < 10);
    }
    *(byte *)(param_1 + 0x277) = bVar2;
  }
  else {
    *pbVar4 = *pbVar4 - 1;
    *(ushort *)(param_1 + 0x1d0) = *(ushort *)(param_1 + 0x1d0) | 0x1000;
    if ((*(ushort *)(param_1 + 0x252) & 0x30) == 0) {
      *pbVar4 = 0;
    }
    else {
      *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 8;
    }
  }
  return in_lr;
}

