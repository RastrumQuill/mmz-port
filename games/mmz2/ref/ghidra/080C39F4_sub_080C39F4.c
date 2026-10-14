// sub_080C39F4 at 0x080C39F4 (thumb)

undefined4 sub_080C39F4(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0x4500);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar1 & 1) != 0) {
      *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar1 & 0xfe;
      sub_080127E4(param_1,0x4501);
      *(undefined *)(param_1 + 0x12) = 0x1e;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar1 & 2) != 0) {
      *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar1 & 0xfd;
      sub_080127E4(param_1,0x4501);
      *(undefined *)(param_1 + 0x12) = 10;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x02';
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0x4503);
    cVar2 = '\x05';
    break;
  case 2:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0x4500);
    cVar2 = *(char *)(param_1 + 0xd) + -1;
    break;
  case 3:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0x4502);
    *(undefined *)(param_1 + 0x12) = 0x14;
    goto LAB_080c3b40;
  case 4:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0x4501);
    *(undefined *)(param_1 + 0x12) = 10;
    cVar2 = '\x02';
    break;
  case 5:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0xc0;
    uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar3 < 0x1000) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
LAB_080c3b40:
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  default:
    goto switchD_080c3a08_caseD_6;
  }
  *(char *)(param_1 + 0xd) = cVar2;
switchD_080c3a08_caseD_6:
  return in_lr;
}

