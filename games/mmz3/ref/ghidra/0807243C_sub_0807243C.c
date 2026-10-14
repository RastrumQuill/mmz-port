// sub_0807243C at 0x0807243C (thumb)

undefined4 sub_0807243C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_08072460:
    sub_08017700(param_1,0x2700);
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08007390(param_1 + 0x74,&DAT_083633d8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 0x18;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08072460;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
  }
  iVar5 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -0xb >> 8);
  *(int *)(param_1 + 0x5c) = iVar5;
  iVar4 = *(int *)(param_1 + 0x60) + (*(int *)(param_1 + 0x60) * -0xb >> 8);
  *(int *)(param_1 + 0x60) = iVar4;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
  sub_080733A0(param_1);
  if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  cVar2 = *(char *)(param_1 + 0x13);
  *(char *)(param_1 + 0x13) = cVar2 + '\x01';
  cVar2 = sub_080FE4D8(cVar2,0x1c);
  if (cVar2 == '\0') {
    sub_08073144(param_1,0);
  }
  sub_080177F4(param_1);
  cVar2 = *(char *)(param_1 + 0xba);
  if (cVar2 == '\0') {
    iVar4 = sub_0807333C(param_1);
  }
  else {
    *(char *)(param_1 + 0xba) = cVar2 + -1;
    iVar4 = 0;
  }
  if (iVar4 == 2) {
    *(char *)(param_1 + 0xd) = (char)iVar4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else if (iVar4 == 1) {
    uVar3 = sub_08073290(param_1);
    *(undefined *)(param_1 + 0xb9) = uVar3;
    *(char *)(param_1 + 0xd) = (char)iVar4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x12) == '\0') goto LAB_08072574;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    return in_lr;
  }
LAB_08072574:
  uVar3 = sub_08073290(param_1);
  *(undefined *)(param_1 + 0xb9) = uVar3;
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

