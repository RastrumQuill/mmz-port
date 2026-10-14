// sub_08078988 at 0x08078988 (thumb)

undefined4 sub_08078988(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b1ba8,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    sub_08076590(param_1);
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x12);
    if (*(char *)(param_1 + 0x12) == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar4 = *(int *)(param_1 + 0x54);
    if (iVar4 == 0) {
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
LAB_08078a82:
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    else {
      iVar5 = iVar4 + 0x10;
      *(int *)(param_1 + 0x54) = iVar5;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar5 = iVar4 + -0x10;
      }
      *(int *)(param_1 + 0x54) = iVar5;
    }
LAB_08078a88:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    break;
  case 4:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar5 = *(int *)(param_1 + 0x54);
    iVar4 = iVar5 + 0x10;
    *(int *)(param_1 + 0x54) = iVar4;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar4 = iVar5 + -0x10;
    }
    *(int *)(param_1 + 0x54) = iVar4;
    if ((iVar4 == 0x300) || (iVar4 == -0x300)) goto LAB_08078a82;
    goto LAB_08078a88;
  case 6:
    *(undefined *)(param_1 + 0x12) = 0x26;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc);
    }
    break;
  default:
    goto switchD_080789a8_caseD_8;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
switchD_080789a8_caseD_8:
  if (1 < *(byte *)(iVar3 + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

