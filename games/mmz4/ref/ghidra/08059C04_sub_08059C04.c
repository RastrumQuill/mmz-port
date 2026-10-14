// sub_08059C04 at 0x08059C04 (thumb)

undefined4 sub_08059C04(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined auStack_1c [4];
  
  sub_08128B5C(auStack_1c,&DAT_08128fc8,2);
  iVar4 = *(int *)(param_1 + 0x54);
  bVar1 = iVar4 < *(int *)(DAT_0202dbf0 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = auStack_1c[*(byte *)(param_1 + 0x11)];
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar3 = sub_08008534(iVar4,*(undefined4 *)(param_1 + 0x58),iVar4,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined *)(param_1 + 0xbe) = 0xff;
  *(undefined *)(param_1 + 0xcf) = 0xff;
  *(undefined *)(param_1 + 0xcc) = 0xff;
  *(undefined *)(param_1 + 0xcd) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined *)(param_1 + 0xbf) = 0xff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0xce) = 0;
  *(undefined *)(param_1 + 0xbc) = 0;
  sub_08001D30(&DAT_08c44848,(DAT_0202e114 - 0x2aa) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44854,(DAT_0202df14 - 6) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(undefined *)(param_1 + 0x25) = 0x18;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  sub_0801CF00(param_1,0xa300);
  *(undefined *)(param_1 + 0xbd) = 1;
  sub_0801CFF0(param_1);
  sub_08050408(param_1,&DAT_08855390,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x805bf11;
  sub_080960A4(param_1);
  sub_08059D74(param_1);
  return in_lr;
}

