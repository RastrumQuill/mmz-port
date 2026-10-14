// sub_08015454 at 0x08015454 (thumb)

undefined4 sub_08015454(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 1;
    DAT_02002400 = 0x3b44;
    DAT_02002402 = 0xc04;
    DAT_0202e48c = 0x34000;
    sub_080040A8(0xea,0xc0);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = *(ushort *)(param_1 + 0x10) + 1;
  *(short *)(param_1 + 0x10) = (short)iVar1;
  *(int *)(param_1 + 0x50) =
       -0x1b - ((int)((uint)*(ushort *)((int)&DAT_080fe64c + ((uint)(iVar1 * 0x1000000) >> 0x17)) <<
                     0x10) >> 0x16);
  sub_080041E4(0xea);
  return in_lr;
}

