// sub_080131E8 at 0x080131E8 (thumb)

undefined4 sub_080131E8(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar3 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar1] = (ushort)uVar3 | 0x44;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
    if ((DAT_0202cac0 & 0xf) == 0) {
      sub_081284E4(&DAT_08b3f188,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    else {
      sub_081284E4(&DAT_08b51658,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar2 = (ushort *)(param_1 + 0x68);
  if ((*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x34)) * 0x10 + 0x1000 < (int)(uint)*puVar2) {
    *puVar2 = 0;
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x34);
  }
  *puVar2 = *puVar2 + 0x10;
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
  return in_lr;
}

