// sub_08066680 at 0x08066680 (thumb)

undefined4 sub_08066680(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CEEC(param_1);
  sub_0801CF00(param_1,0xa901);
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08050408(param_1,&DAT_08857cc0,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x806892d;
  iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + -0x2000;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  uVar2 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  iVar1 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xc0) = iVar1;
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xbc) + (iVar1 - *(int *)(param_1 + 0xbc) >> 1);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined *)(param_1 + 0xde) = 0;
  sub_08001D30(&DAT_08c44870,(DAT_0202e118 - 0x318) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4487c,(DAT_0202df18 - 6) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c4485c,(DAT_0202e116 - 0x300) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44868,(DAT_0202df16 - 5) * 0x20 + 0x200);
  *(undefined *)(param_1 + 0xd9) = 0;
  *(undefined *)(param_1 + 0xda) = 0;
  *(undefined *)(param_1 + 0xdb) = 0;
  *(undefined *)(param_1 + 0xdc) = 0x20;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08066818(param_1);
  return in_lr;
}

