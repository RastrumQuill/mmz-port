// sub_080387C4 at 0x080387C4 (thumb)

undefined4 sub_080387C4(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 in_lr;
  byte abStack_2c [20];
  
  sub_080C8D70(abStack_2c,&DAT_080c9252,0x14);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08029778(param_1,0xe);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar3 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar3;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    iVar3 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (iVar3 < 0) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
LAB_080388ec:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_08029778(param_1,0x14);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x60) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    iVar3 = sub_080C8CB0(uVar2 * 2 >> 0x11,3);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60) * iVar3 * 0x100;
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) goto LAB_080388ec;
    break;
  case 4:
    sub_08001EAC(0x45);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(uint *)(param_1 + 0x54) = (*(byte *)(param_1 + 10) >> 4 & 1) * -0x20 + 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    iVar3 = sub_080C8CB0(uVar2 * 2 >> 0x11,3);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x5c) + iVar3 * 0x100 * *(int *)(param_1 + 0x60);
    cVar5 = *(char *)(param_1 + 0x13);
    if (cVar5 == '\0') {
      *(undefined *)(param_1 + 0x13) = 0x14;
      sub_08001EAC(2);
      for (uVar2 = 0; uVar2 < abStack_2c[(uint)*(byte *)(param_1 + 0x12) * 5];
          uVar2 = uVar2 + 1 & 0xff) {
        sub_080952E0(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x1000,0x380,
                     abStack_2c[uVar2 + (uint)*(byte *)(param_1 + 0x12) * 5 + 1]);
      }
      cVar1 = *(char *)(param_1 + 0x12) + '\x01';
      *(char *)(param_1 + 0x12) = cVar1;
      cVar5 = *(char *)(param_1 + 0x13);
      if (cVar1 == '\x04') {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    *(byte *)(param_1 + 0x13) = cVar5 - 1U;
    if ((cVar5 - 1U & 7) == 0) {
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar6 = uVar2 & 0x7fffffff;
      DAT_02022890 = uVar6;
      iVar3 = sub_080C8CB0(uVar2 * 2 >> 0x11,0x18);
      uVar2 = uVar6 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar2 & 0x7fffffff;
      sub_08095290(*(int *)(param_1 + 0x4c) + (iVar3 + -0xc) * 0x100,
                   *(int *)(param_1 + 0x50) + (-(uVar2 * 2 >> 0x11) & 0x1f) * -0x100);
    }
    break;
  case 6:
    uVar4 = sub_08099F90(param_1,&DAT_082ada2c);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
      DAT_02022b6e = DAT_02022b6e | 2;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  default:
    goto switchD_080387e8_caseD_8;
  }
  sub_080297C0(param_1);
switchD_080387e8_caseD_8:
  return in_lr;
}

