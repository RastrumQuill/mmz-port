// sub_080A80D4 at 0x080A80D4 (thumb)

undefined4 sub_080A80D4(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar7 + 0xc)) {
    sub_080B919C(param_1 + 0x54,2);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_080a8134_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == '\0') {
      *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfe;
      uVar4 = 1;
      goto LAB_080a8338;
    }
    goto LAB_080a833a;
  case 4:
    sub_08006E08(param_1 + 0x74,&DAT_0834510c);
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if ((*(uint *)(iVar7 + 0xb4) & 0x40) != 0) {
      *(undefined *)(param_1 + 0xd) = 0xf;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_080a8134_caseD_6;
  }
  *(undefined *)(param_1 + 0x22) = 0;
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfe | 0x10;
  sub_08006E08(param_1 + 0x74,&DAT_0834513c);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  sub_080127E4(param_1,0x6900);
  *(undefined4 *)(param_1 + 0x5c) = 0xfffffb00;
  pbVar5 = (byte *)(param_1 + 0xb5);
  *(uint *)(param_1 + 0x5c) = (uint)*pbVar5 * 0xa00 + -0x500;
  bVar1 = *pbVar5;
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  if (*pbVar5 == 0) {
    iVar6 = DAT_0202ed50 + 0x77ff;
  }
  else {
    iVar6 = DAT_0202ed50 + -0x7800;
  }
  *(int *)(param_1 + 0x54) = iVar6;
  iVar6 = *(int *)(iVar7 + 0xc4) + -0x2200;
  *(int *)(param_1 + 0x58) = iVar6;
  *(uint *)(param_1 + 0x58) = iVar6 + (uint)*(byte *)(param_1 + 0xb5) * 0x1200;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a8134_caseD_1:
  iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar6;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    if ((((*(int *)(DAT_0202e130 + 0x58) == *(int *)(iVar7 + 0xc4)) &&
         (iVar6 < *(int *)(DAT_0202e130 + 0x54) + 0x3000)) &&
        (*(int *)(DAT_0202e130 + 0x54) < iVar6)) && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 1;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(int *)(param_1 + 0x54) < *(int *)(iVar7 + 0xc0) + -0x11000) goto LAB_080a8308;
  }
  else {
    if (((*(int *)(DAT_0202e130 + 0x58) == *(int *)(iVar7 + 0xc4)) &&
        (*(int *)(DAT_0202e130 + 0x54) + -0x3000 < iVar6)) &&
       ((iVar6 < *(int *)(DAT_0202e130 + 0x54) && (*(char *)(param_1 + 0x13) == '\0')))) {
      *(undefined *)(param_1 + 0x13) = 1;
      *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 1;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(int *)(iVar7 + 0xc0) + 0x11000 < *(int *)(param_1 + 0x54)) {
LAB_080a8308:
      uVar4 = 4;
LAB_080a8338:
      *(undefined *)(param_1 + 0xe) = uVar4;
    }
  }
LAB_080a833a:
  sub_080128D4(param_1);
switchD_080a8134_caseD_6:
  return in_lr;
}

