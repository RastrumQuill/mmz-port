// sub_08037FC0 at 0x08037FC0 (thumb)

undefined4 sub_08037FC0(int param_1)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined4 in_lr;
  short asStack_10 [4];
  
  sub_080C8D70(asStack_10,&DAT_080c924c,6);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (DAT_02022b60 != 0x10) {
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto switchD_08037fe0_caseD_1;
    }
    sub_08038A5C(param_1,0);
    goto LAB_08038134;
  case 1:
switchD_08037fe0_caseD_1:
    if (*(char *)(param_1 + 0x13) == '\0') {
      *(undefined *)(param_1 + 0x13) = 8;
      iVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      iVar5 = sub_080C88E8((int)asStack_10[*(byte *)(param_1 + 0x12)],
                           (iVar5 - *(int *)(param_1 + 0x50)) * 0x100 >> 0x10);
      sub_0807F314(param_1 + 0x4c,0x680,(uint)(iVar5 << 0x10) >> 0x18,1);
      cVar1 = *(char *)(param_1 + 0x12) + '\x01';
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\x03') {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    return in_lr;
  case 2:
    uVar2 = 0x30;
    break;
  case 3:
  case 0x19:
    goto switchD_08037fe0_caseD_3;
  case 4:
    sub_08038A5C(param_1,3);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar5 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    iVar5 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (-1 < iVar5) {
      return in_lr;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
    goto LAB_080381ce;
  case 6:
    sub_08038A5C(param_1,4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
LAB_08038134:
    *(undefined *)(param_1 + 0xe) = 0x14;
    return in_lr;
  default:
    goto switchD_08037fe0_caseD_8;
  case 0x14:
    sub_08038A5C(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x15:
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 1;
    goto joined_r0x08038152;
  case 0x16:
    sub_080014E8(&DAT_084b8014,(DAT_02022ea2 - 0x2f0) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084b8020,(DAT_02022f31 - 6) * 0x20 + 0x200);
    sub_08038A5C(param_1,0xe);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x17:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_080381ce;
  case 0x18:
    sub_08038A5C(param_1,0xf);
    uVar2 = 0x3c;
    break;
  case 0x1a:
    sub_08038A5C(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x1b:
    uVar4 = DAT_02022b6e & 1;
    if ((DAT_02022b6e & 1) == 0) {
      *(char *)(param_1 + 0xd) = (char)uVar4;
      *(ushort *)(param_1 + 0xe) = uVar4;
    }
    goto switchD_08037fe0_caseD_8;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08037fe0_caseD_3:
  bVar3 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar3;
joined_r0x08038152:
  if (bVar3 != 0) {
LAB_080381ce:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_08037fe0_caseD_8:
  return in_lr;
}

