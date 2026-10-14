// sub_0805ED04 at 0x0805ED04 (thumb)

undefined4 sub_0805ED04(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 5;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0x10) = 0;
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  uVar1 = sub_0800A104(uVar4,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  iVar2 = FUN_080fe2f8(uVar4,0xf000);
  iVar3 = iVar2 * 0xf000 + -0x7000;
  iVar2 = iVar2 * 0xf000 + 0x7000;
  *(int *)(param_1 + 0xd4) = iVar3;
  *(int *)(param_1 + 0xd8) = iVar2;
  iVar2 = iVar2 - iVar3;
  *(int *)(param_1 + 0xdc) = iVar2;
  *(int *)(param_1 + 0xe0) = iVar3 + (iVar2 >> 1);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  sub_0800393C(&DAT_085d8370,(DAT_0202fb1c - 0x240) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d837c,(DAT_0202f91c - 5) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8384,(DAT_0202fb1e - 0x280) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8390,(DAT_0202f91e - 6) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8398,(DAT_0202fb20 - 0x2fc) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d83a4,(DAT_0202f920 - 7) * 0x20 + 0x200);
  sub_0803D3D4(param_1,&DAT_08361a88,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x805ee9d;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined *)(param_1 + 0x10) = 0;
  sub_0805EED4(param_1);
  return in_lr;
}

