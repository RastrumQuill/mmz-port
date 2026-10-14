// sub_08029EB8 at 0x08029EB8 (thumb)

undefined4 sub_08029EB8(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xb9) = 1;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08029778(param_1,2);
    break;
  case 2:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x71) != '\t') {
      return in_lr;
    }
    sub_08076EE8(param_1,(undefined *)(param_1 + 0xbd),(undefined *)(param_1 + 0xba));
    sub_0800561C(param_1 + 0x74,&DAT_082accb8);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0xba) = 0;
    *(undefined *)(param_1 + 0xbd) = 1;
    break;
  case 3:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x12) == '-') {
      *(undefined *)(param_1 + 0xbd) = 2;
      sub_08001EAC(0x2f);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x30;
    uVar3 = sub_08001EAC(0xf);
    *(undefined2 *)(param_1 + 0xbe) = uVar3;
    *(undefined *)(param_1 + 0xbd) = 3;
    break;
  case 4:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
    *(char *)(param_1 + 0xba) =
         (char)((short)(&DAT_080c8ea4)[(uint)*(byte *)(param_1 + 0x12) * 2] + 0x100 >> 4) + '\x01';
    sub_080297C0(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    uVar6 = 0;
    do {
      iVar7 = (int)(uVar6 << 0x10) >> 0x10;
      *(char *)(iVar7 + param_1 + 0xd0) = (char)((int)(uVar6 << 0x10) >> 0x11);
      uVar8 = iVar7 + 1;
      uVar6 = uVar8 & 0xffff;
    } while ((int)(uVar8 * 0x10000) >> 0x10 < 6);
    uVar6 = 0;
    do {
      uVar8 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar8 & 0x7fffffff;
      sVar4 = sub_080C8CB0(uVar8 * 2 >> 0x11,6);
      puVar5 = (undefined *)(sVar4 + param_1 + 0xd0);
      uVar1 = *puVar5;
      puVar9 = (undefined *)((short)uVar6 + param_1 + 0xd0);
      *puVar5 = *puVar9;
      *puVar9 = uVar1;
      uVar8 = (int)(short)uVar6 + 1;
      uVar6 = uVar8 & 0xffff;
    } while ((int)(uVar8 * 0x10000) >> 0x10 < 6);
    *(undefined *)(param_1 + 0x12) = 5;
    *(undefined *)(param_1 + 0x13) = 0x18;
    *(undefined4 *)(param_1 + 0x54) = 0;
    sub_08001EE8((int)*(short *)(param_1 + 0xbe));
    sub_08001EAC(0xac);
    *(undefined *)(param_1 + 0xbd) = 1;
    break;
  case 5:
    sub_080297C0(param_1);
    if ((*(byte *)(param_1 + 0x13) & 3) == 0) {
      local_20 = *(int *)(param_1 + 0xc0) + 1;
      uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar6 & 0x7fffffff;
      local_24 = *(int *)(param_1 + 200) +
                 (uint)*(byte *)((uint)*(byte *)(param_1 + 0x12) + param_1 + 0xd0) * 0x2000 +
                 (uVar6 * 8 >> 0x13);
      sub_0801412C(1,&local_24);
      sub_08095D10(&local_24);
    }
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_0809E16C(*(int *)(param_1 + 200) +
                 (uint)*(byte *)((uint)*(byte *)(param_1 + 0x12) + param_1 + 0xd0) * 0x2000 + 0x1000
                 ,*(int *)(param_1 + 0xc0) + 1);
    cVar2 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar2 + -1;
    if (cVar2 != '\x01') {
      *(undefined *)(param_1 + 0x13) = 0x18;
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x20;
    break;
  case 6:
    iVar7 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)iVar7;
    *(char *)(param_1 + 0xba) = ' ' - (char)((short)(&DAT_080c8ea4)[iVar7 * 4] + 0x100 >> 4);
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xbd) = 0;
    break;
  case 7:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xbc) = 1;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08029ed4_caseD_8;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08029ed4_caseD_8:
  return in_lr;
}

