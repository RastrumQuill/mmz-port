// sub_0809F240 at 0x0809F240 (thumb)

undefined4 sub_0809F240(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0xc0);
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,*(undefined *)(param_1 + 0x11));
    sub_0809C980(param_1);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(iVar4 + 0xd) != '\x02') {
    sub_0809C980(param_1);
  }
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809F0D0(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 1) {
    if ((iVar5 < 0x1801) || (*(char *)(param_1 + 0x73) != '\x04')) goto LAB_0809f2f2;
    *(undefined *)(param_1 + 0x11) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    if (bVar1 < 2) {
      if ((bVar1 != 0) || (*(int *)(param_1 + 0xc0) == *(int *)(param_1 + 0x50))) goto LAB_0809f2f2;
      cVar2 = '\x02';
    }
    else if (((bVar1 != 2) || (iVar5 < 0x3801)) ||
            (cVar2 = *(char *)(param_1 + 0x73), cVar2 != '\x04')) goto LAB_0809f2f2;
    *(char *)(param_1 + 0x11) = cVar2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
LAB_0809f2f2:
  uVar3 = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  return in_lr;
}

