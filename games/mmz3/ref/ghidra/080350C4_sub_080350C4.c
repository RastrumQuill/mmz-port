// sub_080350C4 at 0x080350C4 (thumb)

undefined4 sub_080350C4(int param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0835b268);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    sub_08017700(param_1,0xbc13);
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar5 = *(uint *)(param_1 + 0x5c);
  if (uVar5 != 0xffffffff) {
    uVar6 = 0;
    if ((DAT_02002652 != 0) && (DAT_02002654 != uVar5)) {
      puVar3 = &DAT_02002480;
      do {
        uVar6 = uVar6 + 1;
        if ((int)(uint)DAT_02002652 <= (int)uVar6) break;
        puVar2 = (ushort *)(puVar3 + 0x1ec);
        puVar3 = puVar3 + 0x18;
      } while (*puVar2 != uVar5);
    }
    if (uVar6 == DAT_02002652) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54) + (&DAT_0200265c)[uVar6 * 6];
      *(int *)(param_1 + 0x54) = iVar4;
      iVar4 = iVar4 - (&DAT_02002664)[uVar6 * 6];
      *(int *)(param_1 + 0x54) = iVar4;
      *(int *)(param_1 + 0x54) = iVar4 - *(int *)(iVar1 + 0x14);
      iVar1 = *(int *)(param_1 + 0x58) + (&DAT_02002660)[uVar6 * 6];
      *(int *)(param_1 + 0x58) = iVar1;
      *(int *)(param_1 + 0x58) = iVar1 - *(int *)(&DAT_02002668 + uVar6 * 0x18);
    }
    if (*(int *)(param_1 + 0x5c) != -1) goto LAB_0803520a;
  }
  iVar1 = sub_08034C1C(param_1);
  if (iVar1 - *(int *)(param_1 + 0x58) < 0x800) {
    *(int *)(param_1 + 0x58) = iVar1;
  }
  iVar1 = sub_0800A6FC(0xffffffff,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x100);
  if (iVar1 != -1) {
    *(uint *)(param_1 + 0x5c) = (uint)(&DAT_02002654)[iVar1 * 0xc];
  }
LAB_0803520a:
  if ((*(char *)(param_1 + 0x12) == '\0') &&
     (*(undefined *)(param_1 + 0x12) = 1, *(char *)(param_1 + 0x73) == '\x03')) {
    sub_08017700(param_1,0xbc02);
  }
  if (*(int *)(param_1 + 0x5c) == -1) {
    sub_080177CC(param_1,0xbc03,3,4);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    sub_080177F4(param_1);
  }
  return in_lr;
}

