// sub_0805AC40 at 0x0805AC40 (thumb)

undefined4 sub_0805AC40(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082afdbc);
    sub_08001EAC(0x26);
    sub_080033F0(param_1 + 0x6c,3);
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined *)(param_1 + 0x13) = 0x28;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x95);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = cVar1 + -1;
  }
  *(char *)(param_1 + 0x95) = cVar1;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082afdf4);
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0x13) = 0x28;
      iVar2 = sub_08005428(DAT_02022e98);
      if (iVar2 != 0) {
        *(undefined *)(iVar2 + 9) = 0x19;
        *(undefined4 *)(iVar2 + 0x14) = 0x8059c51;
        *(undefined2 *)(iVar2 + 0x1c) = DAT_02022ed2;
        *(undefined *)(iVar2 + 0x1e) = DAT_02022f49;
        *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
        *(undefined *)(iVar2 + 0x10) = 2;
      }
    }
    iVar4 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar4 + *(int *)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    iVar2 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    uVar3 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if ((uVar3 & 0x80) == 0) {
      if (iVar2 < 0) {
        if (-0x1000 < iVar2) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
        }
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
    }
    else if ((iVar2 < 0) && (iVar2 = *(int *)(param_1 + 0x50) + iVar2, iVar2 <= iVar4)) {
      *(int *)(param_1 + 0x50) = iVar2;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
      iVar2 = sub_08008120(*(int *)(param_1 + 0x4c) + -0x1c00,*(int *)(param_1 + 0x50) + -0x1000);
      if (0 < iVar2) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
      }
      iVar2 = sub_08007EE0(*(int *)(param_1 + 0x4c) + 0x1c00,*(int *)(param_1 + 0x50) + -0x1000);
      if (iVar2 < 0) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
      }
      *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  return in_lr;
}

