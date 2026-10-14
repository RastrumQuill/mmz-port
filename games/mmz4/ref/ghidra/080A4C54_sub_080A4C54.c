// sub_080A4C54 at 0x080A4C54 (thumb)

undefined4 sub_080A4C54(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x40);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  puVar4 = (ushort *)(param_1 + 0x52);
  uVar2 = *puVar4 + 0x10;
  *puVar4 = uVar2;
  iVar5 = *(short *)((int)&DAT_08128c10 + ((uint)uVar2 * 0x2000000 + 0x80000000 >> 0x17)) * 0x10;
  uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar3 & 0x7fffffff;
  iVar6 = ((uVar3 * 2 >> 0x11 & 7) - 3) * 0x100;
  if (bVar1 == 1) {
    local_2c = *(int *)(param_1 + 0x54) + iVar6;
    local_28 = *(int *)(param_1 + 0x58) + iVar5;
    local_24 = 0x80;
    local_20 = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      local_2c = *(int *)(param_1 + 0x54) + iVar6;
      local_28 = *(int *)(param_1 + 0x58) + iVar5;
      local_24 = 0xffffff80;
      local_20 = 0;
    }
  }
  else {
    if (bVar1 == 2) {
      local_2c = *(int *)(param_1 + 0x54);
      local_28 = *(int *)(param_1 + 0x58);
      local_20 = 0xffffff80;
    }
    else {
      if (bVar1 != 3) goto LAB_080a4d4e;
      local_2c = *(int *)(param_1 + 0x54);
      local_28 = *(int *)(param_1 + 0x58);
      local_20 = 0x80;
    }
    local_28 = local_28 + iVar6;
    local_2c = local_2c + iVar5;
    local_24 = 0;
  }
LAB_080a4d4e:
  sub_080D97A8(&local_2c,&local_24,0,0);
  if (0xff < uVar2) {
    *puVar4 = 0x100;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

