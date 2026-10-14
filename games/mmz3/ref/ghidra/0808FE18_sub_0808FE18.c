// sub_0808FE18 at 0x0808FE18 (thumb)

undefined4 sub_0808FE18(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    pbVar7 = (byte *)(param_1 + 0x4a);
    *pbVar7 = *pbVar7 & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
    *pbVar7 = *pbVar7 & 0xdf;
    sub_08007390(param_1 + 0x74,&DAT_08365dd0);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    sub_08017700(param_1,0x7e00);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (*(int *)(param_1 + 0x5c) < 1) {
      uVar1 = 0x14;
    }
    else {
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 0xe) = uVar1;
    break;
  case 2:
    pbVar7 = (byte *)(param_1 + 0xb9);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      bVar2 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar2;
      if (5 < bVar2) {
        *pbVar7 = *pbVar7 + 1;
        *(undefined *)(param_1 + 0x13) = 0;
      }
      *(int *)(param_1 + 100) =
           *(int *)(param_1 + 100) + *(int *)(&DAT_08365f54 + (uint)*(byte *)(param_1 + 0x13) * 4);
      sub_08017700(param_1,*(undefined2 *)(&DAT_08365f30 + (uint)*(byte *)(param_1 + 0x13) * 2));
    }
    sub_080177F4(param_1);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    if (3 < *pbVar7) {
      *pbVar7 = 0;
      uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar6 & 0x7fffffff;
      if (*(int *)(&DAT_08365ef0 + (uVar6 * 2 >> 0x11 & 0xf) * 4) != 0) {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    if (*(char *)(param_1 + 0xd) == '\x02') {
      return in_lr;
    }
    iVar4 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x2000,*(undefined4 *)(param_1 + 0x58));
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    iVar4 = sub_0800A104(*(int *)(param_1 + 0x54) + 0x1000,*(undefined4 *)(param_1 + 0x58));
    if (iVar4 == *(int *)(param_1 + 0x58)) {
      return in_lr;
    }
    uVar5 = 0xffffff34;
    goto LAB_08090154;
  case 3:
    uVar6 = (uint)CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
    if ((uVar6 - 0x7e00 < 2) || (uVar6 == 0x7e05)) {
LAB_08090196:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      bVar2 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar2;
      if (5 < bVar2) {
        cVar3 = '\0';
        goto LAB_080901be;
      }
LAB_080901c0:
      sub_08017700(param_1,*(undefined2 *)(&DAT_08365f30 + (uint)*(byte *)(param_1 + 0x13) * 2));
    }
    break;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    pbVar7 = (byte *)(param_1 + 0x4a);
    *pbVar7 = *pbVar7 & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
    *pbVar7 = *pbVar7 & 0xdf;
    sub_08017700(param_1,0x7e0c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xb8) = 1;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff34;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  default:
    goto switchD_0808fe2c_caseD_6;
  case 0x14:
    pbVar7 = (byte *)(param_1 + 0xb9);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (*(char *)(param_1 + 0x13) == '\0') {
        *pbVar7 = *pbVar7 + 1;
        cVar3 = '\x05';
      }
      else {
        cVar3 = *(char *)(param_1 + 0x13) + -1;
      }
      *(char *)(param_1 + 0x13) = cVar3;
      *(int *)(param_1 + 100) =
           *(int *)(param_1 + 100) - *(int *)(&DAT_08365f3c + (uint)*(byte *)(param_1 + 0x13) * 4);
      sub_08017700(param_1,*(undefined2 *)(&DAT_08365f30 + (uint)*(byte *)(param_1 + 0x13) * 2));
    }
    sub_080177F4(param_1);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    if (3 < *pbVar7) {
      *pbVar7 = 0;
      uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar6 & 0x7fffffff;
      if (*(int *)(&DAT_08365ef0 + (uVar6 * 2 >> 0x11 & 0xf) * 4) != 0) {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    if (*(char *)(param_1 + 0xd) == '\x02') {
      return in_lr;
    }
    iVar4 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x2000,*(undefined4 *)(param_1 + 0x58));
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    iVar4 = sub_0800A104(*(int *)(param_1 + 0x54) + -0x1000,*(undefined4 *)(param_1 + 0x58));
    if (iVar4 == *(int *)(param_1 + 0x58)) {
      return in_lr;
    }
    uVar5 = 0xcc;
LAB_08090154:
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined *)(param_1 + 0xe) = 1;
    return in_lr;
  case 0x15:
    uVar6 = (uint)CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
    if ((uVar6 - 0x7e00 < 2) || (uVar6 == 0x7e05)) goto LAB_08090196;
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (*(char *)(param_1 + 0x13) == '\0') {
        cVar3 = '\x05';
      }
      else {
        cVar3 = *(char *)(param_1 + 0x13) + -1;
      }
LAB_080901be:
      *(char *)(param_1 + 0x13) = cVar3;
      goto LAB_080901c0;
    }
    break;
  case 0x16:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    sub_08017700(param_1,0x7e0c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x17:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0xffffff34;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    goto switchD_0808fe2c_caseD_6;
  }
  sub_080177F4(param_1);
switchD_0808fe2c_caseD_6:
  return in_lr;
}

