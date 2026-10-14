// sub_080282C4 at 0x080282C4 (thumb)

undefined4 sub_080282C4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar1 = *(short *)(param_1 + 0x18e) + -1;
  if (-1 < iVar1) {
    *(short *)(param_1 + 0x18e) = (short)iVar1;
  }
  iVar8 = *(int *)(param_1 + 0x5c);
  iVar9 = iVar8;
  if (iVar8 == 0) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar8;
    uVar2 = sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                         *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                         *(byte *)(param_1 + 10) >> 4 & 1,iVar8,1,1,0,1);
    uVar2 = uVar2 & 0x4f;
    if (uVar2 != 0) {
      uVar2 = 1;
      iVar9 = 0;
    }
  }
  iVar6 = *(int *)(param_1 + 0x60);
  if (iVar6 == 0) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    if (iVar6 < 0) {
      uVar3 = sub_0801F5B8(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                           *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                           *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
    }
    else {
      uVar3 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                           *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                           *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
    }
    uVar3 = uVar3 & 0x4f;
    if (uVar3 != 0) {
      uVar3 = 1;
      iVar6 = 0;
    }
  }
  iVar9 = iVar9 + *(int *)(param_1 + 100);
  iVar4 = *(int *)(param_1 + 0x68);
  if (*(short *)(param_1 + 0x18e) < 0) {
    pcVar7 = (char *)(param_1 + 400);
    if ((*pcVar7 != '\0') && ((uVar2 != 0 || (uVar3 != 0)))) {
      sub_080078B0(param_1 + 0x74,*pcVar7);
      sub_08014360(*pcVar7);
      if (*(char *)(param_1 + 0x17f) == -0x7d) {
        sub_0801E9FC(param_1,0x80);
      }
      else {
        sub_0801E9FC(param_1,0x83);
      }
    }
LAB_080285c0:
    if ((iVar8 != 0) && (iVar9 * iVar8 < 1)) {
      iVar9 = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
LAB_080285d2:
    *(int *)(param_1 + 0x5c) = iVar9;
    *(int *)(param_1 + 0x60) = iVar6 + iVar4;
  }
  else {
    if (((iVar1 != 0) && (uVar2 == 0)) && (uVar3 == 0)) {
      if (iVar8 == 0) goto LAB_080285d2;
      if (0 < iVar9 * iVar8) goto LAB_080285c0;
    }
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    pcVar7 = (char *)(param_1 + 400);
    if ((*pcVar7 == '\0') || ((uVar2 == 0 && (uVar3 == 0)))) {
      uVar2 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                           *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                           *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
      if ((uVar2 & 0xf) == 0) {
        *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
        *(undefined2 *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
        *(undefined *)(param_1 + 0x176) = 0;
        *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
        *(undefined *)(param_1 + 0x177) = 0;
        *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
        *(undefined *)(param_1 + 0x178) = 0;
        *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
        *(undefined *)(param_1 + 0x179) = 0;
      }
      else {
        sub_08032A54(param_1);
      }
    }
    else {
      sub_080078B0(param_1 + 0x74,*pcVar7);
      sub_08014360(*pcVar7);
      uVar5 = 1;
      if (((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) {
        uVar5 = 3;
      }
      *(undefined *)(param_1 + 0x191) = uVar5;
      if (uVar2 == 0) {
        *(char *)(param_1 + 0x192) = (char)iVar8;
      }
      else {
        *(char *)(param_1 + 0x192) = -(char)iVar8;
      }
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x176) = 0;
      *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
      *(undefined *)(param_1 + 0x177) = 0;
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 0;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
      sub_080285E8(param_1);
    }
  }
  return in_lr;
}

