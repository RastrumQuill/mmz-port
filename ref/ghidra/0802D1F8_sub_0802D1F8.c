// sub_0802D1F8 at 0x0802D1F8 (thumb)

undefined4 sub_0802D1F8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08001EAC(0xbe);
    uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
    iVar2 = sub_08005458(DAT_02022e94);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 9) = 3;
      *(undefined4 *)(iVar2 + 0x14) = 0x802b75d;
      *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
      *(uint *)(iVar2 + 0x54) = uVar4 * -0x100 + 0x80;
      *(int *)(iVar2 + 0x20) = param_1;
      *(undefined *)(iVar2 + 0x10) = 1;
    }
    sub_08029778(param_1,0x16);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    *(uint *)(param_1 + 0x54) = (uVar4 ^ 1) * -0x100 + 0x80;
    *(undefined *)(param_1 + 0x12) = 0x32;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    iVar2 = *(int *)(param_1 + 0x54) * 0xf6;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x54) = iVar2 >> 8;
    sub_0802B670(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080297C0(param_1);
    break;
  case 2:
    uVar3 = sub_08099F90(param_1,&DAT_082acfb0);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_0802B670(param_1);
    if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
      DAT_02022b6e = DAT_02022b6e | 2;
      sub_08015698(10,param_1 + 0x4c);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  return in_lr;
}

