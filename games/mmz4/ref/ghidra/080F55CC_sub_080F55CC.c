// sub_080F55CC at 0x080F55CC (thumb)

undefined4 sub_080F55CC(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 in_lr;
  undefined auStack_6c [8];
  undefined auStack_64 [8];
  undefined auStack_5c [8];
  undefined auStack_54 [8];
  undefined auStack_4c [8];
  undefined auStack_44 [8];
  undefined auStack_3c [8];
  undefined auStack_34 [8];
  undefined auStack_2c [8];
  undefined auStack_24 [8];
  undefined auStack_1c [8];
  undefined auStack_14 [8];
  
  sub_08128B5C(auStack_6c,&DAT_08129cb0,0x60);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if ((DAT_0202cac0 & 0xf) == 3) {
      uVar1 = 0xb4;
    }
    else {
      uVar1 = 1;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080f55ec_caseD_7;
    sub_080F6568(auStack_6c,0,0);
    puVar3 = auStack_3c;
    break;
  case 2:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080f55ec_caseD_7;
    sub_080F6568(auStack_64,0,0);
    puVar3 = auStack_34;
    break;
  case 3:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080f55ec_caseD_7;
    sub_080F6568(auStack_5c,0,0);
    puVar3 = auStack_2c;
    break;
  case 4:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080f55ec_caseD_7;
    sub_080F6568(auStack_54,0,0);
    puVar3 = auStack_24;
    break;
  case 5:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080f55ec_caseD_7;
    sub_080F6568(auStack_4c,0,0);
    puVar3 = auStack_1c;
    break;
  case 6:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      sub_080F6568(auStack_44,0,0);
      sub_080F6568(auStack_14,1,0);
      *(undefined *)(param_1 + 0xd) = 0;
    }
  default:
    goto switchD_080f55ec_caseD_7;
  }
  sub_080F6568(puVar3,1,0);
  *(undefined *)(param_1 + 0x12) = 0x1e;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080f55ec_caseD_7:
  if (0xf000 < *(int *)(DAT_0202dbf0 + 0x54) - 0x10e000U) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

