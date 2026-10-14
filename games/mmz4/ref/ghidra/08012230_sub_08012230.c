// sub_08012230 at 0x08012230 (thumb)

undefined4 sub_08012230(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 in_lr;
  uint local_1c [2];
  
  if ((DAT_0202cac0 & 0xf) != 3) {
    local_1c[0] = (uint)*(byte *)(param_1 + 0xe);
    if (local_1c[0] != 0) {
      return in_lr;
    }
    sub_081284E4(local_1c,((ushort)(&DAT_02000a04)[*(uint *)(param_1 + 0x5c) >> 4] & 0x1f00) * 8 +
                          0x6000000,0x1000400);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar3 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar1] = (ushort)uVar3 | 0x45;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
    sub_081284E4(&DAT_08b45f00,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar2 = (byte *)(param_1 + 0x68);
  if (*pbVar2 == 0) {
    DAT_0203587c = DAT_0203587c * 0x41c64e6d + 0x3039;
    if ((DAT_0203587c >> 0x10 & 0xf) == 0) {
      *pbVar2 = 1;
    }
    if (*pbVar2 == 0) goto LAB_080122da;
  }
  *(short *)(param_1 + 0x10) = (&DAT_08128c10)[*pbVar2] + *(short *)(param_1 + 0x10);
  *pbVar2 = *pbVar2 + 1;
LAB_080122da:
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 0x100;
  *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + -0x100;
  return in_lr;
}

