// sub_080EADFC at 0x080EADFC (thumb)

undefined4 sub_080EADFC(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_0886619c + (uint)*(byte *)(param_1 + 0x10) * 8));
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,&DAT_088660dc);
    goto LAB_080eb082;
  case 1:
    if (*(char *)(param_1 + 0xf) == '\0') {
      uVar4 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
      if (uVar4 < 0x3001) {
        *(undefined *)(param_1 + 0x1f) = 0xff;
        if (1 < (byte)(*(char *)(param_1 + 0x10) - 3U)) {
          uVar4 = (uint)(*(ushort *)(&DAT_0886619c + (uint)*(byte *)(param_1 + 0x10) * 8) >> 8);
          sub_08001D30(&DAT_08c44000 + uVar4 * 5,
                       ((uint)(ushort)(&DAT_0202e040)[uVar4] -
                       (uint)((ushort)(&DAT_08c44006)[uVar4 * 10] >> 6)) * 0x20 + 0x10000);
          sub_08002208(&DAT_08c4400c + uVar4 * 0x14,
                       ((uint)(ushort)(&DAT_0202de40)[uVar4] -
                       (uint)(byte)(&DAT_08c44013)[uVar4 * 0x14]) * 0x20 + 0x200);
        }
        uVar3 = 1;
LAB_080eaf5c:
        *(undefined *)(param_1 + 0xf) = uVar3;
      }
    }
    else {
      uVar4 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
      if (0x3000 < uVar4) {
        if (1 < (byte)(*(char *)(param_1 + 0x10) - 3U)) {
          uVar4 = (uint)(*(ushort *)(&DAT_0886619c + (uint)*(byte *)(param_1 + 0x10) * 8) >> 8);
          sub_08001D30(&DAT_08c44000 + uVar4 * 5,
                       ((uint)(ushort)(&DAT_0202e040)[uVar4] -
                       (uint)((ushort)(&DAT_08c44006)[uVar4 * 10] >> 6)) * 0x20 + 0x10000);
          sub_08002208(&DAT_08c4400c + uVar4 * 0x14,
                       ((uint)(ushort)(&DAT_0202de40)[uVar4] -
                       (uint)(byte)(&DAT_08c44013)[uVar4 * 0x14]) * 0x20 + 0x200);
        }
        uVar3 = 0;
        goto LAB_080eaf5c;
      }
    }
    sub_0801CFF0(param_1);
    if ((DAT_0202e918 & 2) != 0) {
      sub_08005784(param_1 + 0x74,&DAT_0886613c);
      *(undefined *)(param_1 + 0xe) = 5;
      return in_lr;
    }
    if ((DAT_0202dc08 == '\0') && ((DAT_0202e924 & 1) == 0)) {
      return in_lr;
    }
    if (((0x4000 < (*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x2000U) ||
        (0x4000 < (*(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x2000U)) ||
       ((*(uint *)(param_1 + 0x8c) & 0x40000000) == 0)) {
      *(undefined *)(param_1 + 0xe) = 4;
      return in_lr;
    }
    sub_08002B10(*(undefined2 *)(&DAT_088661dc + (uint)*(byte *)(param_1 + 0x10) * 4));
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_0886619e + (uint)*(byte *)(param_1 + 0x10) * 8));
    DAT_0202e924 = DAT_0202e924 | 1;
    goto LAB_080eb082;
  case 2:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(uint *)(DAT_0202dbf0 + 0x8c) & 0x40000000) == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_088661a0 + (uint)*(byte *)(param_1 + 0x10) * 8));
    DAT_0202ea64 = 2;
LAB_080eb082:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 3:
    sub_0801CFF0(param_1);
    if (DAT_0202ea64 == 0) {
      DAT_0202dc08 = '\0';
      DAT_0202ea64 = 1;
      piVar5 = (int *)sub_0801EF14(param_1 + 0x54);
      ppiVar7 = (int **)(param_1 + 0xb8);
      *ppiVar7 = piVar5;
      iVar2 = DAT_0202dbf0;
      if (piVar5 != (int *)0x0) {
        *(int *)(DAT_0202dbf0 + 0x54) = *piVar5;
        *(int *)(iVar2 + 0x58) = (*ppiVar7)[1];
        iVar6 = sub_08128954(**ppiVar7 >> 8,0xf0);
        if (iVar6 < 0x78) {
          *(undefined *)(iVar2 + 0x4c) = 1;
          *(byte *)(DAT_0202dbf0 + 0x4a) = *(byte *)(DAT_0202dbf0 + 0x4a) | 0x10;
          *(byte *)(DAT_0202dbf0 + 10) = *(byte *)(DAT_0202dbf0 + 10) | 0x10;
        }
        else {
          *(undefined *)(iVar2 + 0x4c) = 0;
          *(byte *)(DAT_0202dbf0 + 0x4a) = *(byte *)(DAT_0202dbf0 + 0x4a) & 0xef;
          *(byte *)(DAT_0202dbf0 + 10) = *(byte *)(DAT_0202dbf0 + 10) & 0xef;
        }
        sub_0802B7B4(DAT_0202dbf0);
        DAT_0202e924 = DAT_0202e924 & 0xfffe;
        DAT_0202ea11 = 8;
        DAT_0202ea1a = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    break;
  case 4:
    if ((DAT_0202dc08 == '\0') && (bVar1 = (byte)DAT_0202e924 & 1, (DAT_0202e924 & 1) == 0)) {
      if (((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x2000U < 0x4001) &&
         ((*(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x2000U < 0x4001)) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(byte *)(param_1 + 0xf) = bVar1;
        *(byte *)(param_1 + 0xe) = bVar1;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    break;
  case 5:
    bVar1 = (byte)DAT_0202e918;
    if ((DAT_0202e918 & 2) == 0) {
      sub_08005784(param_1 + 0x74,&DAT_088660dc);
      *(byte *)(param_1 + 0xe) = bVar1 & 2;
    }
  }
  return in_lr;
}

