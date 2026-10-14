// sub_08067AC4 at 0x08067AC4 (thumb)

undefined4 sub_08067AC4(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar1 = DAT_0202dbf0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (-1 < *(int *)(DAT_0202dbf0 + 0xec)) goto LAB_08067afe;
      sub_0801CF00(param_1,0xa916);
    }
    else {
      if (*(int *)(DAT_0202dbf0 + 0xec) < 1) {
LAB_08067afe:
        uVar5 = 0xa914;
      }
      else {
        uVar5 = 0xa916;
      }
      sub_0801CF00(param_1,uVar5);
    }
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x56ec) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(param_1 + 0x54);
        iVar7 = -0x2800;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x54);
        iVar7 = 0x2800;
      }
      *(int *)(param_1 + 100) = iVar3 + iVar7;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0x3500;
      uVar4 = 2;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar4 = 1;
      }
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(param_1 + 0x54);
        iVar7 = -0x3d00;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x54);
        iVar7 = 0x3d00;
      }
      *(int *)(param_1 + 100) = iVar3 + iVar7;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0x2800;
      uVar4 = 1;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar4 = 2;
      }
    }
    *(undefined *)(param_1 + 0x13) = uVar4;
    *(undefined4 *)(param_1 + 0x2c) = 0;
LAB_08067c02:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if ((*(char *)(param_1 + 0xe) == '\x01') && ('\x01' < *(char *)(param_1 + 0x71))) {
    *(undefined *)(param_1 + 0x12) = 0x80;
    uVar5 = sub_080DE7D4(param_1,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                         *(undefined *)(param_1 + 0x13),0x80);
    *(undefined4 *)(param_1 + 200) = uVar5;
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x56ec) {
      sub_08005784(param_1 + 0x74,&DAT_08857f00);
    }
    else {
      sub_08005784(param_1 + 0x74,&DAT_08857f48);
    }
    goto LAB_08067c02;
  }
  sub_0801CFF0(param_1);
  if (*(byte *)(param_1 + 0xe) < 2) {
    return in_lr;
  }
  if (*(int *)(iVar1 + 0xec) == 0) {
    uVar5 = 0x40;
  }
  else {
    uVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  if (*(char *)(param_1 + 0x13) == '\x02') {
    uVar6 = ~*(uint *)(iVar1 + 0xec) >> 0x1f;
  }
  else {
    uVar6 = 0;
    if (*(int *)(iVar1 + 0xec) < 1) {
      uVar6 = 1;
    }
  }
  if (uVar6 == 0) {
    iVar7 = *(int *)(param_1 + 100);
    iVar3 = *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar7 <= iVar3) {
      if (iVar7 - iVar3 < 0x41) {
LAB_08067d34:
        iVar3 = *(int *)(iVar1 + 0x1bc);
        iVar7 = -0x340;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x1bc);
        iVar7 = -0x300;
      }
      goto LAB_08067d3e;
    }
    if (iVar7 - iVar3 < 0x41) {
      iVar3 = (*(int *)(iVar1 + 0x1bc) + 0x340) - *(int *)(param_1 + 0x5c);
    }
    else {
      iVar3 = (*(int *)(iVar1 + 0x1bc) + 0x300) - *(int *)(param_1 + 0x5c);
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 100);
    iVar3 = *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar3 < iVar7) {
      if (iVar7 - iVar3 < 0x4001) {
        if (0x2400 < iVar7 - iVar3) goto LAB_08067d34;
        if (*(int *)(param_1 + 0x2c) != 0) goto LAB_08067d46;
        uVar5 = 0;
LAB_08067cd4:
        uVar5 = sub_080C844C(param_1,2,uVar5,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar5;
        goto LAB_08067d46;
      }
      iVar3 = *(int *)(iVar1 + 0x1bc);
      iVar7 = -0x300;
LAB_08067d3e:
      iVar3 = iVar3 + iVar7 + *(int *)(param_1 + 0x5c);
    }
    else if (iVar3 - iVar7 < 0x4001) {
      if (iVar3 - iVar7 < 0x2401) {
        if (*(int *)(param_1 + 0x2c) != 0) goto LAB_08067d46;
        uVar5 = 1;
        goto LAB_08067cd4;
      }
      iVar3 = (*(int *)(iVar1 + 0x1bc) + 0x340) - *(int *)(param_1 + 0x5c);
    }
    else {
      iVar3 = (*(int *)(iVar1 + 0x1bc) + 0x300) - *(int *)(param_1 + 0x5c);
    }
  }
  *(int *)(iVar1 + 0x1bc) = iVar3;
LAB_08067d46:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x16;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

