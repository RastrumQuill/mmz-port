// sub_0802AB20 at 0x0802AB20 (thumb)

undefined4 sub_0802AB20(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_08017700(param_1,0x403);
    sVar1 = sub_08032DC4(param_1);
    *(int *)(param_1 + 0x60) = -(int)sVar1;
    iVar3 = *(int *)(param_1 + 0x5c);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    sVar1 = sub_08032C9C(param_1);
    if (iVar3 < sVar1) {
      sVar1 = sub_08032C9C(param_1);
      *(int *)(param_1 + 0x5c) = (int)sVar1;
    }
    break;
  case 1:
    sub_08017700(param_1,0x400);
    sVar1 = sub_08032DEC(param_1);
    *(int *)(param_1 + 0x60) = -(int)sVar1;
    if (*(int *)(param_1 + 0x108) != 0) {
      *(undefined4 *)(param_1 + 0x108) = 0;
      sVar1 = sub_08032C9C(param_1);
      *(int *)(param_1 + 0x5c) = (int)sVar1;
    }
    iVar3 = *(int *)(param_1 + 0x5c);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    sVar1 = sub_08032C9C(param_1);
    if (sVar1 <= iVar3) goto switchD_0802ab34_caseD_5;
    sVar1 = sub_08032C9C(param_1);
    iVar3 = (int)sVar1;
    goto LAB_0802ade8;
  case 2:
    sub_080B331C(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
    puVar4 = (uint *)(param_1 + 0x218);
    if ((*puVar4 & 8) == 0) {
      sub_08017700(param_1,0x501);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        sVar1 = sub_08032C9C(param_1);
        iVar3 = (int)sVar1;
      }
      else {
        sVar1 = sub_08032C9C(param_1);
        iVar3 = -(int)sVar1;
      }
      *(int *)(param_1 + 0x5c) = iVar3;
    }
    else {
      sub_08017700(param_1,0x601);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        if ((*puVar4 & 0x20) != 0) {
          iVar3 = *(int *)(param_1 + 0x54) + -0x1000;
          *(int *)(param_1 + 0x54) = iVar3;
          iVar3 = sub_0800A04C(iVar3,*(undefined4 *)(param_1 + 0x58));
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x700 + iVar3;
        }
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        sVar1 = sub_08032D6C(param_1);
        iVar3 = (int)sVar1;
      }
      else {
        if ((*puVar4 & 0x10) != 0) {
          iVar3 = *(int *)(param_1 + 0x54) + 0x1000;
          *(int *)(param_1 + 0x54) = iVar3;
          iVar3 = sub_08009ED0(iVar3,*(undefined4 *)(param_1 + 0x58));
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x700 + iVar3;
        }
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        sVar1 = sub_08032D6C(param_1);
        iVar3 = -(int)sVar1;
      }
      *(int *)(param_1 + 0x5c) = iVar3;
      if (*(int *)(param_1 + 0xf4) == 0) {
        uVar2 = sub_080B3C5C(param_1);
        *(undefined4 *)(param_1 + 0xf4) = uVar2;
      }
    }
    *(undefined *)(param_1 + 0x111) = 7;
    sVar1 = sub_08032E14(param_1);
    *(int *)(param_1 + 0x60) = -(int)sVar1;
    *(undefined4 *)(param_1 + 0x108) = 0;
    sub_0800471C(0xc);
    goto switchD_0802ab34_caseD_5;
  case 3:
    sVar1 = sub_08032E44(param_1);
    *(int *)(param_1 + 0x60) = -(int)sVar1;
    iVar3 = (int)*(short *)(param_1 + 0x138);
    *(int *)(param_1 + 0x5c) = iVar3;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    sVar1 = sub_08032C9C(param_1);
    if (iVar3 < sVar1) {
      sVar1 = sub_08032C9C(param_1);
      *(int *)(param_1 + 0x5c) = (int)sVar1;
    }
    iVar3 = *(int *)(param_1 + 0x5c);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    sVar1 = sub_08032D6C(param_1);
    if ((sVar1 <= iVar3) && (*(int *)(param_1 + 0xf4) == 0)) {
      uVar2 = sub_080B3C5C(param_1);
      *(undefined4 *)(param_1 + 0xf4) = uVar2;
    }
    break;
  case 4:
    *(undefined *)(param_1 + 0x134) = 0;
    if (*(char *)(param_1 + 0xc2) == '\x02') {
      sVar1 = sub_08032E98(param_1);
    }
    else {
      sVar1 = sub_08032E6C(param_1);
    }
    *(int *)(param_1 + 0x60) = -(int)sVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar1 = sub_08032EC8(param_1);
      iVar3 = -(int)sVar1;
    }
    else {
      sVar1 = sub_08032EC8(param_1);
      iVar3 = (int)sVar1;
    }
LAB_0802ade8:
    *(int *)(param_1 + 0x5c) = iVar3;
  default:
    goto switchD_0802ab34_caseD_5;
  }
  *(undefined *)(param_1 + 0x112) = 4;
switchD_0802ab34_caseD_5:
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0802ADFC(param_1);
  return in_lr;
}

