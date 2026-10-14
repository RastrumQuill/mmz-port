// sub_080513CC at 0x080513CC (thumb)

undefined4 sub_080513CC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_08360114)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if ((DAT_02002442 & 0x80) == 0) {
    sub_0803D3D4(param_1,&DAT_0835fe14,0x40);
  }
  else {
    sub_0803D3D4(param_1,&DAT_0835fe14,0x50);
  }
  *(undefined4 *)(param_1 + 0x98) = 0x8051335;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  iVar1 = *(int *)(param_1 + 0x54) >> 8;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = FUN_080fe2f8(iVar1,0xf0);
  *(int *)(param_1 + 0x54) = iVar1 * 0xf000 + 0x7800;
  iVar1 = *(int *)(param_1 + 0x58) >> 8;
  *(int *)(param_1 + 0x58) = iVar1;
  iVar1 = FUN_080fe2f8(iVar1,0xa0);
  *(int *)(param_1 + 0x58) = iVar1 * 0xa000 + 0x5000;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0800393C(&DAT_085d7c04,(DAT_0202fa5e - 0x200) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7c10,(DAT_0202f85e - 4) * 0x20 + 0x200);
  }
  sub_0800393C(&DAT_085d7efc,(DAT_0202faaa - 0x260) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7f08,(DAT_0202f8aa - 6) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7f10,(DAT_0202faac - 0x2ce) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7f1c,(DAT_0202f8ac - 7) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7f24,(DAT_0202faae - 0x31a) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7f30,(DAT_0202f8ae - 8) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7f38,(DAT_0202fab0 - 0x338) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7f44,(DAT_0202f8b0 - 9) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7f4c,(DAT_0202fab2 - 0x348) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7f58,(DAT_0202f8b2 - 6) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xba) = 0;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x58) + -0x1400;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xc4) = 0xff;
  *(undefined *)(param_1 + 0xc5) = 0;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc);
  }
  sub_08051650(param_1);
  return in_lr;
}

