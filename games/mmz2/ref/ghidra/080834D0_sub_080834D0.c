// sub_080834D0 at 0x080834D0 (thumb)

undefined4 sub_080834D0(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6e00);
    sub_08006E08(param_1 + 0x74,&DAT_083410e8);
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x2000);
    if (sVar2 != 0) {
      *(undefined4 *)(param_1 + 0x60) = 0x80;
      iVar3 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x2000);
      iVar3 = iVar3 - *(int *)(param_1 + 0x58);
LAB_08083550:
      iVar3 = sub_080EF150(iVar3 + 0x2000,*(undefined4 *)(param_1 + 0x60));
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      *(char *)(param_1 + 0x12) = (char)iVar3;
      if (*(char *)(param_1 + 0x12) == '\0') {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined *)(param_1 + 0x12) = 1;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0808357a;
    }
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x2000);
    if (sVar2 != 0) {
      *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
      iVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x2000);
      iVar3 = -(iVar3 - *(int *)(param_1 + 0x58));
      goto LAB_08083550;
    }
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
LAB_0808357a:
    sub_080128D4(param_1);
    if (((*(byte *)(param_1 + 0x12) & 7) == 0) &&
       (uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar4 & 0x7fffffff,
       (uVar4 * 2 >> 0x11 & 3) == 0)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = -0xc00;
      }
      else {
        iVar3 = 0xc00;
      }
      sub_080AC8A4(*(int *)(param_1 + 0x54) + iVar3,*(undefined4 *)(param_1 + 0x58),0);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(int *)(param_1 + 0x60) < 0) {
      *(undefined *)(param_1 + 0xbc) = 0x80;
      goto LAB_08083606;
    }
  }
  *(undefined *)(param_1 + 0xbc) = 0;
LAB_08083606:
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  return in_lr;
}

