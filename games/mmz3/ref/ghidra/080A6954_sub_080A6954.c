// sub_080A6954 at 0x080A6954 (thumb)

undefined4 sub_080A6954(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_lr;
  
  if ((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) && (*(byte *)(param_1 + 0xe) < 0x14)) {
    *(undefined *)(param_1 + 0xe) = 0x14;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') goto LAB_080a6cba;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x25) = 0x19;
    sub_08017700(param_1,0xb100);
    if (*(byte *)(param_1 + 0xb6) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    uVar5 = *(byte *)(param_1 + 0xb6) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 1:
  case 5:
    break;
  case 2:
    sub_08017700(param_1,0xb101);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(undefined *)(param_1 + 0x12) = 0xff;
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0xb5) != *(char *)(*(int *)(param_1 + 0x28) + 0xb5)) {
      return in_lr;
    }
    goto LAB_080a6c94;
  case 4:
    sub_08017700(param_1,0xb102);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 6:
    sub_08017700(param_1,0xb10c);
    *(undefined *)(param_1 + 0x25) = 8;
    sub_08007390(param_1 + 0x74,&DAT_08368384);
    iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
    iVar7 = *(int *)(iVar3 + 0x58);
    uVar5 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 8;
    *(int *)(param_1 + 0x54) = *(int *)(&DAT_08368584 + uVar5) + *(int *)(iVar3 + 0x54);
    *(int *)(param_1 + 0x58) = *(int *)(&DAT_08368588 + uVar5) + iVar7;
    piVar6 = (int *)(param_1 + 0xb8);
    *piVar6 = 0x300;
    iVar3 = DAT_0202f5c0;
    iVar7 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar7;
    iVar3 = *(int *)(iVar3 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1000);
    *(int *)(param_1 + 0x60) = iVar3;
    iVar7 = iVar7 >> 2;
    iVar3 = iVar3 >> 2;
    iVar3 = sub_080FE124(iVar7 * iVar7 + iVar3 * iVar3);
    uVar5 = (uint)(iVar3 << 0x10) >> 0xe;
    if (uVar5 != 0) {
      uVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar5);
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      uVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar5);
      *(undefined4 *)(param_1 + 0x60) = uVar4;
    }
    iVar7 = *(int *)(param_1 + 0x60);
    iVar3 = iVar7;
    if (iVar7 < 0) {
      iVar3 = -iVar7;
    }
    if (0x80 < iVar3) {
      if (iVar7 < 1) {
        uVar4 = 0xffffff80;
      }
      else {
        uVar4 = 0x80;
      }
      *(undefined4 *)(param_1 + 0x60) = uVar4;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar4 = 0xffffff23;
      }
      else {
        uVar4 = 0xdd;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      iVar7 = *(int *)(param_1 + 0x60);
    }
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x28) + 10) & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x5c);
      if (0 < iVar3) {
LAB_080a6b78:
        *(int *)(param_1 + 0x5c) = -iVar3;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x5c);
      if (iVar3 < 0) goto LAB_080a6b78;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x5c) * *piVar6 >> 8;
    *(int *)(param_1 + 0x68) = iVar7 * *piVar6 >> 8;
    sub_0800471C(0xce);
    *(undefined *)(param_1 + 0x12) = 0x78;
    goto LAB_080a6c6e;
  case 7:
  case 0xb:
    goto switchD_080a6988_caseD_7;
  case 8:
    sub_08017700(param_1,0xb10d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
    sub_080177F4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
      return in_lr;
    }
    goto LAB_080a6c94;
  case 10:
    sub_08017700(param_1,0xb10f);
    sub_08007390(param_1 + 0x74,&DAT_083683b4);
    if (*(int *)(param_1 + 0x5c) < 1) {
      uVar4 = 0xffffff4b;
    }
    else {
      uVar4 = 0xb5;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar5 & 0x7fffffff;
    if ((uVar5 * 2 >> 0x11 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x60) = 0xffffff4b;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0xb5;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined *)(param_1 + 0x4d) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x5c) * *(int *)(param_1 + 0xb8) >> 8;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x60) * *(int *)(param_1 + 0xb8) >> 8;
LAB_080a6c6e:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a6988_caseD_7:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
    break;
  default:
    goto switchD_080a6988_caseD_c;
  case 0x14:
    sub_08017700(param_1,0xb102);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x15:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_080a6cba:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    goto switchD_080a6988_caseD_c;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_080a6c94:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_080a6988_caseD_c:
  return in_lr;
}

