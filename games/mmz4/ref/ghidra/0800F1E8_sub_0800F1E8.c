// sub_0800F1E8 at 0x0800F1E8 (thumb)

undefined4 sub_0800F1E8(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar3 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar2] = (ushort)uVar3 | 0x8047;
    *(undefined4 *)(&DAT_02000a0c + uVar2 * 2) = 0;
    sub_081284E4(&DAT_08b49f40,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_081284E4(&DAT_08b47f20,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar2] & 0x1f00) * 8,0x200);
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x48) = 0xc0;
    uVar1 = (undefined2)((uint)(*(int *)(param_1 + 0x34) * 0xc0) >> 8);
    *(undefined2 *)(param_1 + 0x6c) = uVar1;
    *(undefined2 *)(param_1 + 0x6e) = uVar1;
    uVar1 = sub_08128A9C(*(undefined2 *)(param_1 + 0x6e),0x960);
    *(undefined2 *)(param_1 + 0x6a) = uVar1;
    *(undefined *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

