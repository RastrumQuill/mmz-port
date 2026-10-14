// sub_0807F328 at 0x0807F328 (thumb)

/* WARNING: Type propagation algorithm not settling */

undefined4 sub_0807F328(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    switch(*(undefined *)(param_1 + 0xe)) {
    case 0:
      *(undefined *)(param_1 + 0xc0) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_08017700(param_1,0xac08);
      *(undefined *)(param_1 + 0x25) = 0x19;
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    case 1:
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) == '\x04') {
        sub_0800471C(0xd3);
      }
      if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 100) + 0x6000) {
        *(undefined *)(param_1 + 0xc0) = 1;
      }
      iVar5 = *(int *)(param_1 + 100) + 0x4000;
      iVar6 = *(int *)(param_1 + 0x54);
      break;
    case 2:
      *(undefined *)(param_1 + 0xb9) = 1;
      sub_08017700(param_1,0xac0b);
      *(undefined4 *)(param_1 + 0x60) = 0xfffffd80;
      *(undefined4 *)(param_1 + 0x5c) = 0x180;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    case 3:
      sub_080177F4(param_1);
      cVar1 = *(char *)(param_1 + 0x73);
      goto joined_r0x0807f584;
    case 4:
      sub_0800471C(0xd3);
      sub_08017700(param_1,0xac0c);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    case 5:
      iVar5 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar5;
      if (0x700 < iVar5) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sub_080177F4(param_1);
      if (*(int *)(param_1 + 0x58) <= *(int *)(DAT_0202f5c0 + 0x58)) {
        return in_lr;
      }
      *(int *)(param_1 + 0x58) = *(int *)(DAT_0202f5c0 + 0x58);
      goto LAB_0807f90e;
    case 6:
      sub_08017700(param_1,0xac0d);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    case 7:
      sub_080177F4(param_1);
      cVar1 = *(char *)(param_1 + 0x73);
      goto joined_r0x0807f584;
    case 8:
      *(undefined *)(param_1 + 0xb9) = 1;
      sub_08017700(param_1,0xac01);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    case 9:
      sub_080177F4(param_1);
      cVar1 = *(char *)(param_1 + 0xb9);
      goto joined_r0x0807f4e4;
    case 10:
      sub_08017700(param_1,0xac09);
      *(undefined *)(param_1 + 0x12) = 0xf;
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    case 0xb:
      sub_080177F4(param_1);
      if (((*(char *)(param_1 + 0x12) == '\0') ||
          (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')
          ) && (*(char *)(param_1 + 0x13) == '\0')) {
        *(undefined *)(param_1 + 0x13) = 1;
        bVar2 = *(byte *)(param_1 + 10);
        uVar4 = ~(uint)(bVar2 >> 4) & 1;
        if (uVar4 == 0) {
          bVar2 = bVar2 & 0xef;
        }
        else {
          bVar2 = bVar2 | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        *(char *)(param_1 + 0x4c) = (char)uVar4;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
      }
      cVar1 = *(char *)(param_1 + 0x73);
      goto joined_r0x0807f584;
    case 0xc:
      sub_08017700(param_1,0xac02);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    case 0xd:
      sub_080177F4(param_1);
      cVar1 = *(char *)(param_1 + 0x73);
      goto joined_r0x0807f584;
    case 0xe:
      *(undefined4 *)(param_1 + 0x5c) = 0x600;
      *(undefined4 *)(param_1 + 0x60) = 0xfffff900;
      sub_08017700(param_1,0xac03);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    case 0xf:
      iVar5 = *(int *)(param_1 + 0x60) + 0x20;
      *(int *)(param_1 + 0x60) = iVar5;
      if (0x700 < iVar5) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sub_080177F4(param_1);
      iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x58);
      goto LAB_0807f908;
    case 0x10:
      *(undefined *)(param_1 + 0x25) = 0x19;
      sub_08017700(param_1,0xab1b);
      sub_08007390(param_1 + 0x74,&DAT_08364608);
      *(undefined *)(param_1 + 0x12) = 0x20;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      iVar7 = *(int *)(param_1 + 0x28);
      iVar5 = *(int *)(iVar7 + 0x54);
      *(int *)(param_1 + 0x54) = iVar5 + 0xa000;
      iVar5 = *(int *)(iVar7 + 0x54) - (iVar5 + 0x8f00);
      *(int *)(param_1 + 0x5c) = iVar5;
      uVar3 = FUN_080fe2f8(iVar5,*(undefined *)(param_1 + 0x12));
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      iVar6 = *(int *)(iVar7 + 0x58);
      *(int *)(param_1 + 0x58) = iVar6 + -0xa000;
      iVar5 = *(int *)(iVar7 + 0x58);
      goto LAB_0807f98c;
    case 0x11:
      goto switchD_0807f674_caseD_f;
    default:
      goto switchD_0807f674_caseD_10;
    }
    goto LAB_0807f90a;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0xc0) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0807f674_caseD_1:
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xc0) == '\x01') {
LAB_0807f90e:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0807f674_caseD_10:
    return in_lr;
  case 1:
    goto switchD_0807f674_caseD_1;
  case 2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0xac05);
    *(undefined *)(param_1 + 0x25) = 0x17;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(undefined *)(param_1 + 0x12) = 0x28;
    uVar3 = FUN_080fe2f8((*(int *)(param_1 + 100) + 0x8400) - *(int *)(param_1 + 0x54),0x28);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    iVar5 = FUN_080fe2f8(0xc800 - (*(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58)),0x28);
    *(int *)(param_1 + 0x60) = -iVar5;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar5 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    if ((*(char *)(param_1 + 0x13) == '\0') && (*(int *)(DAT_0202f5c0 + 0x58) + -0x6000 < iVar5)) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08017700(param_1,0xac06);
    }
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(DAT_0202f5c0 + 0x58);
    goto LAB_0807f90e;
  case 4:
    *(undefined *)(param_1 + 0xb9) = 1;
    sub_08017700(param_1,0xac07);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x73);
