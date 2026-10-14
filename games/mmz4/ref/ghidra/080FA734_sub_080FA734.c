// sub_080FA734 at 0x080FA734 (thumb)

undefined4 sub_080FA734(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined auStack_20 [4];
  int local_1c [2];
  
  sub_08128B5C(auStack_20,&DAT_08129db4,2);
  local_1c[0] = 0x4d00;
  local_1c[1] = 0xe000;
  bVar1 = *(byte *)(param_1 + 0x11);
  iVar3 = (local_1c[DAT_0202e910 == 0x10] << 8) >> 0x10;
  sub_08001D30(&DAT_08c44000 + iVar3 * 5,
               ((uint)(ushort)(&DAT_0202e040)[iVar3] -
               (uint)((ushort)(&DAT_08c44006)[iVar3 * 10] >> 6)) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4400c + iVar3 * 0x14,
               ((uint)(ushort)(&DAT_0202de40)[iVar3] - (uint)(byte)(&DAT_08c44013)[iVar3 * 0x14]) *
               0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  uVar4 = 0;
  *(undefined *)(param_1 + 0xd) = auStack_20[bVar1];
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar2 = sub_08008988(*(undefined4 *)(param_1 + 0x54),iVar3 + -0x4000);
  *(int *)(param_1 + 0x54) = iVar2 + 0x6800;
  *(int *)(param_1 + 0x58) = iVar3;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  do {
    sub_080FA6C0(param_1,uVar4 & 0xff);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 3);
  sub_080FA97C(param_1);
  return in_lr;
}

