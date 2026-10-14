// sub_080452C4 at 0x080452C4 (thumb)

undefined4 sub_080452C4(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_080452d8_caseD_1;
  case 2:
    uVar5 = sub_08099F90(param_1,&DAT_082ae880);
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
      DAT_02022b6e = DAT_02022b6e | 2;
      if (DAT_02022b60 != 0x10) {
        sub_08015698(0x16,param_1 + 0x4c);
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  default:
    goto switchD_080452d8_caseD_4;
  }
  sub_08001EAC(0xbe);
  bVar1 = 0 < *(int *)(param_1 + 0xb8);
  if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
    DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
  }
  sub_08029654(param_1);
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    sub_08029778(param_1,0x1b);
  }
  else {
    sub_08029778(param_1,4);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  iVar4 = sub_08005458(DAT_02022e94);
  if (iVar4 != 0) {
    *(undefined *)(iVar4 + 9) = 0x16;
    *(undefined4 *)(iVar4 + 0x14) = 0x8042e41;
    *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(uint *)(iVar4 + 0x54) = (uint)bVar1 * -0x200 + 0x100;
    *(int *)(iVar4 + 0x20) = param_1;
    *(undefined *)(iVar4 + 0x10) = 1;
    *(byte *)(iVar4 + 0x13) = *(byte *)(param_1 + 10) >> 4 & 1 ^ bVar1;
    *(undefined *)(iVar4 + 0x11) = *(undefined *)(param_1 + 0x11);
  }
  uVar5 = 0x100;
  *(undefined4 *)(param_1 + 0x54) = 0x100;
  if (0 < *(int *)(param_1 + 0xb8)) {
    uVar5 = 0xffffff00;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined *)(param_1 + 0x12) = 0x32;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080452d8_caseD_1:
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  bVar2 = *(byte *)(param_1 + 10) >> 4;
  if (*(int *)(param_1 + 0xb8) < 1) {
    if ((bVar2 & 1) != 0) goto LAB_080453fc;
LAB_08045400:
    iVar4 = 0xf6;
  }
  else {
    if ((bVar2 & 1) == 1) goto LAB_08045400;
LAB_080453fc:
    iVar4 = 0xfa;
  }
  iVar4 = *(int *)(param_1 + 0x54) * iVar4;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar4 >> 8;
  sub_080426A0(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080297C0(param_1);
switchD_080452d8_caseD_4:
  return in_lr;
}

