// sub_0807817C at 0x0807817C (thumb)

undefined4 sub_0807817C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined uVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b1ae8,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    sub_08076600(param_1);
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x1f) = 0;
    *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x13);
    if (*(char *)(param_1 + 0x13) == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar5 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = iVar5 + -0xbe8;
    }
    else {
      iVar5 = iVar5 + 0xc00;
    }
    cVar2 = sub_080079CC(iVar5,*(undefined4 *)(param_1 + 0x50));
    if (cVar2 != '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    uVar4 = 0x20;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0xe0;
    }
    *(undefined *)(param_1 + 0x1f) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 4:
    uVar4 = 0x40;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0xc0;
    }
    *(undefined *)(param_1 + 0x1f) = uVar4;
    sub_0800561C(param_1 + 0x74,&DAT_082b1b04);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    }
    else {
      uVar3 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar5 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar5 + -0x400;
    cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),iVar5 + -0x1000);
    if (cVar2 != '\0') {
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
    goto switchD_08078194_caseD_6;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
switchD_08078194_caseD_6:
  return in_lr;
}

