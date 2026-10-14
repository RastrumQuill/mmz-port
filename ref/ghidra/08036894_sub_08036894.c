// sub_08036894 at 0x08036894 (thumb)

undefined4 sub_08036894(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xc);
    *(undefined4 *)(param_1 + 0x58) = 0x20;
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    pcVar4 = (char *)(param_1 + 200);
    sub_08035564(param_1,*pcVar4);
    *(char *)(param_1 + 0x44) = *pcVar4;
    if (*pcVar4 == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x2000;
    *(undefined4 *)(param_1 + 0x24) = 0;
    sub_08001EAC(0xbe);
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (*(byte *)(*(int *)(param_1 + 0x24) + 0xc) < 2) {
      return in_lr;
    }
    DAT_02022b6e = DAT_02022b6e | 2;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x54);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    local_14 = 0xc00;
    local_10 = 0x800;
    uVar3 = sub_08099F90(param_1,&local_14);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
  }
  else {
    if (bVar1 != 2) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08015698(0x13,param_1 + 0x4c);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

