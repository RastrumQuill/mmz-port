// sub_0805C098 at 0x0805C098 (thumb)

undefined4 sub_0805C098(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017528(param_1);
    sub_080176EC(param_1);
    sub_08017700(param_1,0xb501);
    sub_08007390(param_1 + 0x74,&DAT_08361660);
    *(undefined *)(param_1 + 0x24) = 0x40;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc80;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4);
      *(int *)(param_1 + 100) = *(int *)(param_1 + 0xb4) + 0x1000;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc80;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 100) = *(int *)(param_1 + 0xb8) + -0x1000;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1600;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) ||
     (sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 100),iVar3 + -0x3000), sVar2 != 0)) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

