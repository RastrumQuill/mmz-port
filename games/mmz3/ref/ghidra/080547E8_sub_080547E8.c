// sub_080547E8 at 0x080547E8 (thumb)

undefined4 sub_080547E8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_08360308)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if ((DAT_02002446 & 0x10) == 0) {
    sub_0803D3D4(param_1,&DAT_083602c0,0x20);
  }
  else {
    sub_0803D3D4(param_1,&DAT_083602c0,0x30);
  }
  *(undefined4 *)(param_1 + 0x98) = 0x8054789;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  sub_0800393C(&DAT_085d7a9c,(DAT_0202fa3a - 0x200) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7aa8,(DAT_0202f83a - 4) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7f88,(DAT_0202fab8 - 0x250) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7f94,(DAT_0202f8b8 - 5) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7f9c,(DAT_0202faba - 0x2e6) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7fa8,(DAT_0202f8ba - 6) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7fb0,(DAT_0202fabc - 0x2ff) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7fbc,(DAT_0202f8bc - 7) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7fc4,(DAT_0202fabe - 0x33f) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7fd0,(DAT_0202f8be - 8) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7fd8,(DAT_0202fac0 - 0x37f) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7fe4,(DAT_0202f8c0 - 9) * 0x20 + 0x200);
  iVar1 = *(int *)(param_1 + 0x54) >> 8;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = FUN_080fe2f8(iVar1,0xf0);
  *(int *)(param_1 + 0x54) = iVar1 * 0xf000 + 0x7800;
  iVar1 = *(int *)(param_1 + 0x58) >> 8;
  *(int *)(param_1 + 0x58) = iVar1;
  iVar1 = FUN_080fe2f8(iVar1,0xa0);
  *(int *)(param_1 + 0x58) = iVar1 * 0xa000 + 0x5000;
  uVar2 = sub_0806F1E8(param_1 + 0x54,0,2);
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  local_28 = *(undefined4 *)(param_1 + 0x54);
  local_24 = DAT_020302c4 + -0x5000;
  uVar2 = sub_0806F1E8(&local_28,2,2);
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  uVar2 = sub_0806F1E8(&local_28,3,2);
  *(undefined4 *)(param_1 + 200) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  sub_080CDF84(param_1);
  sub_08054A7C(param_1);
  return in_lr;
}

