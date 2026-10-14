// sub_0807DA1C at 0x0807DA1C (thumb)

undefined4 sub_0807DA1C(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_083644bc);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    iVar8 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    iVar7 = (*(int *)(DAT_0202f5c0 + 0x58) + -0x1800) - *(int *)(param_1 + 0x58);
    iVar5 = iVar8 >> 8;
    iVar6 = iVar7 >> 8;
    iVar5 = sub_080FE124(iVar5 * iVar5 + iVar6 * iVar6);
    uVar9 = (uint)(iVar5 << 0x10) >> 8;
    iVar5 = FUN_080fe2f8(iVar8 * 0x100,uVar9);
    iVar6 = FUN_080fe2f8(iVar7 * 0x100,uVar9);
    *(int *)(param_1 + 0x5c) = iVar5 << 2;
    *(int *)(param_1 + 0x60) = iVar6 << 2;
    sub_080177CC(param_1,*(undefined2 *)
                          (&DAT_08364516 + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2)),
                 (short)*(char *)(param_1 + 0x71),3);
    uVar3 = 3;
    break;
  case 1:
  case 3:
    goto switchD_0807da30_caseD_1;
  case 2:
    sub_080177CC(param_1,*(undefined2 *)
                          (&DAT_0836451a + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2)),
                 (short)*(char *)(param_1 + 0x71),3);
    uVar3 = 0xf;
    break;
  case 4:
    sub_080177CC(param_1,*(undefined2 *)
                          (&DAT_0836451e + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2)),
                 (short)*(char *)(param_1 + 0x71),3);
    *(undefined *)(param_1 + 0x12) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 == '\0') {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    return in_lr;
  default:
    return in_lr;
  }
  *(undefined *)(param_1 + 0x12) = uVar3;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0807da30_caseD_1:
  sub_080177F4(param_1);
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 != '\0') {
    return in_lr;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

