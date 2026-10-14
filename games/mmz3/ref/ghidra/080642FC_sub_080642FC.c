// sub_080642FC at 0x080642FC (thumb)

undefined4 sub_080642FC(int param_1)

{
  char cVar1;
  undefined uVar2;
  short sVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x1404);
    sub_08007390(param_1 + 0x74,&DAT_083622f0);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x80;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080643ca;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) * 3 >> 2;
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    bVar5 = *(byte *)(param_1 + 10) & 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 1;
    }
    else {
      bVar5 = 0;
      uVar2 = 2;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(byte *)(param_1 + 0xe) = bVar5;
  }
LAB_080643ca:
  sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x40);
  if (sVar3 != 0) {
    uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  return in_lr;
}

