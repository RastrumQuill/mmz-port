// sub_08070D14 at 0x08070D14 (thumb)

undefined4 sub_08070D14(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_080033F0(param_1 + 0x6c,3);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_08070e08;
  iVar5 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (iVar5 < 0) goto LAB_08070dba;
  }
  else if (-1 < iVar5) {
LAB_08070dba:
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (0x7000 < iVar5) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar4 & 0x7fffffff;
  if ((uVar4 * 2 >> 0x11 & 0xf) < 10) {
    uVar3 = 3;
  }
  else {
    uVar3 = 4;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_08070e08:
  sub_08070660(param_1,0,0x100);
  return in_lr;
}

