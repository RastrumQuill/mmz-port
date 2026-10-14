// sub_08074B20 at 0x08074B20 (thumb)

undefined4 sub_08074B20(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x13) = 0;
        sub_08017700(param_1,0x2808);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x13) + '\x01';
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 == '\b') {
        sub_08007390(param_1 + 0x74,&DAT_083636f4);
      }
      sub_08073C38(param_1,*(undefined4 *)(param_1 + 0x5c));
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      sub_08073C80(param_1,*(undefined4 *)(param_1 + 0x60));
      if (0 < *(int *)(param_1 + 0x60)) {
        *(undefined *)(param_1 + 0xd) = 8;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
    uVar4 = 0xfffffe00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    iVar3 = sub_080FE124(0x100);
    *(uint *)(param_1 + 0x60) = -((uint)(iVar3 << 0x10) >> 10);
    sub_08017700(param_1,0x2807);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08073C38(param_1,*(undefined4 *)(param_1 + 0x5c));
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  sub_08073C80(param_1,*(undefined4 *)(param_1 + 0x60));
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

