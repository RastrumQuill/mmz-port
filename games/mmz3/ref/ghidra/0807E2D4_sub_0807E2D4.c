// sub_0807E2D4 at 0x0807E2D4 (thumb)

undefined4 sub_0807E2D4(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0xab1b);
    *(undefined *)(param_1 + 0x25) = 0x19;
    sub_08007390(param_1 + 0x74,&DAT_08364608);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      uVar4 = 0xfffff800;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      uVar4 = 0x800;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc60;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0807e2e8_caseD_1:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      if (*(char *)(param_1 + 0xb8) == '\0') {
LAB_0807e76a:
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else {
        *(undefined *)(param_1 + 0xe) = 0x14;
      }
    }
switchD_0807e2e8_caseD_b:
    return in_lr;
  case 1:
    goto switchD_0807e2e8_caseD_1;
  case 2:
    sub_08007390(param_1 + 0x74,&DAT_083645d8);
    *(undefined *)(param_1 + 0x25) = 0x17;
    if ((*(byte *)(*(int *)(param_1 + 0x28) + 10) & 0x10) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + -0x8c00;
      iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x54);
      iVar7 = -0x1000;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + 0x8c00;
      iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x54);
      iVar7 = 0x1000;
    }
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0xa000;
    sub_08017700(param_1,0xac05);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    uVar4 = FUN_080fe2f8((iVar5 + iVar7) - *(int *)(param_1 + 0x54),0x1e);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    iVar5 = FUN_080fe2f8(0x7080 - (*(int *)(*(int *)(param_1 + 0x28) + 0x58) -
                                  *(int *)(param_1 + 0x58)),0x1e);
    *(int *)(param_1 + 0x60) = -iVar5;
    *(undefined *)(param_1 + 0x12) = 0x1d;
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
    if ((*(char *)(param_1 + 0x13) == '\0') &&
       (*(int *)(*(int *)(param_1 + 0x28) + -0x38ffa8) < iVar5)) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08017700(param_1,0xac06);
    }
    sub_080177F4(param_1);
    iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x58);
    if (*(int *)(param_1 + 0x58) <= iVar5) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = iVar5;
    goto LAB_0807e76a;
  case 4:
    sub_08007390(param_1 + 0x74,&DAT_08364578);
    sub_08017700(param_1,0xac07);
    sub_0800471C(0xd3);
    goto LAB_0807e754;
  case 5:
  case 8:
  case 0x17:
    goto switchD_0807e2e8_caseD_5;
  case 6:
    sub_08017700(param_1,0xac09);
    *(undefined *)(param_1 + 0x12) = 0xf;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    bVar2 = *(byte *)(param_1 + 10);
    uVar6 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar6 == 0) {
      bVar2 = bVar2 & 0xef;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    return in_lr;
  case 9:
    sub_08017700(param_1,0xac01);
    uVar3 = 0x1e;
    goto LAB_0807e786;
  case 10:
  case 0x19:
    goto switchD_0807e2e8_caseD_a;
  default:
    goto switchD_0807e2e8_caseD_b;
  case 0x14:
    sub_08007390(param_1 + 0x74,&DAT_083645d8);
    *(undefined *)(param_1 + 0x25) = 0x17;
    bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10);
    if ((bVar2 & 0x10) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(byte *)(param_1 + 0x4c) = bVar2 & 0x10;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + 0x8c00;
      iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x54);
      iVar7 = -0x3000;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + -0x8c00;
      iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x54);
      iVar7 = 0x3000;
    }
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0xa000;
    sub_08017700(param_1,0xac05);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    uVar4 = FUN_080fe2f8((iVar5 + iVar7) - *(int *)(param_1 + 0x54),0x1e);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    iVar5 = FUN_080fe2f8(0x7080 - (*(int *)(*(int *)(param_1 + 0x28) + 0x58) -
                                  *(int *)(param_1 + 0x58)),0x1e);
    *(int *)(param_1 + 0x60) = -iVar5;
    *(undefined *)(param_1 + 0x12) = 0x1d;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x15:
    iVar5 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    if ((*(char *)(param_1 + 0x13) == '\0') &&
       (*(int *)(*(int *)(param_1 + 0x28) + -0x38ffa8) < iVar5)) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08017700(param_1,0xac06);
    }
    sub_080177F4(param_1);
    iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x58);
    if (*(int *)(param_1 + 0x58) <= iVar5) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = iVar5;
    goto LAB_0807e76a;
  case 0x16:
    sub_0800471C(0xd3);
    sub_08007390(param_1 + 0x74,&DAT_08364578);
    sub_08017700(param_1,0xac07);
LAB_0807e754:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0807e2e8_caseD_5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_0807e76a;
  case 0x18:
    sub_08017700(param_1,0xac01);
    uVar3 = 2;
LAB_0807e786:
    *(undefined *)(param_1 + 0x12) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0807e2e8_caseD_a:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    goto switchD_0807e2e8_caseD_b;
  }
}

