// sub_080A850C at 0x080A850C (thumb)

undefined4 sub_080A850C(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    sub_080B914C(param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = 0;
    goto LAB_080a869e;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_080a860a:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080128D4(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_0834522c,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      sub_080127E4(param_1,0x6912);
      *(undefined *)(param_1 + 0x12) = 0x14;
      iVar6 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
      iVar7 = *(int *)(DAT_0202e130 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1000) >> 8;
      iVar5 = sub_080EEF7C(iVar6 * iVar6 + iVar7 * iVar7);
      uVar8 = (uint)(iVar5 << 0x10) >> 8;
      if (uVar8 == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0x380;
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      else {
        iVar5 = sub_080EF150(iVar6 << 0x10,uVar8);
        iVar6 = sub_080EF150(iVar7 << 0x10,uVar8);
        iVar5 = iVar5 * 0x380;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xff;
        }
        *(int *)(param_1 + 0x5c) = iVar5 >> 8;
        iVar6 = iVar6 * 0x380;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0xff;
        }
        *(int *)(param_1 + 0x60) = iVar6 >> 8;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_080a860a;
    }
  }
  else {
    if (bVar1 == 2) {
      sub_080127E4(param_1,0x6913);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (bVar1 != 3) goto LAB_080a8658;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080128D4(param_1);
  }
LAB_080a8658:
  sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar3 == 0) {
    return in_lr;
  }
  if (*(int *)(param_1 + 0x58) < *(int *)(iVar4 + 0xc4)) {
    sub_080B914C(param_1 + 0x54);
  }
  else {
    sub_080B8FC0(param_1 + 0x54);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
LAB_080a869e:
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

