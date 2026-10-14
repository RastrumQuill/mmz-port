// sub_0806CDB8 at 0x0806CDB8 (thumb)

undefined4 sub_0806CDB8(int param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar2 = *(ushort *)
             (&DAT_0202e020 +
             (*(byte *)(param_1 + 0x10) & 1) * 2 + (uint)(*(byte *)(param_1 + 0x10) >> 1) * 4);
  }
  else {
    uVar2 = (ushort)(byte)(&DAT_0202e020)
                          [(*(byte *)(param_1 + 0x10) & 1) +
                           (uint)(*(byte *)(param_1 + 0x10) >> 1) * 4];
  }
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (uVar2 == 0) {
    sub_080127E4(param_1,0x110a);
    *(undefined *)(param_1 + 0xd) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_0833e5f8,param_1 + 0x54,0x20);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    sub_080127E4(param_1,0x1100);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_0833e628,param_1 + 0x54,0x20);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x98) = 0x806d2c9;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  sub_0806CEE0(param_1);
  return in_lr;
}

