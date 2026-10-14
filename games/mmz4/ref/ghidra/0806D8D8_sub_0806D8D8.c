// sub_0806D8D8 at 0x0806D8D8 (thumb)

undefined4 sub_0806D8D8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0xb6) = 0xff;
  *(undefined *)(param_1 + 0xb4) = 0xff;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined *)(param_1 + 0xb5) = 0;
  iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xb8) = iVar1;
  iVar1 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xbc) = iVar1;
  *(int *)(param_1 + 0x54) = iVar1 + 0x6800;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + -0x3fff;
  *(undefined *)(param_1 + 0xc2) = 0;
  *(undefined *)(param_1 + 0xc3) = 1;
  *(undefined *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_08001D30(&DAT_08c44aa0,(DAT_0202e150 - 0x240) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44aac,(DAT_0202df50 - 5) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44ab4,(DAT_0202e152 - 0x325) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44ac0,(DAT_0202df52 - 7) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08050408(param_1,&DAT_088590a0,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x806f025;
  sub_0806DA5C(param_1);
  return in_lr;
}

