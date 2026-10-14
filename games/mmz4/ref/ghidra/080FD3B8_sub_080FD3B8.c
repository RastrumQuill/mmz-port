// sub_080FD3B8 at 0x080FD3B8 (thumb)

undefined4 sub_080FD3B8(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  ushort *puVar4;
  undefined *puVar5;
  undefined uVar6;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) goto LAB_080fd596;
  if (1 < bVar1) {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      goto LAB_080fd78a;
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      iVar8 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
      if (iVar8 < 0) {
        iVar8 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
      }
      if (iVar8 < 0x2001) {
        return in_lr;
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    puVar4 = (ushort *)(param_1 + 0xb6);
    uVar10 = *puVar4 + 1 & 0xffff;
    if (0x9f0c < uVar10) {
      uVar10 = 0x9f07;
    }
    *puVar4 = (ushort)uVar10;
    sub_0801CF00(param_1,uVar10);
    bVar1 = (&DAT_08867a94)[uVar10 & 0xff];
    pbVar7 = (byte *)(param_1 + 0xb4);
    *pbVar7 = bVar1;
    if (((int)((uint)bVar1 * 0x1000000) < 0) || (*puVar4 == 0x9f07)) {
      sub_08005784(param_1 + 0x74,&DAT_08867a7c);
    }
    else {
      sub_08005784(param_1 + 0x74,&DAT_08867a04 + (char)*pbVar7 * 0x18);
    }
    if ((char)*pbVar7 < '\x01') {
      if ((*pbVar7 == 0) &&
         (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x6100)) {
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
        puVar5 = &LAB_08867aa4;
        goto LAB_080fd76a;
      }
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      puVar5 = &LAB_08867aa4 + (char)*pbVar7 * 8;
LAB_080fd76a:
      *(undefined **)(param_1 + 0x30) = puVar5;
      *(undefined2 *)(param_1 + 0x26) = 0x201;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080fd78a:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined2 *)(param_1 + 0xb6) = 0x9f00;
    sub_0801CF00(param_1);
    *(undefined *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0801281C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    return in_lr;
  }
  if (bVar1 != 0) {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xb5) == '\0') {
    puVar4 = (ushort *)(param_1 + 0xb6);
    uVar2 = *puVar4;
    if (uVar2 != 0x9f08) {
      if (uVar2 < 0x9f09) {
        if (uVar2 == 0x9f00) {
          sub_080127C8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          *puVar4 = 0x9f08;
          sub_0801CF00(param_1,0x9f08);
          uVar6 = 3;
          goto LAB_080fd4d6;
        }
      }
      else if (uVar2 == 0x9f0a) {
        *puVar4 = 0x9f0c;
        sub_0801CF00(param_1);
        uVar6 = 0xff;
        goto LAB_080fd4d6;
      }
      goto LAB_080fd4de;
    }
    *puVar4 = 0x9f0a;
    sub_0801CF00(param_1);
    uVar6 = 4;
LAB_080fd4d6:
    *(undefined *)(param_1 + 0xb4) = uVar6;
  }
  else {
    puVar4 = (ushort *)(param_1 + 0xb6);
    uVar2 = *puVar4;
    if (uVar2 == 0x9f02) {
      *puVar4 = 0x9f04;
      sub_0801CF00(param_1);
      uVar6 = 2;
      goto LAB_080fd4d6;
    }
    if (uVar2 < 0x9f03) {
      if (uVar2 == 0x9f00) {
        sub_080127C8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *puVar4 = 0x9f02;
        sub_0801CF00(param_1,0x9f02);
        uVar6 = 1;
        goto LAB_080fd4d6;
      }
    }
    else if (uVar2 == 0x9f04) {
      *puVar4 = 0x9f06;
      sub_0801CF00(param_1);
      uVar6 = 0xff;
      goto LAB_080fd4d6;
    }
  }
LAB_080fd4de:
  pcVar9 = (char *)(param_1 + 0xb4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined *)(param_1 + 0x12) = 0x30;
  if ((*pcVar9 < '\0') || (*(short *)(param_1 + 0xb6) == -0x60f9)) {
    sub_08005784(param_1 + 0x74,&DAT_08867a7c);
  }
  else {
    sub_08005784(param_1 + 0x74,&DAT_08867a04 + *pcVar9 * 0x18);
  }
  if (*pcVar9 < '\x01') {
    if ((*pcVar9 == '\0') &&
       (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x6100)) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      puVar5 = &LAB_08867aa4;
      goto LAB_080fd576;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    puVar5 = &LAB_08867aa4 + *pcVar9 * 8;
LAB_080fd576:
    *(undefined **)(param_1 + 0x30) = puVar5;
    *(undefined2 *)(param_1 + 0x26) = 0x201;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080fd596:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sVar3 = CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
    if (((sVar3 == -0x60fa) || (sVar3 == -0x60f4)) &&
       (*(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4) =
             *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4) &
             ~(1 << (*(byte *)(param_1 + 0x11) & 0x1f)), (DAT_0202cac0 & 0xf) != 0)) {
      *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 4) * 4) =
           *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 4) * 4) |
           1 << (*(byte *)(param_1 + 0x11) & 0x1f);
      *(undefined *)(param_1 + 0x10) = 4;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      if ((*(char *)(param_1 + 0xb4) < '\0') || (*(short *)(param_1 + 0xb6) == -0x60f9)) {
        sub_08005784(param_1 + 0x74,&DAT_08867a7c);
      }
      else {
        sub_08005784(param_1 + 0x74,&DAT_08867a04 + *(char *)(param_1 + 0xb4) * 0x18);
      }
      *(undefined2 *)(param_1 + 0xa4) = 0xff;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  return in_lr;
}

