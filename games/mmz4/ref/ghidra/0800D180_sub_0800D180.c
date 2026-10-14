// sub_0800D180 at 0x0800D180 (thumb)

undefined4 sub_0800D180(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar1] = (ushort)uVar2 | 0x8044;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
    sub_081284E4(&DAT_08b3bac8,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_081284E4(&DAT_08b3c2d0,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar1] & 0x1f00) * 8,0x200);
    *(undefined2 *)(param_1 + 0x10) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

