// sub_08012D88 at 0x08012D88 (thumb)

undefined4 sub_08012D88(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    puVar2 = &DAT_02000a04 + uVar1;
    *puVar2 = (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) |
              0x44;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
    *(undefined2 *)(param_1 + 0x70) = 0;
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    if ((DAT_0202cac0 & 0xf) == 0) {
      sub_081284E4(&DAT_08b3e980,(*puVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    else {
      sub_081284E4(&DAT_08b51e60,(*puVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + 0x10;
  *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 0xc;
  *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + 8;
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + 4;
  *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + 2;
  return in_lr;
}

