// sub_080763F8 at 0x080763F8 (thumb)

undefined4 sub_080763F8(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1402);
    sub_08006E08(param_1 + 0x74,&DAT_0833fa94);
    *(undefined *)(param_1 + 0xb9) = 1;
    iVar7 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar8 = iVar7;
      if (iVar7 < 0) {
        iVar8 = -iVar7;
      }
      if (iVar8 < 0x2000) {
LAB_08076496:
        iVar7 = -0x2000;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          iVar7 = 0x2000;
        }
      }
      else {
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar4 & 0x7fffffff;
        if ((uVar4 * 2 >> 0x11 & 1) == 0) goto LAB_080764b0;
        iVar8 = iVar7;
        if (iVar7 < 0) {
          iVar8 = -iVar7;
        }
        iVar6 = 0x7000;
        if (0x7000 < iVar8) {
          bVar1 = *(byte *)(param_1 + 10);
          iVar7 = -0x7000;
          goto LAB_080764c8;
        }
      }
    }
    else {
      iVar8 = iVar7;
      if (iVar7 < 0) {
        iVar8 = -iVar7;
      }
      if (iVar8 < 0x2000) goto LAB_08076496;
LAB_080764b0:
      iVar8 = iVar7;
      if (iVar7 < 0) {
        iVar8 = -iVar7;
      }
      iVar6 = 0x6000;
      if (0x6000 < iVar8) {
        bVar1 = *(byte *)(param_1 + 10);
        iVar7 = -0x6000;
LAB_080764c8:
        if ((bVar1 & 0x10) != 0) {
          iVar7 = iVar6;
        }
      }
    }
    uVar4 = sub_080EEF7C(0x280000);
    *(uint *)(param_1 + 0x60) = -(uVar4 & 0xffff);
    uVar5 = sub_080EF150(iVar7,-((int)-(uVar4 & 0xffff) >> 5) & 0xffff);
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xe) != '\x01') {
    if (*(char *)(param_1 + 0xe) != '\x02') {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      sub_08076E8C(param_1);
      return in_lr;
    }
    iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar7;
    sVar3 = sub_08008CFC(iVar7,*(undefined4 *)(param_1 + 0x58));
    if ((sVar3 != 0) &&
       (cVar2 = sub_080771A0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
       cVar2 == '\0')) {
      if (*(int *)(param_1 + 0x5c) < 0) {
        uVar5 = sub_080771C0(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)
                            );
      }
      else {
        if (*(int *)(param_1 + 0x5c) < 1) goto LAB_08076644;
        uVar5 = sub_080771E0(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)
                            );
      }
      *(undefined4 *)(param_1 + 0x54) = uVar5;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
LAB_08076644:
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar7 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar7;
    if (0x700 < iVar7) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    if (*(int *)(param_1 + 0x60) < 0) {
      sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar3 == 0) {
        return in_lr;
      }
      cVar2 = sub_080771A0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (cVar2 != '\0') {
        return in_lr;
      }
      uVar5 = sub_08077200(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      *(undefined4 *)(param_1 + 0x60) = 0;
      return in_lr;
    }
    sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar3 == 0) {
      return in_lr;
    }
    cVar2 = sub_080771A0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_08006E08(param_1 + 0x74,&DAT_0833fa64);
    uVar5 = sub_0807721C(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    goto LAB_080766c0;
  }
  iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar7;
  iVar8 = *(int *)(param_1 + 0x58) + -0xc00;
  sVar3 = sub_08008CFC(iVar7,iVar8);
  if ((sVar3 != 0) && (cVar2 = sub_080771A0(iVar7,iVar8), cVar2 == '\0')) {
    if (*(int *)(param_1 + 0x5c) < 0) {
      uVar5 = sub_080771C0(param_1,iVar7,iVar8);
    }
    else {
      if (*(int *)(param_1 + 0x5c) < 1) goto LAB_08076558;
      uVar5 = sub_080771E0(param_1,iVar7,iVar8);
    }
    *(undefined4 *)(param_1 + 0x54) = uVar5;
  }
LAB_08076558:
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar7 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar7;
  if (0x700 < iVar7) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (*(int *)(param_1 + 0x60) < 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    iVar7 = *(int *)(param_1 + 0x58) + -0xc00;
    sVar3 = sub_08008CFC(uVar5,iVar7);
    if (sVar3 == 0) {
      return in_lr;
    }
    cVar2 = sub_080771A0(uVar5,iVar7);
    if (cVar2 != '\0') {
      return in_lr;
    }
    iVar7 = sub_08077200(param_1,uVar5,iVar7);
    *(int *)(param_1 + 0x58) = iVar7 + 0xc00;
    *(undefined4 *)(param_1 + 0x60) = 0;
    return in_lr;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x54);
  iVar7 = *(int *)(param_1 + 0x58) + 0x2000;
  sVar3 = sub_08008CFC(uVar5,iVar7);
  if (sVar3 == 0) {
    return in_lr;
  }
  cVar2 = sub_080771A0(uVar5,iVar7);
  if (cVar2 != '\0') {
    return in_lr;
  }
  sub_080127E4(param_1,0x1403);
  sub_080128D4(param_1);
LAB_080766c0:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

