// sub_08088A1C at 0x08088A1C (thumb)

undefined4 sub_08088A1C(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (((*(uint *)(param_1 + 0x14) & 8) != 0) &&
     (((*(uint *)(param_1 + 0x14) & 0x10000) != 0 || (*(short *)(iVar4 + 8) == 0x101)))) {
    *(undefined *)(iVar6 + 0xb9) = 1;
  }
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar4 = *(int *)(iVar4 + 0x54);
    iVar5 = *(int *)(iVar6 + 0x54);
    if (iVar4 < iVar5) {
      *(undefined *)(iVar6 + 0xb6) = 0;
    }
    else if (iVar5 < iVar4) {
      *(undefined *)(iVar6 + 0xb6) = 1;
    }
    else {
      *(bool *)(iVar6 + 0xb6) = iVar5 < *(int *)(DAT_0202dbf0 + 0x54);
    }
    uVar3 = *(uint *)(param_1 + 0x14);
    if ((uVar3 & 0x200) == 0) {
      if (((*(char *)(iVar6 + 0xb5) != '\0') && ((uVar3 & 0x20000) != 0)) && (DAT_0202dbf0 != 0)) {
        cVar2 = sub_0803A584(DAT_0202dbf0,4,4);
        *(char *)(iVar6 + 0xb8) = cVar2;
        if (cVar2 != '\0') {
          *(undefined *)(iVar6 + 0xd) = 7;
          *(undefined *)(iVar6 + 0xe) = 0;
          *(undefined *)(iVar6 + 0xf) = 0;
        }
      }
    }
    else if (((uVar3 & 0x20000) != 0) && (DAT_0202dbf0 != 0)) {
      uVar1 = sub_0803A584(DAT_0202dbf0,3,6);
      *(undefined *)(iVar6 + 0xb7) = uVar1;
    }
  }
  return in_lr;
}

