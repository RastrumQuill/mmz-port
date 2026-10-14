// sub_0800BCE4 at 0x0800BCE4 (thumb)

undefined4 sub_0800BCE4(int param_1)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  undefined4 in_lr;
  uint local_2c [3];
  
  bVar1 = *(byte *)(param_1 + 0xe);
  local_2c[0] = (uint)bVar1;
  if (local_2c[0] == 0) {
    uVar6 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    puVar8 = &DAT_02000a04 + uVar6;
    *puVar8 = (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) |
              0x8044;
    *(undefined4 *)(&DAT_02000a0c + uVar6 * 2) = 0;
    *(byte *)(param_1 + 0x68) = bVar1;
    *(byte *)(param_1 + 0x69) = bVar1;
    *(byte *)(param_1 + 0x6a) = bVar1;
    *(byte *)(param_1 + 0x6b) = bVar1;
    iVar7 = DAT_0203587c * 0x41c64e6d + 0x3039;
    *(byte *)(param_1 + 0x6c) = ((byte)((uint)iVar7 >> 0x10) & 1) + 3;
    iVar7 = iVar7 * 0x41c64e6d + 0x3039;
    *(byte *)(param_1 + 0x6d) = ((byte)((uint)iVar7 >> 0x10) & 1) + 5;
    DAT_0203587c = iVar7 * 0x41c64e6d + 0x3039;
    *(byte *)(param_1 + 0x6e) = ((byte)(DAT_0203587c >> 0x10) & 1) + 7;
    *(byte *)(param_1 + 0x6f) = bVar1;
    *(ushort *)(param_1 + 0x10) = (ushort)bVar1;
    *(ushort *)(param_1 + 0x12) = (ushort)bVar1;
    sub_081284E4(local_2c,(*puVar8 & 0x1f00) * 8 + 0x6000000,0x1000200);
    sub_081284E4(&DAT_08b39aa8,&DAT_06000800 + (*puVar8 & 0x1f00) * 8,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + '\x01';
  pbVar3 = (byte *)(param_1 + 0x69);
  if (0xfb < *pbVar3) {
    *pbVar3 = 0;
    DAT_0203587c = DAT_0203587c * 0x41c64e6d + 0x3039;
    *(char *)(param_1 + 0x6c) = ((byte)(DAT_0203587c >> 0x10) & 1) + 3;
  }
  pbVar4 = (byte *)(param_1 + 0x6a);
  if (0xf9 < *pbVar4) {
    *pbVar4 = 0;
    DAT_0203587c = DAT_0203587c * 0x41c64e6d + 0x3039;
    *(char *)(param_1 + 0x6d) = ((byte)(DAT_0203587c >> 0x10) & 1) + 5;
  }
  pbVar5 = (byte *)(param_1 + 0x6b);
  if (0xf7 < *pbVar5) {
    *pbVar5 = 0;
    DAT_0203587c = DAT_0203587c * 0x41c64e6d + 0x3039;
    *(char *)(param_1 + 0x6e) = ((byte)(DAT_0203587c >> 0x10) & 1) + 7;
  }
  if ((DAT_0202dad5 & 1) != 0) {
    bVar1 = *(byte *)(param_1 + 0x6f);
    if (bVar1 != 0x20) {
      if (*(int *)(DAT_020359b8 + 0x54) < 0x1c6000) {
        if (0x1f < bVar1) goto LAB_0800bed4;
        bVar1 = bVar1 + 1;
      }
      else {
        bVar1 = 0x20;
      }
      *(byte *)(param_1 + 0x6f) = bVar1;
    }
  }
LAB_0800bed4:
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 2;
  DAT_0203587c = DAT_0203587c * 0x41c64e6d + 0x3039;
  if ((DAT_0203587c >> 0x10 & 1) == 0) {
    if (*(short *)(param_1 + 0x12) == 0) {
      *(undefined2 *)(param_1 + 0x12) = 1;
      goto LAB_0800bf1e;
    }
    sVar2 = *(short *)(param_1 + 0x12) + -1;
  }
  else if (*(short *)(param_1 + 0x12) == 8) {
    sVar2 = 7;
  }
  else {
    sVar2 = *(short *)(param_1 + 0x12) + 1;
  }
  *(short *)(param_1 + 0x12) = sVar2;
LAB_0800bf1e:
  *pbVar3 = *(char *)(param_1 + 0x6c) + *pbVar3;
  *pbVar4 = *(char *)(param_1 + 0x6d) + *pbVar4;
  *pbVar5 = *(char *)(param_1 + 0x6e) + *pbVar5;
  return in_lr;
}

