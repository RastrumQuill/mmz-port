// sub_0807FD34 at 0x0807FD34 (thumb)

undefined4 sub_0807FD34(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar8 + 0xca) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_083646e0);
  }
  else {
    sub_08007390(param_1 + 0x74,&DAT_083646b0);
  }
  pcVar4 = (char *)(param_1 + 0xb8);
  if (*pcVar4 == '\0') {
    uVar5 = sub_08008FEC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    *pcVar4 = (uVar5 & 0xfff0) == 0x400;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if ((bVar1 == 2) &&
         (sub_080177F4(param_1),
         0x1400 < (*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0xa00U)) {
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_0807fece;
    }
    if (bVar1 != 0) goto LAB_0807fece;
    *(undefined *)(param_1 + 0x25) = 0x18;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0x4c00);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*pcVar4 != '\0') {
    *(undefined *)(param_1 + 0x13) = 1;
  }
  iVar6 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
  if (iVar6 < 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sVar3 = sub_08009A3C(*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x58) + -0x1000);
    if ((sVar3 == 0) || (*pcVar4 != '\0')) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x40;
      cVar2 = '\0';
    }
    else {
LAB_0807fe88:
      cVar2 = *(char *)(param_1 + 0x12) + '\x01';
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    sVar3 = sub_08009A3C(*(int *)(param_1 + 0x54) + 0x800,*(int *)(param_1 + 0x58) + -0x1000);
    if ((sVar3 != 0) && (*pcVar4 == '\0')) goto LAB_0807fe88;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x40;
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0x12) = cVar2;
  if (iVar6 + 0xa00U < 0x1400) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
LAB_0807fece:
  iVar6 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar6 - *(int *)(param_1 + 0x58) < 0xe00) {
    if (*pcVar4 == '\0') {
      *(int *)(param_1 + 0x58) = iVar6;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x58) + 0x20;
      *(int *)(param_1 + 0x58) = iVar7;
      if (iVar6 - iVar7 < -0x6000) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
        pcVar4 = (char *)(iVar8 + 0xcb);
        *pcVar4 = *pcVar4 + -1;
      }
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

