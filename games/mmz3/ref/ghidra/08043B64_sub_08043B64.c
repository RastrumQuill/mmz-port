// sub_08043B64 at 0x08043B64 (thumb)

undefined4 sub_08043B64(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        return in_lr;
      }
      iVar4 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar5 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar3 = 0x7fffffff;
      if ((iVar5 < 0x7fffffff) && (*(int *)(param_1 + 0xbc) + -0x5000 < iVar5)) {
        iVar3 = iVar5;
        iVar4 = iVar5;
      }
      iVar5 = sub_0800A1F4(*(int *)(param_1 + 0x54) + -0x1200,*(undefined4 *)(param_1 + 0x58));
      if ((iVar5 < iVar3) && (*(int *)(param_1 + 0xbc) + -0x5000 < iVar5)) {
        iVar3 = iVar5;
        iVar4 = iVar5;
      }
      iVar5 = sub_0800A1F4(*(int *)(param_1 + 0x54) + 0x1200,*(undefined4 *)(param_1 + 0x58));
      if ((iVar5 < iVar3) && (*(int *)(param_1 + 0xbc) + -0x5000 < iVar5)) {
        iVar4 = iVar5;
      }
      sub_08045C4C(param_1);
      sub_080177F4(param_1);
      iVar3 = *(int *)(param_1 + 0x68) + 0x10;
      *(int *)(param_1 + 0x68) = iVar3;
      if (0x380 < iVar3) {
        *(undefined4 *)(param_1 + 0x68) = 0x380;
      }
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x58) = iVar3;
      if (iVar4 < iVar3) {
        *(int *)(param_1 + 0x58) = iVar4;
      }
      if (*(int *)(param_1 + 0x58) != iVar4) {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0x13);
      if (cVar1 == '\0') {
        return in_lr;
      }
      *(char *)(param_1 + 0x13) = cVar1 + -1;
      if (cVar1 != '\x01') {
        return in_lr;
      }
      pbVar6 = (byte *)(param_1 + 0xb5);
      if (*pbVar6 == *(byte *)(param_1 + 0xb6)) {
        if (*(byte *)(DAT_02030160 + 1) < 5) {
          iVar3 = sub_08045B64(param_1);
          uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar7 & 0x7fffffff;
          iVar4 = sub_080FE4D8(uVar7 * 2 >> 0x11,(&DAT_080fea0c)[iVar3 * 0x11]);
          bVar2 = (&UNK_080fea0d)[iVar4 + iVar3 * 0x11];
          if ((uint)bVar2 == (int)(char)*pbVar6) {
            bVar2 = sub_08045AA0(param_1,(uint)bVar2,0);
          }
        }
        else {
          iVar3 = sub_08045B64(param_1);
          uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar7 & 0x7fffffff;
          iVar4 = sub_080FE4D8(uVar7 * 2 >> 0x11,(&DAT_080fea2e)[iVar3 * 0x11]);
          bVar2 = (&UNK_080fea2f)[iVar4 + iVar3 * 0x11];
          if ((uint)bVar2 == (int)(char)*pbVar6) {
            bVar2 = sub_08045AA0(param_1,(uint)bVar2,1);
          }
        }
      }
      else {
        if (*(byte *)(DAT_02030160 + 1) < 5) {
          iVar3 = sub_08045B64(param_1);
          puVar8 = &DAT_080fea0c;
        }
        else {
          iVar3 = sub_08045B64(param_1);
          puVar8 = &DAT_080fea2e;
        }
        uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar7 & 0x7fffffff;
        iVar4 = sub_080FE4D8(uVar7 * 2 >> 0x11,puVar8[iVar3 * 0x11]);
        bVar2 = puVar8[iVar4 + iVar3 * 0x11 + 1];
      }
      *(byte *)(param_1 + 0xd) = bVar2;
      *(char *)(param_1 + 0xe) = cVar1 + -1;
      if ((short)(ushort)(*(byte *)(param_1 + 0xc9) >> 1) < *(short *)(param_1 + 0xa4)) {
        bVar2 = 5;
        *(undefined *)(param_1 + 0xd) = 5;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      *(byte *)(param_1 + 0xb6) = *pbVar6;
      *pbVar6 = bVar2;
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    *(undefined *)(param_1 + 0x24) = 0;
    iVar3 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (((*(int *)(param_1 + 0x58) == iVar3) ||
        (iVar3 = sub_0800A1F4(*(int *)(param_1 + 0x54) + -0x1200), *(int *)(param_1 + 0x58) == iVar3
        )) || (iVar3 = sub_0800A1F4(*(int *)(param_1 + 0x54) + 0x1200),
              *(int *)(param_1 + 0x58) == iVar3)) {
      sub_08017700(param_1,0xa500);
      sub_08007390(param_1 + 0x74,&DAT_0835eb10);
    }
    else {
      sub_080177CC(param_1,0xa501,1,0);
      sub_08007390(param_1 + 0x74,&DAT_0835eb40);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    if (*(char *)(param_1 + 0xf) == -1) {
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0x13) = 1;
      if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      }
    }
    else {
      *(undefined *)(param_1 + 0x13) = 0x1e;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x5aff) {
    iVar3 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar4 = *(int *)(param_1 + 0x68) + 0x10;
    *(int *)(param_1 + 0x68) = iVar4;
    if (0x380 < iVar4) {
      *(undefined4 *)(param_1 + 0x68) = 0x380;
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x58) = iVar4;
    if (iVar4 <= iVar3) goto LAB_08043cce;
    sub_08017700(param_1,0xa500);
    sub_08007390(param_1 + 0x74,&DAT_0835eb10);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08043cce:
  sub_080177F4(param_1);
  return in_lr;
}

