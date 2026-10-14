// sub_080186F4 at 0x080186F4 (thumb)

undefined4 sub_080186F4(int param_1)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar1] = (ushort)uVar2 | 0x45;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
    sub_081284E4(&DAT_08b3f990,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    DAT_02000a40 = 0x3b44;
    DAT_02000a42 = 0x80c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar3 = (ushort *)(param_1 + 0x68);
  if ((*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x34)) * 0x10 + 0x1000 < (int)(uint)*puVar3) {
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x34);
  }
  *puVar3 = *puVar3 + 8;
  *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 4;
  *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + 8;
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + 0xc;
  return in_lr;
}

