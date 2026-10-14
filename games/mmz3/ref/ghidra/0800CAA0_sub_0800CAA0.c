// sub_0800CAA0 at 0x0800CAA0 (thumb)

undefined4 sub_0800CAA0(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = *(uint *)(param_1 + 100);
    (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] = (ushort)uVar2 | 0x8047;
    local_14[0] = 0x40404040;
    sub_080FE110(local_14,(uVar2 & 0x1f00) * 8 + 0x6000000,0x1000400);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sVar1 = *(short *)(param_1 + 0x10) + 1;
  *(short *)(param_1 + 0x10) = sVar1;
  if (sVar1 == 0x30) {
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  return in_lr;
}

