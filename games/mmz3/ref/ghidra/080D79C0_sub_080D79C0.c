// sub_080D79C0 at 0x080D79C0 (thumb)

undefined4 sub_080D79C0(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    sub_08017700(param_1,0x7802);
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x54) + 0x2000;
    *(int *)(param_1 + 0xc0) = *(int *)(*(int *)(param_1 + 0xb4) + 0x58) + 0x4000;
    DAT_030032e1 = DAT_030032e1 | 2;
    uVar2 = 0x40;
    break;
  case 1:
    DAT_030032e1 = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x12) == '\x1c') {
      sub_0800471C(0x9c);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    uVar2 = 0x40;
    break;
  case 3:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0xb4);
    *(int *)(iVar3 + 0x58) = *(int *)(iVar3 + 0x58) + 0x100;
    iVar4 = *(int *)(param_1 + 0xb4);
    iVar3 = *(int *)(iVar4 + 0x54);
    iVar5 = *(int *)(param_1 + 0xbc) - iVar3;
    if (iVar5 < 0x101) {
      if (iVar5 < -0x100) {
        iVar3 = iVar3 + -0x100;
        goto LAB_080d7ab2;
      }
    }
    else {
      iVar3 = iVar3 + 0x100;
LAB_080d7ab2:
      *(int *)(iVar4 + 0x54) = iVar3;
    }
    if (*(char *)(param_1 + 0x12) == ' ') {
      DAT_020302d0 = (int *)(param_1 + 0xbc);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0800471C(0x9d);
    sub_08017700(param_1,0x7803);
    uVar2 = 0x20;
    break;
  case 4:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      DAT_020301b4 = DAT_020301b4 & 0xfffe;
      DAT_020302d0 = (int *)(*(int *)(param_1 + 0xb4) + 0x54);
      *(undefined *)(*(int *)(param_1 + 0xb4) + 0x119) = 0;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_080d79d4_caseD_5;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080d79d4_caseD_5:
  return in_lr;
}

