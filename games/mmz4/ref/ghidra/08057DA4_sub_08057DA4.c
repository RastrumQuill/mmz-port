// sub_08057DA4 at 0x08057DA4 (thumb)

undefined4 sub_08057DA4(int param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  undefined auStack_44 [4];
  undefined auStack_40 [4];
  undefined auStack_3c [4];
  undefined auStack_38 [4];
  undefined *apuStack_34 [4];
  undefined *local_24;
  undefined *local_20;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xa006);
    *(undefined *)(param_1 + 0x12) = 4;
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
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    if (((DAT_0202cac0 & 0x10) == 0) || (bVar3 = DAT_0202e8b4 & 4, (DAT_0202e8b4 & 4) != 0)) {
      bVar3 = 0;
      *(undefined *)(param_1 + 0xd) = 0xb;
    }
    else {
      sub_08128B5C(auStack_44,&DAT_08128f44,2);
      sub_08128B5C(auStack_40,&DAT_08128f46,2);
      sub_08128B5C(auStack_3c,&DAT_08128f48,2);
      sub_08128B5C(auStack_38,&DAT_08128f4a,2);
      apuStack_34[3] = auStack_40;
      local_24 = auStack_3c;
      local_20 = auStack_38;
      sub_08128B5C(apuStack_34,apuStack_34 + 3,0xc);
      iVar2 = sub_08059768(param_1);
      iVar2 = sub_08059B54(apuStack_34[iVar2],2);
      *(undefined *)(param_1 + 0xd) = auStack_44[iVar2];
    }
    *(byte *)(param_1 + 0xe) = bVar3;
    *(byte *)(param_1 + 0xf) = bVar3;
  }
  return in_lr;
}