joined_r0x0807f584:
    if (cVar1 != '\x03') {
      return in_lr;
    }
    goto LAB_0807f90e;
  case 6:
    sub_0800471C(0xd3);
    sub_08017700(param_1,0xac09);
    *(undefined *)(param_1 + 0x12) = 0xf;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (((*(char *)(param_1 + 0x12) == '\0') ||
        (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0'))
       && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      bVar2 = *(byte *)(param_1 + 10);
      uVar4 = ~(uint)(bVar2 >> 4) & 1;
      if (uVar4 == 0) {
        bVar2 = bVar2 & 0xef;
      }
      else {
        bVar2 = bVar2 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    }
    cVar1 = *(char *)(param_1 + 0x73);
    goto joined_r0x0807f584;
  case 8:
    sub_08017700(param_1,0xac01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0xb9);
joined_r0x0807f4e4:
    if (cVar1 != '\x02') {
      return in_lr;
    }
    goto LAB_0807f90e;
  case 10:
    sub_08017700(param_1,0xac02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x73);
    goto joined_r0x0807f584;
  case 0xc:
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffa00;
    *(undefined4 *)(param_1 + 0x60) = 0xfffff900;
    sub_08017700(param_1,0xac03);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xd:
    iVar5 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x58);
LAB_0807f908:
    iVar5 = iVar5 + -0x7800;
    iVar6 = *(int *)(param_1 + 0x58);
LAB_0807f90a:
    if (iVar5 <= iVar6) {
      return in_lr;
    }
    goto LAB_0807f90e;
  case 0xe:
    *(undefined *)(param_1 + 0x25) = 0x19;
    sub_08017700(param_1,0xab1b);
    sub_08007390(param_1 + 0x74,&DAT_08364608);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    iVar7 = *(int *)(param_1 + 0x28);
    iVar5 = *(int *)(iVar7 + 0x54);
    *(int *)(param_1 + 0x54) = iVar5 + -0xa000;
    iVar5 = *(int *)(iVar7 + 0x54) - (iVar5 + -0x8f00);
    *(int *)(param_1 + 0x5c) = iVar5;
    uVar3 = FUN_080fe2f8(iVar5,*(undefined *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    iVar6 = *(int *)(iVar7 + 0x58);
    *(int *)(param_1 + 0x58) = iVar6 + -0xa000;
    iVar5 = *(int *)(iVar7 + 0x58);
LAB_0807f98c:
    iVar5 = iVar5 - (iVar6 + -0x7500);
    *(int *)(param_1 + 0x60) = iVar5;
    uVar3 = FUN_080fe2f8(iVar5,*(undefined *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xf:
switchD_0807f674_caseD_f:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      *(undefined *)(param_1 + 0xb9) = 3;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  default:
    goto switchD_0807f674_caseD_10;
  }
}

