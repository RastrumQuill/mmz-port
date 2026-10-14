// sub_08074CA8 at 0x08074CA8 (thumb)

undefined4 sub_08074CA8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined uVar3;
  undefined4 in_lr;
  
  sub_08001D30(&DAT_08c44ba4,(DAT_0202e16a - 0x280) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44bb0,(DAT_0202df6a - 5) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CEEC(param_1);
  sub_0801CF00(param_1,0xaf18);
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08050408(param_1,&DAT_088598e0,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x8076ea5;
  uVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar1 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  iVar2 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 200) = iVar2;
  *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xc4) + (iVar2 - *(int *)(param_1 + 0xc4) >> 1);
  *(undefined *)(param_1 + 0xda) = 0;
  *(undefined *)(param_1 + 0xdb) = 0;
  *(undefined *)(param_1 + 0xdc) = 0;
  *(undefined *)(param_1 + 0xde) = 0;
  uVar3 = 0;
  if (((DAT_0202cac0 & 0x10) != 0) && ((DAT_0202e8b4 & 4) == 0)) {
    uVar3 = 1;
  }
  *(undefined *)(param_1 + 0xdd) = uVar3;
  if (*(char *)(param_1 + 0xdd) != '\0') {
    *(char *)(param_1 + 0xdd) = '\x01';
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08074E08(param_1);
  return in_lr;
}

