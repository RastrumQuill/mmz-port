// sub_08053D48 at 0x08053D48 (thumb)

undefined4 sub_08053D48(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 in_lr;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    iVar7 = *(int *)(param_1 + 0xd8);
    iVar6 = *(int *)(param_1 + 0x54);
    if (iVar7 < iVar6) {
      if (iVar7 + (*(int *)(param_1 + 0xe0) >> 1) < iVar6) {
        piVar3 = (int *)(param_1 + 0xdc);
LAB_08053e04:
        iVar7 = *piVar3;
      }
    }
    else if (iVar6 < iVar7 - (*(int *)(param_1 + 0xe0) >> 1)) {
      piVar3 = (int *)(param_1 + 0xd4);
      goto LAB_08053e04;
    }
    *(undefined *)(param_1 + 0x12) = 0x18;
    uVar5 = FUN_080fe2f8(iVar7 - iVar6,0x18);
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    iVar7 = FUN_080fe2f8(0x8300,0x18);
    *(int *)(param_1 + 0x60) = -iVar7;
    *(undefined *)(param_1 + 0x12) = 0x17;
    sub_08017700(param_1,0xb015);
    break;
  case 1:
  case 5:
  case 9:
  case 0xb:
  case 0x11:
  case 0x13:
  case 0x17:
  case 0x19:
    goto switchD_08053d5e_caseD_1;
  case 2:
    *(undefined *)(param_1 + 200) = 1;
    sub_0800471C(0xca);
    sub_08017700(param_1,0xb016);
    sub_08007390(param_1 + 0x74,&DAT_083601b8);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar7 = *(int *)(param_1 + 0x60) + 0x48;
    *(int *)(param_1 + 0x60) = iVar7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
    if ((*(char *)(param_1 + 0x13) == '\0') && (0 < iVar7)) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08017700(param_1,0xb017);
    }
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
joined_r0x08054242:
      if (cVar1 != '\0') {
        return in_lr;
      }
    }
    goto LAB_080542b8;
  case 4:
    iVar6 = *(int *)(param_1 + 0xd8);
    iVar7 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined *)(param_1 + 0x12) = 0x28;
    uVar5 = FUN_080fe2f8(iVar6 - *(int *)(param_1 + 0x54),0x28);
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    iVar7 = FUN_080fe2f8(0xe100 - (iVar7 - *(int *)(param_1 + 0x58)),0x28);
    *(int *)(param_1 + 0x60) = -iVar7;
    *(undefined *)(param_1 + 0x12) = 0x27;
    sub_080175BC(param_1);
    sub_080176EC(param_1);
    sub_08017700(param_1,0xb018);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xa4;
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    break;
  case 6:
    if (*(int *)(param_1 + 0x5c) < 1) {
      if (*(int *)(param_1 + 0x5c) < 0) {
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      }
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    sub_0800471C(0xca);
    sub_08017700(param_1,0xb019);
    sub_08007390(param_1 + 0x74,&DAT_083601e8);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x2800;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    iVar7 = *(int *)(param_1 + 0x60) + 0x48;
    *(int *)(param_1 + 0x60) = iVar7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
    puVar8 = (undefined *)(param_1 + 0x70);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar8) == -0x4fe7) {
        *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        if (uVar4 == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        iVar7 = 0xff;
        uVar4 = *(int *)(param_1 + 100) >> 4 & 0xff;
        if (uVar4 < 0x80) {
          iVar7 = 0xfe;
        }
        *(uint *)(param_1 + 100) = iVar7 - uVar4;
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) << 4;
        sub_08017700(param_1,0xb01f);
      }
      else {
        *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        if (uVar4 == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        iVar7 = 0xff;
        uVar4 = *(int *)(param_1 + 100) >> 4 & 0xff;
        if (uVar4 < 0x80) {
          iVar7 = 0xfe;
        }
        *(uint *)(param_1 + 100) = iVar7 - uVar4;
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) << 4;
        sub_08017700(param_1,0xb019);
      }
    }
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x5c) < 1) {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar8) != -0x4fe7) goto LAB_080540e0;
      iVar7 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x68);
    }
    else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar8) == -0x4fe7) {
      iVar7 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x68);
    }
    else {
LAB_080540e0:
      iVar7 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x68);
    }
    *(int *)(param_1 + 100) = iVar7;
    *(char *)(param_1 + 0x24) = (char)(*(int *)(param_1 + 100) >> 4);
    if (*(char *)(param_1 + 0x12) != '\0') {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      goto joined_r0x08054242;
    }
    goto LAB_080542b8;
  case 8:
    *(undefined *)(param_1 + 200) = 0;
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    sub_08017700(param_1,0xb01a);
    sub_08007390(param_1 + 0x74,&DAT_083601b8);
    uVar5 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x3c00);
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    break;
  case 10:
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    uVar5 = 0xb01b;
    goto LAB_08054292;
  case 0xc:
    *(undefined *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xd:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      goto joined_r0x08054242;
    }
    goto LAB_080542b8;
  case 0xe:
    sub_08017700(param_1,0xb00a);
    sub_08007390(param_1 + 0x74,&DAT_083601b8);
    *(undefined *)(param_1 + 0x12) = 8;
    sub_0800471C(0xd0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xf:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      goto joined_r0x08054242;
    }
    goto LAB_080542b8;
  case 0x10:
    sub_08017700(param_1,0xb00b);
    sub_08007390(param_1 + 0x74,&DAT_083601b8);
    local_24 = *(undefined4 *)(param_1 + 0x54);
    local_20 = *(int *)(param_1 + 0x58) + -0x4200;
    iVar7 = 0;
    do {
      sub_080A5BAC(param_1,&local_24,iVar7);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    break;
  case 0x12:
  case 0x18:
    uVar5 = 0xb00c;
LAB_08054292:
    sub_08017700(param_1,uVar5);
    sub_08007390(param_1 + 0x74,&DAT_083601b8);
    break;
  case 0x14:
    sub_08017700(param_1,0xb002);
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x15:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      goto joined_r0x08054242;
    }
    goto LAB_080542b8;
  case 0x16:
    sub_08017700(param_1,0xb00b);
    sub_08007390(param_1 + 0x74,&DAT_083601b8);
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x4200;
    iVar7 = 0;
    do {
      sub_080A5C14(param_1,&local_1c,iVar7);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    break;
  case 0x1a:
    sub_08017700(param_1,0xb002);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x1b:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08053d5e_caseD_1c;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08053d5e_caseD_1:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_080542b8:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_08053d5e_caseD_1c:
  return in_lr;
}

