// sub_080A3368 at 0x080A3368 (thumb)

undefined4 sub_080A3368(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_lr;
  
  if ((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) && (*(byte *)(param_1 + 0xe) < 0xc)) {
    *(undefined *)(param_1 + 0xe) = 0xc;
  }
  if ((*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\n') && (*(byte *)(param_1 + 0xe) < 0xc)) {
    *(undefined *)(param_1 + 0xe) = 0xc;
  }
  if ((*(char *)(*(int *)(param_1 + 0x28) + 0xd) != '\b') && (*(byte *)(param_1 + 0xe) < 0xc)) {
    *(undefined *)(param_1 + 0xe) = 0xc;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    cVar1 = *(char *)(param_1 + 0x11);
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0x12) = 0x28;
      uVar3 = FUN_080fe2f8(0xffffce00,0x28);
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      iVar4 = FUN_080fe2f8(0x7080,0x28);
      *(int *)(param_1 + 0x60) = -iVar4;
      *(undefined *)(param_1 + 0x12) = 0x27;
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (cVar1 == '\x01') {
      *(undefined *)(param_1 + 0x12) = 0x28;
      uVar3 = FUN_080fe2f8(0x3200,0x28);
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      iVar4 = FUN_080fe2f8(0x7080,0x28);
      *(int *)(param_1 + 0x60) = -iVar4;
      *(undefined *)(param_1 + 0x12) = 0x27;
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      if (cVar1 == '\x02') {
        *(undefined4 *)(param_1 + 0x60) = 0;
        uVar3 = 0xfffffe00;
      }
      else {
        if (cVar1 != '\x03') goto LAB_080a346e;
        *(undefined4 *)(param_1 + 0x60) = 0;
        uVar3 = 0x200;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      cVar1 = '\n';
    }
    *(char *)(param_1 + 0xe) = cVar1;
LAB_080a346e:
    sub_08017700(param_1,0xae00);
    sub_080177F4(param_1);
    return in_lr;
  case 1:
    iVar4 = *(int *)(param_1 + 0x60) + 0x24;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    sub_080177F4(param_1);
    iVar4 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0xc00);
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 0x5c) < 0) {
        iVar4 = sub_08009F80(*(int *)(param_1 + 0x54) + -0xc00,*(int *)(param_1 + 0x58) + -0xc00);
      }
      else {
        iVar4 = sub_08009E14(*(int *)(param_1 + 0x54) + 0xc00,*(int *)(param_1 + 0x58) + -0xc00);
      }
      if (iVar4 == 0) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined *)(param_1 + 0xe) = 3;
      return in_lr;
    }
    if (*(int *)(param_1 + 0x5c) < 1) {
      uVar3 = 0xfffffe00;
    }
    else {
      uVar3 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    goto LAB_080a362a;
  case 2:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar4 = sub_08009F80(*(int *)(param_1 + 0x54) + -0xc00,*(int *)(param_1 + 0x58) + -0xc00);
    }
    else {
LAB_080a3614:
      iVar4 = sub_08009E14(*(int *)(param_1 + 0x54) + 0xc00,*(int *)(param_1 + 0x58) + -0xc00);
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 100) = 0x100;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080177F4(param_1);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + (*(int *)(param_1 + 100) * -0x20 >> 8);
    iVar4 = *(int *)(param_1 + 0x60) + 0x24;
    *(int *)(param_1 + 0x60) = iVar4;
    iVar4 = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x58) = iVar4;
    iVar4 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar4 + 0xc00);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    }
    *(short *)(param_1 + 0x50) = (short)*(undefined4 *)(param_1 + 100);
    *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 100);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    bVar5 = *(byte *)(param_1 + 0x12);
    if ((bVar5 & 1) == 0) {
LAB_080a36ae:
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
LAB_080a36b4:
    *(byte *)(param_1 + 10) = bVar2;
    if (bVar5 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  default:
    goto switchD_080a33b2_caseD_5;
  case 10:
    iVar4 = *(int *)(param_1 + 0x60) + 0x24;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    sub_080177F4(param_1);
    iVar4 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0xc00);
    break;
  case 0xb:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    sub_080177F4(param_1);
    if (-1 < *(int *)(param_1 + 0x5c)) goto LAB_080a3614;
    iVar4 = sub_08009F80(*(int *)(param_1 + 0x54) + -0xc00,*(int *)(param_1 + 0x58) + -0xc00);
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 100) = 0x100;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xd:
    sub_080177F4(param_1);
    iVar4 = *(int *)(param_1 + 100) + (*(int *)(param_1 + 100) * -0x20 >> 8);
    *(int *)(param_1 + 100) = iVar4;
    *(short *)(param_1 + 0x50) = (short)iVar4;
    *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 100);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    bVar5 = *(byte *)(param_1 + 0x12);
    if ((bVar5 & 1) != 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080a36b4;
    }
    goto LAB_080a36ae;
  }
  if (iVar4 != 0) {
LAB_080a362a:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_080a33b2_caseD_5:
  return in_lr;
}

