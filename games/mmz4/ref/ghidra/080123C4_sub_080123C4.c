// sub_080123C4 at 0x080123C4 (thumb)

undefined4 sub_080123C4(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar1] = (ushort)uVar2 | 0x44;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
    if ((DAT_0202cac0 & 0xf) == 0) {
      sub_081284E4(&DAT_08b46f10,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    else {
      sub_081284E4(&DAT_08b47718,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
  return in_lr;
}

