// sub_080869A4 at 0x080869A4 (thumb)

undefined8 sub_080869A4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  ushort auStack_30 [4];
  int local_28;
  int local_24;
  
  sub_08128B5C(auStack_30,&DAT_0812941a,6);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x35);
    sub_080868A4(param_1,0);
    *(undefined *)(param_1 + 0xba) = 0;
    *(undefined *)(param_1 + 0xbb) = 0;
    *(undefined *)(param_1 + 0x12) = 0xc;
    sub_08005784(param_1 + 0x74,&DAT_0885b8b8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080868D8(param_1);
  bVar2 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar2 = *(byte *)(param_1 + 0x12);
  if ((bVar2 & 1) == 0) {
    pbVar5 = (byte *)(param_1 + 0xba);
    iVar7 = (*pbVar5 + 2) * -0x800;
    iVar3 = iVar7 + 0x800;
    pbVar6 = (byte *)(param_1 + 0xbb);
    iVar7 = iVar7 + 0x1800 + (uint)*pbVar6 * 0x1000;
    local_28 = *(int *)(param_1 + 0x54) + iVar7;
    local_24 = *(int *)(param_1 + 0x58) + iVar3;
    sub_080D7EF0(&local_28,0,0);
    sub_08086B44(param_1,&local_28);
    local_28 = *(int *)(param_1 + 0x54) - iVar7;
    local_24 = *(int *)(param_1 + 0x58) - iVar3;
    sub_080D7EF0(&local_28,0,0);
    sub_08086B44(param_1,&local_28);
    local_28 = *(int *)(param_1 + 0x54) + iVar3;
    local_24 = *(int *)(param_1 + 0x58) - iVar7;
    sub_080D7EF0(&local_28,0,0);
    sub_08086B44(param_1,&local_28);
    local_28 = *(int *)(param_1 + 0x54) - iVar3;
    local_24 = *(int *)(param_1 + 0x58) + iVar7;
    sub_080D7EF0(&local_28,0,0);
    sub_08086B44(param_1,&local_28);
    bVar1 = *pbVar6;
    *pbVar6 = bVar1 + 1;
    if (*pbVar5 + 1 <= (uint)(byte)(bVar1 + 1)) {
      *pbVar5 = (byte)(*pbVar5 + 1);
      *pbVar6 = bVar2 & 1;
    }
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar4 = 1;
  }
  else {
    if (((*(char *)(param_1 + 0x12) - 1U & 1) == 0) &&
       (*(byte *)(param_1 + 0xba) + 1 <= *(byte *)(param_1 + 0xbb) + 1)) {
      sub_08005784(param_1 + 0x74,&DAT_0885b7f8 + (uint)auStack_30[*(byte *)(param_1 + 0xba)] * 0x18
                  );
    }
    uVar4 = 0;
  }
  return CONCAT44(in_lr,uVar4);
}

