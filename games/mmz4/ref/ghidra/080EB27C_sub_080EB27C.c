// sub_080EB27C at 0x080EB27C (thumb)

undefined4 sub_080EB27C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_080eb350;
  }
  iVar6 = *(int *)(param_1 + 0xb4);
  if (iVar6 == 0) {
    return in_lr;
  }
  if (((DAT_0202e922 & 1) != 0) || (DAT_0202dbf8 != '\0')) {
    DAT_0202e924 = DAT_0202e924 & 0xfffe;
    *(undefined *)(iVar6 + 0x143) = 0;
    *(int *)(param_1 + 0xb4) = 0;
    return in_lr;
  }
  if (*(int *)(DAT_0202dbf0 + 0x54) < DAT_0202ea30) {
    *(byte *)(DAT_0202dbf0 + 10) = *(byte *)(DAT_0202dbf0 + 10) & 0xef;
    if ((*(byte *)(DAT_0202dbf0 + 10) & 8) != 0) {
      *(undefined *)(DAT_0202dbf0 + 0x4c) = 0;
      pbVar3 = (byte *)(DAT_0202dbf0 + 0x4a);
      bVar1 = *pbVar3 & 0xef;
LAB_080eb33a:
      *pbVar3 = bVar1;
    }
  }
  else {
    *(byte *)(DAT_0202dbf0 + 10) = *(byte *)(DAT_0202dbf0 + 10) | 0x10;
    if ((*(byte *)(DAT_0202dbf0 + 10) & 8) != 0) {
      *(undefined *)(DAT_0202dbf0 + 0x4c) = 1;
      pbVar3 = (byte *)(DAT_0202dbf0 + 0x4a);
      bVar1 = *pbVar3 | 0x10;
      goto LAB_080eb33a;
    }
  }
  DAT_0202ea64 = 2;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080eb350:
  if (DAT_0202ea64 == 0) {
    *(undefined *)(*(int *)(param_1 + 0xb4) + 0x143) = 0;
    DAT_0202ea64 = 1;
    if (*(char *)(param_1 + 0x11) == '\x01') {
      uVar2 = sub_0801F018(param_1 + 0x54);
    }
    else {
      uVar2 = sub_0801EF14(param_1 + 0x54);
    }
    puVar4 = (undefined4 *)(param_1 + 0xb8);
    *puVar4 = uVar2;
    puVar5 = (undefined4 *)*puVar4;
    if (puVar5 != (undefined4 *)0x0) {
      DAT_0202e914 = 0x8000;
      uVar2 = sub_08008534(*puVar5,puVar5[1]);
      iVar6 = DAT_0202dbf0;
      *(undefined4 *)(DAT_0202dbf0 + 0x58) = uVar2;
      *(undefined4 *)(iVar6 + 0x54) = *(undefined4 *)*puVar4;
      sub_0802B7B4();
      DAT_0202e924 = DAT_0202e924 & 0xfffe;
      DAT_0202ea11 = 8;
      DAT_0202ea1a = 0;
      *(int *)(param_1 + 0xb4) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

