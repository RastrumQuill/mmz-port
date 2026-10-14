// sub_08017F98 at 0x08017F98 (thumb)

undefined4 sub_08017F98(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar1] = (ushort)uVar2 | 0xa047;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
    sub_081284E4(&DAT_08b5e5d0,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_081284E4(&DAT_08b5edd8,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar1] & 0x1f00) * 8,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

