// sub_080610BC at 0x080610BC (thumb)

undefined4 sub_080610BC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0833d518)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0803F9E4(param_1,&DAT_0833d4b8,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x80613c9;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xc9) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xcb) = 0xff;
  *(undefined *)(param_1 + 0xca) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x54);
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(undefined *)(param_1 + 0xbf) = 1;
  sub_08002638(&DAT_08433548,(DAT_0202e664 - 0x380) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433554,(DAT_0202e464 - 7) * 0x20 + 0x200);
  sub_08002638(&DAT_08433534,(DAT_0202e662 - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433540,(DAT_0202e462 - 5) * 0x20 + 0x200);
  sub_08061200(param_1);
  return in_lr;
}

