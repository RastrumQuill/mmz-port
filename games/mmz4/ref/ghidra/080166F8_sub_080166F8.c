// sub_080166F8 at 0x080166F8 (thumb)

undefined4 sub_080166F8(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar1] = (ushort)uVar2 | 0x47;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
    sub_081284E4(&DAT_08b4a748,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined4 *)(param_1 + 0x4c) = 0x724;
    *(undefined4 *)(param_1 + 0x50) = 0x3c0;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x48) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

