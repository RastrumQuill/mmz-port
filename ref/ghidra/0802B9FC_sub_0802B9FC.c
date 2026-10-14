// sub_0802B9FC at 0x0802B9FC (thumb)

undefined4 sub_0802B9FC(int param_1)

{
  bool bVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082acdf8);
    sub_08029778(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar5 = *(int *)(param_1 + 0x4c);
  iVar6 = *(int *)(DAT_0202286c + 0x4c) - iVar5;
  if (iVar6 < 0) {
    if (0x3fff < iVar5 - *(int *)(DAT_0202286c + 0x4c)) goto LAB_0802badc;
LAB_0802ba54:
    bVar1 = false;
    if (iVar5 < *(int *)(DAT_0202286c + 0x4c)) {
      if (iVar5 - *(int *)(param_1 + 0xc0) < 0x2000) {
        uVar2 = 3;
LAB_0802bb00:
        *(undefined *)(param_1 + 0xd) = uVar2;
        *(undefined *)(param_1 + 0xe) = 0;
        goto LAB_0802bb58;
      }
    }
    else if (*(int *)(param_1 + 0xc4) - iVar5 < 0x2000) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      bVar1 = true;
    }
    if (bVar1) goto LAB_0802bb58;
    do {
      uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar4 & 0x7fffffff;
      puVar7 = &DAT_082acfa0 + (uVar4 * 2 >> 0x11 & 1);
      cVar3 = sub_0802B600(param_1,*puVar7);
    } while (cVar3 != '\0');
  }
  else {
    if (iVar6 < 0x4000) goto LAB_0802ba54;
LAB_0802badc:
    bVar1 = false;
    if (iVar5 < *(int *)(DAT_0202286c + 0x4c)) {
      if (0x1fff < iVar5 - *(int *)(param_1 + 0xc0)) goto LAB_0802bb22;
      uVar2 = 2;
      goto LAB_0802bb00;
    }
    if (*(int *)(param_1 + 0xc4) - iVar5 < 0x2000) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      bVar1 = true;
    }
LAB_0802bb22:
    if (bVar1) goto LAB_0802bb58;
    do {
      uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar4 & 0x7fffffff;
      puVar7 = &DAT_082acfa2 + (uVar4 * 2 >> 0x11 & 1);
      cVar3 = sub_0802B600(param_1,*puVar7);
    } while (cVar3 != '\0');
  }
  *(undefined *)(param_1 + 0xd) = *puVar7;
  *(char *)(param_1 + 0xe) = cVar3;
LAB_0802bb58:
  sub_080297C0(param_1);
  return in_lr;
}

