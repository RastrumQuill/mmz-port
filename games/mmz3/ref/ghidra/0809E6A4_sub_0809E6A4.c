// sub_0809E6A4 at 0x0809E6A4 (thumb)

undefined4 sub_0809E6A4(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_0809e70a:
    iVar4 = *(int *)(param_1 + 0xbc);
    if ((iVar4 < 1) || (iVar4 = iVar4 + -1, *(int *)(param_1 + 0xbc) = iVar4, iVar4 < 1)) {
      piVar6 = (int *)(param_1 + 0xb8);
      iVar4 = *piVar6 + (*piVar6 * -0x24 >> 8);
      *piVar6 = iVar4;
      iVar5 = *(int *)(param_1 + 0x5c) * iVar4 >> 8;
      *(int *)(param_1 + 100) = iVar5;
      iVar4 = *piVar6 * *(int *)(param_1 + 0x60) >> 8;
      *(int *)(param_1 + 0x68) = iVar4;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    }
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
      *(undefined *)(param_1 + 0x12) = 0xff;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
        *(uint *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        goto LAB_0809e85e;
      }
      uVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if ((uVar3 != 0) && ((uVar3 & 0x8000) == 0)) goto LAB_0809e854;
    }
    sub_080177F4(param_1);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_08017528(param_1);
      sub_080176EC(param_1);
      *(undefined2 *)(param_1 + 0x50) = 0x100;
      *(undefined2 *)(param_1 + 0x52) = 0x100;
      *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0xb4);
      sub_08017700(param_1,0xa301);
      *(int *)(param_1 + 0xb8) = 0x100;
      *(int *)(param_1 + 100) = (*(int *)(param_1 + 0x5c) << 8) >> 8;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x60) * *(int *)(param_1 + 0xb8) >> 8;
      *(undefined *)(param_1 + 0x12) = 6;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0809e70a;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
    iVar4 = *(int *)(param_1 + 0xbc);
    if ((iVar4 < 1) || (iVar4 = iVar4 + -1, *(int *)(param_1 + 0xbc) = iVar4, iVar4 < 1)) {
      piVar6 = (int *)(param_1 + 0xb8);
      iVar4 = *piVar6 + ((0x300 - *piVar6) * 0x30 >> 8);
      *piVar6 = iVar4;
      iVar5 = *(int *)(param_1 + 0x5c) * iVar4 >> 8;
      *(int *)(param_1 + 100) = iVar5;
      iVar4 = *piVar6 * *(int *)(param_1 + 0x60) >> 8;
      *(int *)(param_1 + 0x68) = iVar4;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    }
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
        *(uint *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        goto LAB_0809e85e;
      }
      uVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (uVar3 == 0) {
        return in_lr;
      }
      if ((uVar3 & 0x8000) != 0) {
        return in_lr;
      }
LAB_0809e854:
      sub_080B2484(2,param_1 + 0x54);
    }
LAB_0809e85e:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

