// sub_08012120 at 0x08012120 (thumb)

undefined4 sub_08012120(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = *(int *)(param_1 + 0x5c) << 0x10;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = uVar3 >> 0x14;
    (&DAT_02000a04)[uVar2] = (ushort)*(undefined4 *)(param_1 + 100) | 0x47;
    *(undefined4 *)(&DAT_02000a0c + uVar2 * 2) = 0;
    (&DAT_02000a0c)[uVar2 * 2] = 8;
    (&DAT_02000a0e)[uVar2 * 2] = 0x38;
    sub_081284E4(&DAT_08b44ef0,((ushort)(&DAT_02000a04)[uVar2] & 0x1f00) * 8 + 0x6000000,0x200);
    DAT_02000a50 = DAT_02000a50 | 0x4000;
    DAT_02000a5d = 0xfb;
    DAT_02000a56 = 0xff;
    DAT_02000a5a = 0xff;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar1 = *(short *)(param_1 + 0x10) + 1;
  *(ushort *)(param_1 + 0x10) = uVar1;
  if ((uVar1 & 1) == 0) {
    sub_081284E4(&DAT_08b446e8,((ushort)(&DAT_02000a04)[uVar3 >> 0x14] & 0x1f00) * 8 + 0x6000000,
                 0x200);
  }
  else {
    sub_081284E4(&DAT_08b44ef0,((ushort)(&DAT_02000a04)[uVar3 >> 0x14] & 0x1f00) * 8 + 0x6000000,
                 0x200);
  }
  return in_lr;
}

