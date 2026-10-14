// sub_08049DE4 at 0x08049DE4 (thumb)

undefined4 sub_08049DE4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08007390(param_1 + 0x74,&DAT_0835f07c);
        sub_08017700(param_1,0xa709);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835f10c);
    *(undefined4 *)(param_1 + 0x5c) = 0xffffd000;
    uVar2 = sub_080FE124(0x666);
    iVar3 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0x5c),uVar2);
    *(int *)(param_1 + 0x5c) = iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(int *)(param_1 + 0x5c) = -iVar3;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08017700(param_1,0xa70b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x60) + 0x19;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  if (*(int *)(param_1 + 0xb8) < iVar3) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

