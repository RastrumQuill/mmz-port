// sub_08017458 at 0x08017458 (thumb)

undefined4 sub_08017458(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar3 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar1] = (ushort)uVar3 | 0x47;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
    sub_081284E4(&DAT_08b3e178,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + 1;
  *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 2;
  *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + 4;
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + 8;
  return in_lr;
}

