// sub_080451AC at 0x080451AC (thumb)

undefined4 sub_080451AC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08029654(param_1);
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    bVar1 = *(byte *)(param_1 + 0x11);
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 2) == 0) {
        sub_08029778(param_1,0x1a);
      }
      else {
        sub_08029778(param_1,0x19);
      }
    }
    else if ((bVar1 & 2) == 0) {
      sub_08029778(param_1,0x18);
    }
    else {
      sub_08029778(param_1,3);
    }
    *(undefined *)(param_1 + 0x12) = 0x50;
    sub_080297C0(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080451c0_caseD_1:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
LAB_080452b0:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_080451c0_caseD_4:
    return in_lr;
  case 1:
    goto switchD_080451c0_caseD_1;
  case 2:
    uVar3 = sub_08099F90(param_1,&DAT_082ae878);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (*(byte *)(*(int *)(param_1 + 0x24) + 0xc) < 2) {
      return in_lr;
    }
    DAT_02022b6e = DAT_02022b6e | 2;
    if (DAT_02022b60 != 0x10) {
      sub_08015698(0x16,param_1 + 0x4c);
    }
    goto LAB_080452b0;
  default:
    goto switchD_080451c0_caseD_4;
  }
}

