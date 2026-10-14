// sub_080A9E8C at 0x080A9E8C (thumb)

undefined4 sub_080A9E8C(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_080177F4();
  if ((*(char *)(param_1 + 0xd) != '\0') &&
     (bVar1 = *(char *)(param_1 + 0x12) + 1, *(byte *)(param_1 + 0x12) = bVar1, 2 < bVar1)) {
    sub_080C0FC4(param_1,0,0);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    sVar3 = sub_08009A3C(iVar5,*(undefined4 *)(param_1 + 0x58));
    if (sVar3 == 0) goto LAB_080a9fec;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x5c) < 0) {
      bVar1 = 0x20;
    }
    else {
      bVar1 = 0x60;
    }
    pbVar4 = (byte *)(param_1 + 0xc0);
    *pbVar4 = bVar1;
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_080fe64c + ((*pbVar4 + 0x40) * 0x1000000 >> 0x17)) * 5;
    *(int *)(param_1 + 0x60) = (short)(&DAT_080fe64c)[*pbVar4] * 5;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x54) = iVar5;
        sVar3 = sub_08009A3C(iVar5,*(undefined4 *)(param_1 + 0x58));
        if (sVar3 == 0) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
          sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
          if (sVar3 == 0) goto LAB_080a9fec;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
          *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
        }
        else {
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
          *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
        }
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      goto LAB_080a9fec;
    }
    if (bVar1 != 0) goto LAB_080a9fec;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      sub_0800471C(0x4d);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01' + *(char *)(param_1 + 0x10);
      goto LAB_080a9fec;
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      if (CONCAT11(*(undefined *)(iVar5 + 0x1e),*(undefined *)(iVar5 + 0x70)) != -0x4ce4) {
        sub_0800471C(0x4d);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x02';
      }
      goto LAB_080a9fec;
    }
    if (CONCAT11(*(undefined *)(iVar5 + 0x1e),*(undefined *)(iVar5 + 0x70)) == -0x4ce5)
    goto LAB_080a9fec;
    sub_0800471C(0x4d);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080a9fec:
  if (2 < *(byte *)(param_1 + 0x13)) {
    sub_080C0FC4(param_1,1,0);
    sub_080C0FC4(param_1,1,0x20);
    sub_080C0FC4(param_1,1,0x40);
    sub_080C0FC4(param_1,1,0x60);
    sub_080C0FC4(param_1,1,0x80);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    sub_080AA048(param_1);
  }
  return in_lr;
}

