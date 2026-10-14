// sub_08048690 at 0x08048690 (thumb)

undefined4 sub_08048690(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08046ADC(param_1,*(byte *)(param_1 + 10) >> 4 & 1);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xffffffc0;
      *(undefined4 *)(param_1 + 0x58) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0x40;
      *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    }
    sub_08001EAC(0xbe);
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (*(byte *)(*(int *)(param_1 + 0x24) + 0xc) < 2) {
      return in_lr;
    }
    DAT_02022b6e = DAT_02022b6e | 2;
    sub_08015698(0x18,param_1 + 0x4c);
    *(undefined *)(param_1 + 0x12) = 0x18;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58);
    cVar2 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == ' ') {
      local_14 = 0x1800;
      local_10 = 0xfffff000;
      uVar3 = sub_08099F90(param_1,&local_14);
      *(undefined4 *)(param_1 + 0x24) = uVar3;
    }
    if (*(byte *)(param_1 + 0x12) < 0x40) {
      return in_lr;
    }
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
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

