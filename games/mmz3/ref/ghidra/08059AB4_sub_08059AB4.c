// sub_08059AB4 at 0x08059AB4 (thumb)

undefined4 sub_08059AB4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0800393C(&DAT_085d80c8,(DAT_0202fad8 - 0x32a) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d80d4,(DAT_0202f8d8 - 7) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d80a0,(DAT_0202fad4 - 0x240) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d80ac,(DAT_0202f8d4 - 5) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d80b4,(DAT_0202fad6 - 0x2be) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d80c0,(DAT_0202f8d6 - 6) * 0x20 + 0x200);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xb400);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0xd0) = 0x40;
  sub_0803D3D4(param_1,&DAT_08361378,0x40);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  uVar1 = sub_0800A2CC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  iVar2 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54));
  *(int *)(param_1 + 0xb4) = iVar2;
  iVar2 = sub_0800A3C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0xb8));
  *(int *)(param_1 + 0xd8) = iVar2;
  iVar3 = *(int *)(param_1 + 0xb4);
  *(int *)(param_1 + 0xdc) = iVar3 + (iVar2 - iVar3) / 2;
  uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x54);
  *(undefined *)(param_1 + 0xc5) = 0;
  *(undefined *)(param_1 + 0xc6) = 0;
  *(undefined *)(param_1 + 199) = 0;
  *(undefined2 *)(param_1 + 200) = 0xffff;
  iVar2 = sub_08084A8C(param_1,0,0);
  *(int *)(param_1 + 0x2c) = iVar2;
  *(undefined *)(iVar2 + 0xe) = 1;
  *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0xbc) = 0x6400;
  *(undefined *)(param_1 + 0xcc) = 3;
  *(undefined *)(param_1 + 0xcd) = 3;
  *(undefined *)(param_1 + 0xce) = 3;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined *)(param_1 + 0xe0) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08059CC4(param_1);
  return in_lr;
}

