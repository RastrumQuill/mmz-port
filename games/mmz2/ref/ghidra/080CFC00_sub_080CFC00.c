// sub_080CFC00 at 0x080CFC00 (thumb)

undefined4 sub_080CFC00(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  sub_08002EA0(0x4b);
  sub_080128D4(param_1);
  if (*(byte *)(param_1 + 0xd) < 2) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x18) + 4);
    *(int *)(param_1 + 0x54) = *(int *)(iVar7 + 0x54) + 0x2000;
    iVar7 = *(int *)(iVar7 + 0x58) + -0x4000;
    *(int *)(param_1 + 0x58) = iVar7;
    pbVar9 = (byte *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x58) = iVar7 + (short)(&DAT_080ef450)[*pbVar9] * 8;
    *pbVar9 = *pbVar9 + 2;
  }
  if ((*(byte *)(param_1 + 0xd) < 4) &&
     (bVar4 = *(byte *)(param_1 + 0x12), *(byte *)(param_1 + 0x12) = bVar4 + 1, (bVar4 & 0xf) == 0))
  {
    local_10 = *(int *)(param_1 + 0x54) +
               *(int *)(&DAT_08349a98 + (uint)*(byte *)(param_1 + 0x13) * 4);
    local_c = *(int *)(param_1 + 0x58) + 0x800;
    uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar5 & 0x7fffffff;
    cVar2 = sub_080EF330(uVar5 * 2 >> 0x11,3);
    sub_080BC790(&local_10,0,cVar2 + '\x01');
    uVar3 = sub_080EF1E8(*(byte *)(param_1 + 0x13) + 1,5);
    *(undefined *)(param_1 + 0x13) = uVar3;
  }
  iVar7 = *(int *)(param_1 + 0x18);
  if (((*(byte *)(iVar7 + 9) & 4) == 0) &&
     (bVar4 = *(byte *)(param_1 + 0xf), *(byte *)(param_1 + 0xf) = bVar4 + 1, (bVar4 & 1) == 0)) {
    bVar4 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar4;
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if ((*(byte *)(iVar7 + 9) & 1) == 0) {
      return in_lr;
    }
    sub_080CF56C(param_1,3,1);
    sub_080CF56C(param_1,3,0);
    break;
  case 1:
    if ((*(byte *)(iVar7 + 9) & 2) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xba) = 0xc0;
    *(undefined4 *)(param_1 + 100) = 0;
    break;
  case 2:
    iVar6 = *(int *)(param_1 + 100);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        iVar6 = *(int *)(param_1 + 0x58) + -0x40;
        *(int *)(param_1 + 0x58) = iVar6;
        iVar7 = *(int *)(*(int *)(iVar7 + 4) + 0x58) + -0x7000;
        if (iVar7 <= iVar6) {
          return in_lr;
        }
        *(int *)(param_1 + 0x58) = iVar7;
        *(undefined *)(param_1 + 0xba) = 0x10;
        goto LAB_080cfdb0;
      }
      if (iVar6 != 2) {
        iVar6 = *(int *)(param_1 + 0x54) + -0x40;
        *(int *)(param_1 + 0x54) = iVar6;
        iVar7 = *(int *)(*(int *)(iVar7 + 4) + 0x54);
        if (iVar7 <= iVar6) {
          return in_lr;
        }
        *(int *)(param_1 + 0x54) = iVar7;
        *(undefined *)(param_1 + 0xba) = 0x80;
        break;
      }
    }
    cVar2 = *(char *)(param_1 + 0xba) + -1;
    *(char *)(param_1 + 0xba) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
LAB_080cfdb0:
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    return in_lr;
  case 3:
    pcVar8 = (char *)(param_1 + 0xba);
    cVar2 = *pcVar8;
    *pcVar8 = cVar2 + -1;
    if ((char)(cVar2 + -1) == -1) {
      *pcVar8 = -1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  case 4:
    pcVar8 = (char *)(param_1 + 0xba);
    cVar2 = *pcVar8;
    *pcVar8 = cVar2 + -1;
    if ((char)(cVar2 + -1) != -1) {
      return in_lr;
    }
    *pcVar8 = -0x80;
    break;
  case 5:
    pcVar8 = (char *)(param_1 + 0xba);
    cVar2 = *pcVar8;
    *pcVar8 = cVar2 + -1;
    if ((char)(cVar2 + -1) != -1) {
      return in_lr;
    }
    *pcVar8 = '@';
    break;
  case 6:
    pbVar9 = (byte *)(param_1 + 0xba);
    if ((*pbVar9 & 1) == 0) {
      iVar7 = *(int *)(param_1 + 0x54) + -0x100;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x54) + 0x100;
    }
    *(int *)(param_1 + 0x54) = iVar7;
    bVar4 = *pbVar9;
    *pbVar9 = bVar4 - 1;
    if ((byte)(bVar4 - 1) != 0xff) {
      return in_lr;
    }
    *pbVar9 = 0x20;
    *(undefined4 *)(param_1 + 0x60) = 0x300;
    *(undefined4 *)(param_1 + 0x68) = 0xc;
    break;
  case 7:
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + -6;
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -6;
    iVar7 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar7;
    iVar7 = *(int *)(param_1 + 0x58) + iVar7;
    *(int *)(param_1 + 0x58) = iVar7;
    if (iVar7 <= *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x58) + -0x2200) {
      return in_lr;
    }
    break;
  case 8:
    uVar1 = *(ushort *)(param_1 + 0x50);
    if (6 < uVar1) {
      *(ushort *)(param_1 + 0x50) = uVar1 - 6;
      *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -6;
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_080cfd00_caseD_9;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080cfd00_caseD_9:
  return in_lr;
}

