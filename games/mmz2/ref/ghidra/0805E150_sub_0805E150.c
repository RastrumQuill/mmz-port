// sub_0805E150 at 0x0805E150 (thumb)

undefined4 sub_0805E150(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xaa01);
    iVar7 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar7 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar4 = 0xffffff00;
    }
    else {
      uVar4 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    iVar7 = *(int *)(DAT_0202e130 + 0x58) + -0x3000;
    if (*(int *)(param_1 + 0x58) < iVar7) {
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar7 < 0x4001) {
        uVar4 = 0x80;
      }
      else {
        uVar4 = 0x100;
      }
    }
    else {
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar7 < 0x4001) {
        uVar4 = 0xffffff80;
      }
      else {
        uVar4 = 0xffffff00;
      }
    }
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pcVar5 = (char *)(param_1 + 0xd8);
  if ((*pcVar5 != '\0') && (*(int *)(param_1 + 0x58) < *(int *)(DAT_0202e130 + 0x58) + -0x2000)) {
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar8 = *(int *)(DAT_0202e130 + 0x54) + 0xa00;
      iVar6 = *(int *)(param_1 + 0x54);
      iVar7 = iVar6 - iVar8;
    }
    else {
      iVar8 = *(int *)(DAT_0202e130 + 0x54) + -0xa00;
      iVar6 = *(int *)(param_1 + 0x54);
      iVar7 = iVar6 - iVar8;
    }
    if (iVar7 < 0) {
      iVar7 = iVar8 - iVar6;
    }
    if (iVar7 < 0xa00) {
      *(undefined *)(param_1 + 0xd) = 0x1a;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  bVar2 = *(byte *)(param_1 + 0xf);
  if (bVar2 == 1) {
    iVar8 = *(int *)(param_1 + 0x5c) +
            (int)*(short *)(&DAT_0833d0bc + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2));
    *(int *)(param_1 + 0x5c) = iVar8;
    iVar7 = iVar8;
    if (iVar8 < 0) {
      iVar7 = -iVar8;
    }
    if (iVar7 < 0x401) goto LAB_0805e388;
    uVar4 = sub_080EF150(iVar8,0x30);
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined *)(param_1 + 0x12) = 0x30;
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 != 0) goto LAB_0805e388;
      iVar7 = *(int *)(param_1 + 0x5c) +
              (int)*(short *)(&DAT_0833d0bc + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2));
      *(int *)(param_1 + 0x5c) = iVar7;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar7 < 0x181) goto LAB_0805e388;
      uVar4 = 0xaa02;
    }
    else {
      if (bVar2 != 2) {
        if (bVar2 == 3) {
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
          cVar3 = *(char *)(param_1 + 0x12) + -1;
          *(char *)(param_1 + 0x12) = cVar3;
          if (cVar3 == -1) {
            *(undefined4 *)(param_1 + 0x5c) = 0;
            *pcVar5 = *pcVar5 + '\x01';
            *(undefined *)(param_1 + 0xd) = 3;
            *(undefined *)(param_1 + 0xe) = 0;
          }
        }
        goto LAB_0805e388;
      }
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != '\x0f') goto LAB_0805e388;
      uVar4 = 0xaa01;
    }
    sub_080127E4(param_1,uVar4);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0805e388:
  if ((*(char *)(param_1 + 0xf) != '\0') &&
     (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54) !=
      (bool)(*(byte *)(param_1 + 10) >> 4 & 1))) {
    *pcVar5 = *pcVar5 + '\x01';
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 3;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080128D4(param_1);
  return in_lr;
}

