// sub_08065028 at 0x08065028 (thumb)

undefined4 sub_08065028(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar2 = (*(byte *)(param_1 + 10) >> 4 & 1) + 1 & 1;
    sub_08065A40(param_1,0x12);
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    if (uVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x800;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x12);
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) + ((uVar2 & 2) - 1) * (uVar2 & 1) * 0x100;
  if ((uVar2 == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    sub_08065ED0(param_1);
  }
  return in_lr;
}

