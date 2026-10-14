// sub_080DD16C at 0x080DD16C (thumb)

undefined4 sub_080DD16C(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  sub_080177F4();
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    iVar6 = *(int *)(param_1 + 0x54);
    iVar5 = iVar6 + 0xc0;
    *(int *)(param_1 + 0x54) = iVar5;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (((cVar2 != -1) && (iVar5 <= *(int *)(param_1 + 0xb4) + 0x4000)) &&
       (sVar3 = sub_08009A3C(iVar6 + 0xcc0,*(int *)(param_1 + 0x58) + -0x800), sVar3 == 0)) {
      return in_lr;
    }
    sub_08017700(param_1,0xd802);
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080dd34c:
    *(char *)(param_1 + 0xd) = cVar2;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      if ((*(char *)(param_1 + 0x13) == '\0') &&
         (uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3, DAT_0202f608 = uVar4 & 0x7fffffff,
         (uVar4 * 2 >> 0x11 & 1) != 0)) {
        sub_08017700(param_1,0xd801);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        *(undefined *)(param_1 + 0xd) = 3;
      }
      else {
        sub_08017700(param_1,0xd800);
        *(undefined *)(param_1 + 0x13) = 0;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      sub_080177F4(param_1);
    }
    else {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        iVar6 = *(int *)(param_1 + 0x54);
        iVar5 = iVar6 + -0xc0;
        *(int *)(param_1 + 0x54) = iVar5;
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (((cVar2 != -1) && (*(int *)(param_1 + 0xb4) + -0x4000 <= iVar5)) &&
           (sVar3 = sub_08009A3C(iVar6 + -0xcc0,*(int *)(param_1 + 0x58) + -0x800), sVar3 == 0)) {
          return in_lr;
        }
        sub_08017700(param_1,0xd803);
        sub_080177F4(param_1);
        cVar2 = '\0';
        goto LAB_080dd34c;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      if ((*(char *)(param_1 + 0x13) == '\0') &&
         (uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3, DAT_0202f608 = uVar4 & 0x7fffffff,
         (uVar4 * 2 >> 0x11 & 1) != 0)) {
        sub_08017700(param_1,0xd800);
        *(undefined *)(param_1 + 0xd) = 1;
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      else {
        sub_08017700(param_1,0xd801);
        *(undefined *)(param_1 + 0x13) = 0;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      sub_080177F4(param_1);
    }
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar4 * 2 >> 0x11) & 0x3f) + 0x28;
  }
  return in_lr;
}

