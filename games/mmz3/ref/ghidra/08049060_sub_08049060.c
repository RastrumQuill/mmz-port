// sub_08049060 at 0x08049060 (thumb)

undefined4 sub_08049060(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0835f66c)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  sub_0803D3D4(param_1,&DAT_0835efa4,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x8048fb5;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0800393C(&DAT_085d7d30,(DAT_0202fa7c - 0x300) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7d3c,(DAT_0202f87c - 5) * 0x20 + 0x200);
    sub_0800393C(&DAT_085d7d44,(DAT_0202fa7e - 0x340) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7d50,(DAT_0202f87e - 6) * 0x20 + 0x200);
    uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    iVar2 = *(int *)(param_1 + 0x54) >> 8;
    *(int *)(param_1 + 0xb4) = iVar2;
    iVar2 = FUN_080fe2f8(iVar2,0xf0);
    *(int *)(param_1 + 0xb4) = iVar2 * 0xf000 + 0x7800;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0xbd) = 0;
    *(undefined *)(param_1 + 0xc1) = 3;
    *(undefined *)(param_1 + 0xc3) = 0xff;
    *(undefined *)(param_1 + 0xc4) = 0;
  }
  sub_080491C8(param_1);
  return in_lr;
}

