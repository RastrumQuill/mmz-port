// sub_080554C0 at 0x080554C0 (thumb)

undefined4 sub_080554C0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xa006);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_08854f90 +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_088551e0 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0xa000) * 4)) *
               0x18);
  bVar1 = (byte)DAT_0202e918 & 8;
  if ((DAT_0202e918 & 8) == 0) {
    iVar2 = sub_08059798(param_1);
    if (iVar2 == 0) {
      sub_08059534(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xd) = 4;
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
    }
  }
  return in_lr;
}

