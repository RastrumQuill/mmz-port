// sub_0800FD34 at 0x0800FD34 (thumb)

undefined4 sub_0800FD34(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar2 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar1] = (ushort)uVar2 | 0x47;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
    if ((DAT_0202cac0 & 0xf) == 3) {
      sub_081284E4(&DAT_08b50e50,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    else {
      sub_081284E4(&DAT_08b411a8,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 0x10;
  return in_lr;
}

