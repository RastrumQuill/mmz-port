// sub_08051FF8 at 0x08051FF8 (thumb)

undefined4 sub_08051FF8(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08002B10(0xeb);
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      uVar4 = 0xfffffe40;
    }
    else {
      uVar4 = 0x1c0;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(undefined *)(param_1 + 0x12) = 0x19;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined *)(param_1 + 0xe2) = 1;
  }
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    iVar8 = *(int *)(param_1 + 0x54);
    uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar5 & 0x7fffffff;
    local_24 = iVar8 + 0x1000 + (uVar5 * 2 >> 0x11 & 0x1f) * -0x100;
    if ((*(byte *)(param_1 + 0x13) & 3) == 1) {
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_20 = sub_08008534(iVar8,*(undefined4 *)(param_1 + 0x58));
        puVar6 = &DAT_08854c44;
      }
      else {
        local_20 = sub_08008748(iVar8,*(undefined4 *)(param_1 + 0x58));
        puVar6 = &DAT_08854c7c;
      }
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_20 = sub_08008534(iVar8,*(undefined4 *)(param_1 + 0x58));
        uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        sub_080D4898(&local_24,&DAT_08854c28,0,(uVar5 * 2 >> 0x11 & 1) << 4);
        goto LAB_08052132;
      }
      local_20 = sub_08008748(iVar8,*(undefined4 *)(param_1 + 0x58));
      puVar6 = &DAT_08854c60;
    }
    uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar5 & 0x7fffffff;
    sub_080D4898(&local_24,puVar6,0,(uVar5 * 2 >> 0x11 & 1) << 4);
  }
LAB_08052132:
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 + 1;
  if ((bVar1 & 3) < 2) {
    iVar8 = *(int *)(param_1 + 0x54);
    iVar7 = 0x100;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x54);
    iVar7 = -0x100;
  }
  *(int *)(param_1 + 0x54) = iVar8 + iVar7;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0xd9) == '\0') {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    uVar2 = 0x13;
  }
  else {
    uVar2 = 0x1a;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

