// sub_080C1BB0 at 0x080C1BB0 (thumb)

undefined4 sub_080C1BB0(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 in_lr;
  
  iVar5 = DAT_0202dbf0;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    bVar1 = (byte)DAT_0202e918;
    if ((DAT_0202e918 & 8) != 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_080c1db8;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202dbf0 + 0x54);
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0x1400;
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080c1dec;
    sub_080C16F0(param_1,0);
    sub_080C16F0(param_1,1);
    sub_080C16F0(param_1,2);
    sub_080C16F0(param_1,3);
    *(byte *)(param_1 + 0x12) = bVar1 & 8;
    *(undefined4 *)(param_1 + 0xc0) = 0x1e0;
    bVar1 = *(byte *)(param_1 + 10);
    bVar3 = 0xfe;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if ((DAT_0202e918 & 8) != 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080c1db8:
          *(byte *)(param_1 + 10) = bVar1 & 0xfd;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          *(undefined4 *)(param_1 + 0xc) = 3;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc);
          return in_lr;
        }
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202dbf0 + 0x54);
        *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0x1400;
        cVar2 = sub_0802B6E8(iVar5);
        *(char *)(param_1 + 0x12) = cVar2 + *(char *)(param_1 + 0x12);
        iVar5 = *(int *)(param_1 + 0xc0) + -1;
        *(int *)(param_1 + 0xc0) = iVar5;
        if ((iVar5 == -1) || (0x40 < *(byte *)(param_1 + 0x12))) {
          *(undefined4 *)(param_1 + 0xc) = 2;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
          sub_080C17F4(param_1);
          return in_lr;
        }
      }
      else if (bVar1 == 3) {
        bVar1 = *(byte *)(param_1 + 0x12);
        if ((bVar1 & 1) == 0) {
          bVar3 = *(byte *)(param_1 + 10) | 1;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) & 0xfe;
        }
        *(byte *)(param_1 + 10) = bVar3;
        *(byte *)(param_1 + 0x12) = bVar1 - 1;
        if (bVar1 == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xfe;
          goto LAB_080c1db8;
        }
      }
      goto LAB_080c1dec;
    }
    if (bVar1 != 0) goto LAB_080c1dec;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar6 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar6;
    iVar7 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar7;
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      if (*(int *)(&DAT_08861eb0 + (uint)*(byte *)(param_1 + 0x11) * 4) < iVar7) {
        *(int *)(param_1 + 0x60) = *(int *)(&DAT_08861eb0 + (uint)*(byte *)(param_1 + 0x11) * 4);
      }
    }
    else {
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      iVar7 = *(int *)(&DAT_08861eb0 + (uint)*(byte *)(param_1 + 0x11) * 4);
      if (iVar7 < iVar6) {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          *(int *)(param_1 + 0x5c) = -iVar7;
        }
        else {
          *(int *)(param_1 + 0x5c) = iVar7;
        }
      }
    }
    puVar8 = (uint *)(param_1 + 0x8c);
    if ((*puVar8 & 4) == 0) {
      sVar4 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar4 != 0) {
        *puVar8 = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined *)(param_1 + 0x12) = 0x20;
        *(undefined *)(param_1 + 0xe) = 3;
      }
      goto LAB_080c1dec;
    }
    sub_0801CF00(param_1,0x3e01);
    *(char *)(iVar5 + 0x278) = *(char *)(iVar5 + 0x278) + '\x01';
    *puVar8 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    bVar1 = *(byte *)(param_1 + 10);
    bVar3 = 0xfb;
  }
  *(byte *)(param_1 + 10) = bVar3 & bVar1;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080c1dec:
  sub_0801CFF0(param_1);
  return in_lr;
}

