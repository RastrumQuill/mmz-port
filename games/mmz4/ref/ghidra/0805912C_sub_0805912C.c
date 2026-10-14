// sub_0805912C at 0x0805912C (thumb)

undefined4 sub_0805912C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xa008);
    iVar2 = sub_08059768(param_1);
    *(uint *)(param_1 + 0x5c) =
         (uint)*(ushort *)(&DAT_088552a8 + iVar2 * 2) * ((bVar1 >> 4 & 1) * 2 + -1);
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
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if ((iVar2 - *(int *)(param_1 + 0xcc)) - 0x2800U < 0x19001) {
    sub_08059534(param_1);
  }
  return in_lr;
}

