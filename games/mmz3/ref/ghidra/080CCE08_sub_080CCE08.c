// sub_080CCE08 at 0x080CCE08 (thumb)

undefined4 sub_080CCE08(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836c88c + (uint)*(byte *)(param_1 + 0x10) * 8));
    sub_080177F4(param_1);
    sub_08007390(param_1 + 0x74,&DAT_0836c7fc);
    goto LAB_080ccfb6;
  case 1:
    if (*(char *)(param_1 + 0xf) == '\0') {
      uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
      if (uVar4 < 0x3001) {
        *(undefined *)(param_1 + 0x1f) = 0xff;
        uVar3 = 1;
LAB_080ccea0:
        *(undefined *)(param_1 + 0xf) = uVar3;
      }
    }
    else {
      uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
      if (0x3000 < uVar4) {
        uVar3 = 0;
        goto LAB_080ccea0;
      }
    }
    sub_080177F4(param_1);
    if ((DAT_020301a8 & 2) != 0) {
      sub_08007390(param_1 + 0x74,&DAT_0836c85c);
      *(undefined *)(param_1 + 0xe) = 5;
      return in_lr;
    }
    if ((DAT_0202f5d8 == '\0') && ((DAT_020301b4 & 1) == 0)) {
      return in_lr;
    }
    if (((0x4000 < (*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x2000U) ||
        (0x4000 < (*(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x2000U)) ||
       ((*(uint *)(param_1 + 0x8c) & 0x40000000) == 0)) {
      *(undefined *)(param_1 + 0xe) = 4;
      return in_lr;
    }
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      sub_0800471C(0x111);
    }
    else {
      sub_0800471C(0x148);
    }
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836c88e + (uint)*(byte *)(param_1 + 0x10) * 8));
    goto LAB_080ccfb6;
  case 2:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x40000000) == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836c890 + (uint)*(byte *)(param_1 + 0x10) * 8));
    DAT_020302f4 = 2;
LAB_080ccfb6:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 3:
    sub_080177F4(param_1);
    if (DAT_020302f4 == 0) {
      DAT_0202f5d8 = '\0';
      DAT_020302f4 = 1;
      if (*(char *)(param_1 + 0x10) == '\x02') {
        piVar5 = (int *)sub_0801F89C(param_1 + 0x54);
      }
      else {
        piVar5 = (int *)sub_08019EB8(param_1 + 0x54);
      }
      ppiVar7 = (int **)(param_1 + 0xb8);
      *ppiVar7 = piVar5;
      iVar2 = DAT_0202f5c0;
      if (*ppiVar7 != (int *)0x0) {
        *(int *)(DAT_0202f5c0 + 0x54) = **ppiVar7;
        *(int *)(iVar2 + 0x58) = (*ppiVar7)[1];
        iVar6 = sub_080FE390(**ppiVar7 >> 8,0xf0);
        if (iVar6 < 0x78) {
          *(undefined *)(iVar2 + 0x4c) = 1;
          *(byte *)(DAT_0202f5c0 + 0x4a) = *(byte *)(DAT_0202f5c0 + 0x4a) | 0x10;
          *(byte *)(DAT_0202f5c0 + 10) = *(byte *)(DAT_0202f5c0 + 10) | 0x10;
        }
        else {
          *(undefined *)(iVar2 + 0x4c) = 0;
          *(byte *)(DAT_0202f5c0 + 0x4a) = *(byte *)(DAT_0202f5c0 + 0x4a) & 0xef;
          *(byte *)(DAT_0202f5c0 + 10) = *(byte *)(DAT_0202f5c0 + 10) & 0xef;
        }
        sub_08025BDC(DAT_0202f5c0);
        DAT_020301b4 = DAT_020301b4 & 0xfffe;
        DAT_020302a1 = 8;
        DAT_020302aa = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    break;
  case 4:
    if ((DAT_0202f5d8 == '\0') && (bVar1 = (byte)DAT_020301b4 & 1, (DAT_020301b4 & 1) == 0)) {
      if (((*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x2000U < 0x4001) &&
         ((*(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x2000U < 0x4001)) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(byte *)(param_1 + 0xf) = bVar1;
        *(byte *)(param_1 + 0xe) = bVar1;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    break;
  case 5:
    bVar1 = (byte)DAT_020301a8;
    if ((DAT_020301a8 & 2) == 0) {
      sub_08007390(param_1 + 0x74,&DAT_0836c7fc);
      *(byte *)(param_1 + 0xe) = bVar1 & 2;
    }
  }
  return in_lr;
}

