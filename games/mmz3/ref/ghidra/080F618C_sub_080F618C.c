// sub_080F618C at 0x080F618C (thumb)

undefined4 sub_080F618C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x64ac);
  sub_0800393C(&DAT_0854744c,(DAT_020023c6 & 0xc) << 0xc);
  sub_08003E14(&DAT_08547458,0);
  sub_080FE110(&DAT_085255d0,param_1 + 0x16d8,0x1e0);
  sub_08003B28(param_1 + 0xed8,(DAT_020023c6 & 0x1f00) << 3,0x1000);
  uVar2 = 0;
  do {
    *(undefined *)(param_1 + 0xdfc + uVar2) = 0;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 6);
  *(undefined *)(param_1 + 0xe02) = 0;
  if (*(char *)(iVar3 + 0xce) == '\x01') {
    *(undefined *)(param_1 + 0xe03) = 4;
  }
  else {
    *(undefined *)(param_1 + 0xe03) = 0;
  }
  *(undefined *)(param_1 + 0xe04) = 0;
  *(undefined *)(param_1 + 0xe05) = 0;
  *(undefined *)(param_1 + 0xe06) = 6;
  *(undefined *)(param_1 + 0xe07) = 0x10;
  *(undefined *)(param_1 + 0xe08) = 0;
  *(undefined *)(param_1 + 0xe0b) = 0;
  DAT_02002400 = 0x210;
  sub_0800393C(&DAT_085d7f60,(DAT_0202fab4 - 0x36f) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7f6c,(DAT_0202f8b4 - 8) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7f74,(DAT_0202fab6 - 0x3c1) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7f80,(DAT_0202f8b6 - 10) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7f74,(DAT_0202fab6 - 0x3c1) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7f80,(DAT_0202f8b6 - 10) * 0x20 + 0x200);
  if (*(char *)(iVar3 + 0xce) == '\x01') {
    sub_080E6D8C(param_1,4,0);
  }
  else {
    bVar1 = 0;
    do {
      sub_080E6D8C(param_1,bVar1,0);
      bVar1 = bVar1 + 1;
    } while (bVar1 < 5);
  }
  sub_080E797C(param_1);
  sub_080040A8(0x51,0);
  *(undefined *)(param_1 + 2) = 2;
  return in_lr;
}

