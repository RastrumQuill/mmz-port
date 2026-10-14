// sub_0806C6A4 at 0x0806C6A4 (thumb)

undefined4 sub_0806C6A4(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08006E08(param_1 + 0x74,&DAT_0833e53c);
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xb4) = 1;
    sub_080127E4(param_1,0xb03);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar3 = *(int *)(param_1 + 0x2c);
    sub_080128D4(param_1);
    if (*(char *)(iVar3 + 0xb5) == '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 2:
    sub_080128D4(param_1);
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (bVar2 < 3) {
      return in_lr;
    }
    sub_080127E4(param_1,0xb00);
    *(undefined *)(param_1 + 0x12) = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 3:
    sub_080128D4(param_1);
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (bVar2 < 3) {
      return in_lr;
    }
    sub_080127E4(param_1,0xb01);
    *(undefined *)(param_1 + 0x12) = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 4:
    sub_080128D4(param_1);
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (bVar2 < 0xf) {
      return in_lr;
    }
    sub_080127E4(param_1,0xb02);
    *(undefined *)(param_1 + 0x12) = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 5:
    sub_080128D4(param_1);
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (bVar2 < 3) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 2;
    cVar1 = '\0';
    break;
  default:
    goto switchD_0806c6b8_caseD_6;
  }
  *(char *)(param_1 + 0xe) = cVar1;
switchD_0806c6b8_caseD_6:
  return in_lr;
}

