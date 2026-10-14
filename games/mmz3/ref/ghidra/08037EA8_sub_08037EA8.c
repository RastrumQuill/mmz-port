// sub_08037EA8 at 0x08037EA8 (thumb)

undefined4 sub_08037EA8(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x5303) &&
       (*(char *)(param_1 + 0x73) == '\x03')) {
      sub_08017700(param_1,0x5100);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar2 = sub_0803814C(param_1);
    if (cVar2 != '\x02') {
      cVar3 = sub_08038330(param_1);
      if (cVar3 != '\0') {
        sub_080B322C(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
        sub_0800471C(0x2b);
        cVar2 = '\x01';
      }
      if (((cVar2 == '\0') &&
          (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != -1))
         && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      *(char *)(param_1 + 0x12) = (char)(uVar4 * 2 >> 0x11);
      *(undefined *)(param_1 + 0x13) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 9);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0xb4);
    bVar1 = *(byte *)(param_1 + 0x12);
    iVar7 = *(int *)(param_1 + 0x5c);
    sub_0800471C(0x14e);
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    sub_0803B7D8(uVar5,param_1,uVar4 * 2 >> 0x11 & 1,
                 *(short *)((int)&DAT_080fe64c + ((bVar1 + 0x40) * 0x1000000 >> 0x17)) * iVar7 >> 8,
                 (short)(&DAT_080fe64c)[bVar1] * iVar7 >> 8);
    uVar4 = (*(byte *)(param_1 + 0x12) + 0x80) * 0x1000000;
    uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar6 & 0x7fffffff;
    sub_0803B7D8(uVar5,param_1,uVar6 * 2 >> 0x11 & 1,
                 *(short *)((int)&DAT_080fe64c + (uVar4 + 0x40000000 >> 0x17)) * iVar7 >> 8,
                 *(short *)((int)&DAT_080fe64c + (uVar4 >> 0x17)) * iVar7 >> 8);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x180;
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + ' ' + ((byte)(uVar4 * 2 >> 0x11) & 0xf);
    bVar1 = *(byte *)(param_1 + 0x13);
    *(byte *)(param_1 + 0x13) = bVar1 + 1;
    if (bVar1 < 0x10) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 9);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[bVar1] + 8);
  return in_lr;
}

