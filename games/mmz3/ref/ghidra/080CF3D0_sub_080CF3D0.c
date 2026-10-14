// sub_080CF3D0 at 0x080CF3D0 (thumb)

undefined4 sub_080CF3D0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x6d0d);
    sub_08007390(param_1 + 0x74,&DAT_0836ce5c);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    uVar4 = 0xffffffc0;
    *(undefined4 *)(param_1 + 100) = 0xffffffc0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0x40;
    }
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080cf47a;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (0x300 < iVar2) {
      *(undefined4 *)(param_1 + 0x5c) = 0x300;
    }
    iVar2 = *(int *)(param_1 + 0x5c);
    iVar3 = -0x300;
  }
  else {
    if (0x400 < iVar2) {
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
    }
    iVar2 = *(int *)(param_1 + 0x5c);
    iVar3 = -0x400;
  }
  if (iVar2 < iVar3) {
    *(int *)(param_1 + 0x5c) = iVar3;
  }
  sub_080177F4(param_1);
  cVar1 = sub_080CEEDC(param_1);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
LAB_080cf47a:
  if (1 < *(byte *)(iVar5 + 0xc)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

