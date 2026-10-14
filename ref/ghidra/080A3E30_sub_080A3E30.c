// sub_080A3E30 at 0x080A3E30 (thumb)

undefined4 sub_080A3E30(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082b5d10);
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined *)(param_1 + 0x13) = 10;
  }
  sub_0809C980(param_1);
  if ((((DAT_02022ae0 & 0x12) == 0) && (bVar2 = DAT_02022adf & 0x80, (DAT_02022adf & 0x80) == 0)) &&
     (iVar8 = *(int *)(param_1 + 0x4c), iVar8 < 0x186001)) {
    bVar1 = *(byte *)(param_1 + 0xf);
    if (bVar1 == 1) {
      if (7 < *(short *)(DAT_02022e98 + 10)) {
        if (iVar8 < *(int *)(DAT_0202286c + 0x4c)) {
          iVar8 = iVar8 + -0x2800;
        }
        else {
          iVar8 = iVar8 + 0x2800;
        }
        iVar7 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
        if (iVar7 == 0) {
          sub_08053480(iVar8,*(undefined4 *)(param_1 + 0x50));
        }
        else {
          uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
          DAT_02022890 = uVar6 & 0x7fffffff;
          if ((uVar6 * 2 >> 0x11 & 1) == 0) {
            sub_08053480(iVar8,*(undefined4 *)(param_1 + 0x50));
          }
          else {
            sub_08062664(iVar8,*(int *)(param_1 + 0x50) + -0x6000);
          }
        }
        *(undefined *)(param_1 + 0x12) = 0x7f;
        *(undefined *)(param_1 + 0x13) = 0x10;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
    else if (bVar1 < 2) {
      if ((bVar1 == 0) &&
         (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == -1)) {
        uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar6 & 0x7fffffff;
        if ((uVar6 * 2 >> 0x11 & 0x1f) < (uint)*(byte *)(param_1 + 0x13)) {
          sub_0809C930(param_1,2);
          sub_0809C980(param_1);
          *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        }
        uVar4 = 0xff;
LAB_080a40ae:
        *(undefined *)(param_1 + 0x12) = uVar4;
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x04';
      }
    }
    else if (((bVar1 == 2) && (iVar8 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c), iVar8 != 0)) &&
            (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == -1)
            ) {
      uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar6 & 0x7fffffff;
      if ((uVar6 * 2 >> 0x11 & 0x1f) < (uint)*(byte *)(param_1 + 0x13)) {
        sub_08001EAC(0x4c);
        pbVar9 = (byte *)(param_1 + 0xc5);
        bVar1 = *pbVar9;
        *pbVar9 = (byte)(bVar1 - 1);
        if ((int)((bVar1 - 1) * 0x1000000) < 1) {
          *pbVar9 = bVar2;
        }
        else {
          if (DAT_02022b27 + -1 < 3) {
            DAT_02022b27 = '\x02';
          }
          else {
            DAT_02022b27 = DAT_02022b27 + -1;
          }
          if (DAT_0202365a == 0) {
            sub_080BC818(*(undefined2 *)(&DAT_082b5d48 + (char)*pbVar9 * 2),0x80);
          }
        }
        *(undefined *)(param_1 + 0x13) = 0xc;
      }
      uVar4 = 0x7f;
      goto LAB_080a40ae;
    }
    uVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar5;
    iVar8 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
    if (iVar8 < 0) {
      iVar8 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    }
    if (0xfff < iVar8) {
      return in_lr;
    }
    iVar8 = *(int *)(param_1 + 0x50) - *(int *)(DAT_0202286c + 0x50);
    if (iVar8 < 0) {
      iVar8 = *(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50);
    }
    if (0xfff < iVar8) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
    if (DAT_0202365a != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xc5) == '\x01') {
      uVar5 = 0xb15;
      goto LAB_080a4146;
    }
    if ('\x04' < *(char *)(param_1 + 0xc5)) {
      sub_080BC818(0xb13,0x80);
      return in_lr;
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
    if (iVar8 < 0) {
      iVar8 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    }
    if (0xfff < iVar8) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
    if (*(char *)(param_1 + 0xc5) == '\x01') {
      uVar5 = 0xb15;
      goto LAB_080a4146;
    }
    if ('\x04' < *(char *)(param_1 + 0xc5)) {
      uVar5 = 0xb13;
      goto LAB_080a4146;
    }
  }
  uVar5 = 0xb14;
LAB_080a4146:
  sub_080BC818(uVar5,0x80);
  return in_lr;
}

