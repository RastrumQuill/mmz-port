// sub_08066B10 at 0x08066B10 (thumb)

undefined4 sub_08066B10(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836261c);
    *(byte *)(param_1 + 0xf) = *(byte *)(DAT_0202f5c0 + 10) >> 4 & 1;
    *(undefined *)(param_1 + 0x12) = 0x1a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar4 = sub_08009A3C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) + 0x1000,
                       *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) + 0x1000);
  if (((((uVar4 == 0) || ((uVar4 & 0x8000) != 0)) &&
       ((uVar4 = sub_08009A3C((*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c)) + -0x1000,
                              *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) + 0x1000),
        uVar4 == 0 || ((uVar4 & 0x8000) != 0)))) &&
      ((uVar4 = sub_08009A3C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) + 0x1000,
                             *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) + -0x1000),
       uVar4 == 0 || ((uVar4 & 0x8000) != 0)))) &&
     ((uVar4 = sub_08009A3C((*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c)) + -0x1000,
                            *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) + -0x1000),
      uVar4 == 0 || ((uVar4 & 0x8000) != 0)))) {
    iVar5 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    iVar6 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    *(int *)(param_1 + 0x5c) = iVar5 + (iVar5 * -0xf >> 8);
    *(int *)(param_1 + 0x60) = iVar6 + (iVar6 * -0xf >> 8);
    piVar7 = (int *)(param_1 + 0xc0);
    iVar5 = sub_08025794(*piVar7);
    if (iVar5 != 0) {
      *(undefined *)(param_1 + 0xbf) = 0;
      *piVar7 = 0;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*piVar7 == 0) {
      if (1 < *(short *)(param_1 + 0xa4)) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
    }
    else if (*(char *)(param_1 + 0xbf) == '\x01') {
      if (1 < *(short *)(param_1 + 0xa4)) {
        uVar3 = 5;
        goto LAB_08066c9a;
      }
    }
    else {
      if (*(char *)(param_1 + 0xbf) == '\x02') {
        if (1 < *(short *)(param_1 + 0xa4)) {
          uVar3 = 7;
LAB_08066c9a:
          *(undefined *)(param_1 + 0xd) = uVar3;
          *(undefined *)(param_1 + 0xe) = 0;
          return in_lr;
        }
        bVar1 = *(byte *)(param_1 + 9);
        *(undefined4 *)(param_1 + 0xc) = 2;
        goto LAB_08066cb8;
      }
      if (1 < *(short *)(param_1 + 0xa4)) {
        uVar3 = 1;
        goto LAB_08066c9a;
      }
    }
  }
  bVar1 = *(byte *)(param_1 + 9);
  *(undefined4 *)(param_1 + 0xc) = 2;
LAB_08066cb8:
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)bVar1 * 4) + 8);
  return in_lr;
}

