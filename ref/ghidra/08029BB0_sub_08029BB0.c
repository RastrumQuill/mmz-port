// sub_08029BB0 at 0x08029BB0 (thumb)

undefined4 sub_08029BB0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_08029bf0:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto LAB_08029cba;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_08029cba;
      sub_08029778(param_1,0);
      sub_0800561C(param_1 + 0x74,&DAT_082acc9c);
      *(undefined *)(param_1 + 0xb9) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08029bf0;
    }
    if (bVar1 != 2) {
      if (((bVar1 == 3) && ((DAT_02022b6e & 1) == 0)) &&
         (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0'))
      {
        if (*(char *)(param_1 + 0xbc) == '\0') {
          uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
          DAT_02022890 = uVar4 & 0x7fffffff;
          if ((uVar4 * 2 >> 0x11 & 1) == 0) {
            *(undefined *)(param_1 + 0xd) = 2;
            *(undefined *)(param_1 + 0xe) = 0;
          }
          else {
            *(undefined *)(param_1 + 0xd) = 1;
            *(undefined *)(param_1 + 0xe) = 0;
          }
        }
        else {
          *(char *)(param_1 + 0xbc) = '\0';
          *(undefined *)(param_1 + 0xd) = 3;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      goto LAB_08029cba;
    }
  }
  iVar5 = *(int *)(param_1 + 0x54);
  iVar3 = sub_080C8AD0((*(int *)(param_1 + 0xcc) + -0x2400) - *(int *)(param_1 + 0x4c),iVar5 + 8);
  if (iVar3 < iVar5 >> 3) {
    if (0 < iVar5) {
      *(int *)(param_1 + 0x54) = iVar5 + -8;
    }
  }
  else if (iVar5 < 0x100) {
    *(int *)(param_1 + 0x54) = iVar5 + 8;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_08029cba:
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  sub_080297C0(param_1);
  return in_lr;
}

