// sub_08067EF8 at 0x08067EF8 (thumb)

undefined4 sub_08067EF8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_083627d0);
    *(undefined *)(param_1 + 0x12) = 0x1a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar4 = sub_08009A3C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c),
                       *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60));
  if ((uVar4 & 0xf) != 1) {
    iVar5 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    iVar6 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    *(int *)(param_1 + 0x5c) = iVar5 + (iVar5 * -0xf >> 8);
    *(int *)(param_1 + 0x60) = iVar6 + (iVar6 * -0xf >> 8);
    piVar7 = (int *)(param_1 + 0xbc);
    iVar5 = sub_08025794(*piVar7);
    if (iVar5 != 0) {
      *(undefined *)(param_1 + 0xc0) = 0;
      *piVar7 = 0;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    if (*piVar7 == 0) {
      if (1 < *(short *)(param_1 + 0xa4)) {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
    }
    else if (*(char *)(param_1 + 0xc0) == '\x01') {
      if (1 < *(short *)(param_1 + 0xa4)) {
        uVar3 = 5;
        goto LAB_08067fda;
      }
    }
    else {
      if (*(char *)(param_1 + 0xc0) == '\x02') {
        if (1 < *(short *)(param_1 + 0xa4)) {
          uVar3 = 7;
LAB_08067fda:
          *(undefined *)(param_1 + 0xd) = uVar3;
          *(undefined *)(param_1 + 0xe) = 0;
          return in_lr;
        }
        bVar1 = *(byte *)(param_1 + 9);
        *(undefined4 *)(param_1 + 0xc) = 2;
        goto LAB_08067ff8;
      }
      if (1 < *(short *)(param_1 + 0xa4)) {
        uVar3 = 2;
        goto LAB_08067fda;
      }
    }
  }
  bVar1 = *(byte *)(param_1 + 9);
  *(undefined4 *)(param_1 + 0xc) = 2;
LAB_08067ff8:
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)bVar1 * 4) + 8);
  return in_lr;
}

