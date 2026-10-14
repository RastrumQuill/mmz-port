// sub_0804CF8C at 0x0804CF8C (thumb)

undefined4 sub_0804CF8C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0835fae0)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if ((DAT_02002446 & 0x20) == 0) {
    sub_0803D3D4(param_1,&DAT_0835fa20,0x20);
  }
  else {
    sub_0803D3D4(param_1,&DAT_0835fa20,0x30);
  }
  *(undefined4 *)(param_1 + 0x98) = 0x804cf2d;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  iVar1 = *(int *)(param_1 + 0x54) >> 8;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = FUN_080fe2f8(iVar1,0xf0);
  *(int *)(param_1 + 0x54) = iVar1 * 0xf000 + 0x7800;
  iVar1 = *(int *)(param_1 + 0x58) >> 8;
  *(int *)(param_1 + 0x58) = iVar1;
  iVar1 = FUN_080fe2f8(iVar1,0xa0);
  *(int *)(param_1 + 0x58) = iVar1 * 0xa000 + 0x3800;
  sub_0800393C(&DAT_085d7e70,(DAT_0202fa9c - 0x200) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7e7c,(DAT_0202f89c - 4) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7e84,(DAT_0202fa9e - 0x2c4) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7e90,(DAT_0202f89e - 5) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
  *(undefined2 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xba) = 0;
  sub_0804D0F8(param_1);
  return in_lr;
}

