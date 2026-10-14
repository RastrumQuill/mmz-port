// sub_08050DB4 at 0x08050DB4 (thumb)

undefined4 sub_08050DB4(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x53);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    sub_08017700(param_1,0xaf03);
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    sub_0800393C(&DAT_085d7ee8,(DAT_0202faa8 - 0x2f0) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7ef4,(DAT_0202f8a8 - 7) * 0x20 + 0x200);
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    iVar3 = (uVar2 * 2 >> 0x11 & 1) + 1;
    if (iVar3 != 0) {
      iVar7 = 0;
      do {
        iVar6 = *(int *)(DAT_0202f5c0 + 0x54) + -0x3200 + iVar7;
        iVar5 = *(int *)(param_1 + 0xb8) + -0x7000;
        if (iVar6 < iVar5) {
          iVar6 = iVar5;
        }
        iVar5 = *(int *)(param_1 + 0xb8) + 0x7000;
        if (iVar5 < iVar6) {
          iVar6 = iVar5;
        }
        uVar4 = sub_0800A104(iVar6,*(undefined4 *)(param_1 + 0x58));
        sub_0807FA00(param_1,iVar6,uVar4);
        iVar7 = iVar7 + 0x6400;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    sub_0800471C(0x55);
  }
  sub_080177F4(param_1);
  if ((*(uint *)(param_1 + 0xc0) & 0x80) == 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

