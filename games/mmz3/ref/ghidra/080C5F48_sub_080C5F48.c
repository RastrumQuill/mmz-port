// sub_080C5F48 at 0x080C5F48 (thumb)

undefined4 sub_080C5F48(int param_1)

{
  byte bVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined4 in_lr;
  
  psVar3 = *(short **)(param_1 + 0x28);
  iVar2 = (int)*psVar3;
  if (iVar2 < 4) {
LAB_080c5f98:
    iVar4 = -0x5a00;
  }
  else {
    if (6 < iVar2) {
      if (iVar2 == 7) {
        *(int *)(param_1 + 0x54) = DAT_020302c0;
        goto LAB_080c5fa8;
      }
      iVar2 = *psVar3 + -8;
      goto LAB_080c5f98;
    }
    iVar2 = *psVar3 + -4;
    iVar4 = -0x3c00;
  }
  *(int *)(param_1 + 0x54) = DAT_020302c0 + iVar2 * 0x3c00 + iVar4;
LAB_080c5fa8:
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_0801749C(param_1);
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
    *(undefined *)(param_1 + 0x25) = 0;
    sub_08017700(param_1,0xcc01);
    *(int *)(param_1 + 0x58) = DAT_020302c4 + -0x2800;
    DAT_0202f4a5 = 1;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  DAT_02002402 = (ushort)((int)(0x20 - (uint)*(byte *)(param_1 + 0x12)) >> 1) & 0x1f |
                 (ushort)(*(byte *)(param_1 + 0x12) >> 1) << 8;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}

