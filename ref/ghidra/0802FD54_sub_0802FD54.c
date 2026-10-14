// sub_0802FD54 at 0x0802FD54 (thumb)

undefined4 sub_0802FD54(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082ad128);
    sub_08029778(param_1,7);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined4 *)(param_1 + 0x54) = 0x80;
    uVar3 = 0x80;
    if (0 < *(int *)(param_1 + 0xb8)) {
      uVar3 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0xc3) = 7;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  uVar2 = sub_0802E674(param_1);
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xc2) = 4;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x11) = 0;
    *(undefined *)(param_1 + 0x12) = 1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 200);
      iVar5 = *(int *)(param_1 + 0x4c);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x4c);
      iVar5 = *(int *)(param_1 + 0xc4);
    }
    if (0x4000 < iVar4 - iVar5) {
      *(undefined *)(param_1 + 0x12) = 3;
    }
  }
  return in_lr;
}

