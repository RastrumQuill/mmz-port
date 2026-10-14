// sub_08061F38 at 0x08061F38 (thumb)

undefined4 sub_08061F38(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0xb4) = 0xff;
  *(undefined *)(param_1 + 0xcc) = 0xff;
  *(undefined *)(param_1 + 0xcd) = 0;
  *(undefined *)(param_1 + 0xb6) = 0;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined *)(param_1 + 0xce) = 0;
  *(undefined *)(param_1 + 0xe0) = 0;
  *(undefined *)(param_1 + 0xcf) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(undefined *)(param_1 + 0x25) = 0x19;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  sub_08050408(param_1,&DAT_08857710,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x80659b5;
  sub_08001D30(&DAT_08c447d0,(DAT_0202e108 - 0x2e8) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c447dc,(DAT_0202df08 - 6) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c446b8,(DAT_0202e0ec - 0x3cb) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c446c4,(DAT_0202deec - 9) * 0x20 + 0x200);
  sub_080620C4(param_1);
  return in_lr;
}

