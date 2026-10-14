// sub_080AA264 at 0x080AA264 (thumb)

undefined4 sub_080AA264(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x9400);
    *(undefined *)(param_1 + 0xb6) = 0;
    sub_08002B10(0x164);
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar5 = 0x100;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar5 = 0x101;
      }
      iVar4 = sub_080CC5FC(param_1 + 0x54,uVar5,param_1);
      *(int *)(param_1 + 0x2c) = iVar4;
      if (iVar4 == 0) {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
        goto LAB_080aa3ae;
      }
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar6 = (byte *)(param_1 + 0xb7);
  bVar1 = *pbVar6;
  *pbVar6 = bVar1 + 1;
  if (3 < (byte)(bVar1 + 1)) {
    *pbVar6 = 0;
  }
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_0885f594 + (uint)*pbVar6 * 2));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0xb4) == '\0') {
    cVar2 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '@') {
      *(char *)(param_1 + 0xb4) = '\x01';
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else {
    cVar2 = sub_080AA650(param_1);
    if (cVar2 != '\0') {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  bVar1 = *(byte *)(*(int *)(param_1 + 0x2c) + 0x12);
  if (bVar1 < 0x40) {
    *(byte *)(*(int *)(param_1 + 0x2c) + 0x12) = bVar1 + 1;
    if ((*(byte *)(*(int *)(param_1 + 0x2c) + 0x12) & 1) != 0) {
      sub_080E24A0(*(int *)(param_1 + 0x2c) + 0x54,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    }
  }
  sVar3 = sub_08007C7C(*(int *)(param_1 + 0x54) +
                       *(int *)(&DAT_0885f614 + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4)
                               ) * 0x100,*(int *)(param_1 + 0x58) + 0x400);
  if ((sVar3 != 0) &&
     (sVar3 = sub_08007C7C(*(int *)(param_1 + 0x54) +
                           *(int *)(&DAT_0885f614 +
                                   ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4)) * 0x100,
                           *(undefined4 *)(param_1 + 0x58)), sVar3 == 0)) {
    return in_lr;
  }
  *(undefined *)(param_1 + 0xd) = 2;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_080aa3ae:
  *(undefined *)(param_1 + 0x13) = 0x20;
  return in_lr;
}

