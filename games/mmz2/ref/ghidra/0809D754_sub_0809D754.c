// sub_0809D754 at 0x0809D754 (thumb)

undefined4 sub_0809D754(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x5c) == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(iVar5 + 0x54);
      iVar4 = -0x1700;
    }
    else {
      iVar2 = *(int *)(iVar5 + 0x54);
      iVar4 = 0x1600;
    }
    *(int *)(param_1 + 0x54) = iVar2 + iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + 0x1200;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
  case 4:
    goto switchD_0809d792_caseD_0;
  case 1:
    sub_080127E4(param_1,0x1d0a);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 2:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    goto LAB_0809d802;
  case 3:
    sub_080127E4(param_1,0x1d0c);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0809d792_caseD_0:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0809d802:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_0809d792_caseD_7:
    return in_lr;
  case 5:
    sub_080127E4(param_1,0x1d0d);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0xfffffc00;
    }
    else {
      uVar3 = 0x400;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0xff;
    sub_08006E08(param_1 + 0x74,&DAT_08343ad0);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 6:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
    }
  default:
    goto switchD_0809d792_caseD_7;
  }
}

