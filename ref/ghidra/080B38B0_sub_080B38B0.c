// sub_080B38B0 at 0x080B38B0 (thumb)

undefined4 sub_080B38B0(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] + 0x100 >> 1;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (1 < iVar6) {
    *(short *)(param_1 + 0x48) = (short)iVar6;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xbc) + iVar6 * -8;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x04';
  if (((*(ushort *)(undefined4 *)(param_1 + 0x90) & 4) == 0) || (*(int *)(param_1 + 0xc0) == 0)) {
    iVar6 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0xb8) = iVar6 + -0x4000;
    iVar5 = *(int *)(param_1 + 0x58);
    iVar6 = *(int *)(param_1 + 0x50) + iVar5;
    *(int *)(param_1 + 0x50) = iVar6;
    if ((*(int *)(param_1 + 0xb8) < iVar6) && (-0xc0 < iVar5)) {
      iVar5 = iVar5 + -8;
LAB_080b3a38:
      *(int *)(param_1 + 0x58) = iVar5;
    }
    else if (*(int *)(param_1 + 0x58) < 0xc0) {
      iVar5 = *(int *)(param_1 + 0x58) + 8;
      goto LAB_080b3a38;
    }
    uVar4 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (uVar4 < 0x168001) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar3 = *(undefined4 *)((&DAT_082b6d68)[*(byte *)(param_1 + 9)] + 8);
    goto LAB_080b3a5c;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    DAT_02022adf = DAT_02022adf | 8;
    sub_080BC818(0x117,0x5a);
    iVar6 = DAT_0202286c + 0x188;
    bVar2 = 2;
LAB_080b39b6:
    *(byte *)(iVar6 + 1) = bVar2 | *(byte *)(iVar6 + 1);
  }
  else {
    if (cVar1 == '\x01') {
      DAT_02022adf = DAT_02022adf | 0x10;
      sub_080BC818(0x118,0x5a);
      iVar6 = DAT_0202286c + 0x188;
      bVar2 = 4;
      goto LAB_080b39b6;
    }
    if (cVar1 == '\x02') {
      DAT_02022adf = DAT_02022adf | 0x20;
      sub_080BC818(0x119,0x5a);
      iVar6 = DAT_0202286c + 0x188;
      bVar2 = 8;
      goto LAB_080b39b6;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  uVar3 = *(undefined4 *)((&DAT_082b6d68)[*(byte *)(param_1 + 9)] + 0xc);
LAB_080b3a5c:
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return in_lr;
}

