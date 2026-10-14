// sub_0806DC40 at 0x0806DC40 (thumb)

undefined4 sub_0806DC40(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    bVar1 = *(byte *)(param_1 + 0x10);
    if (bVar1 == 1) {
      iVar4 = *(int *)(param_1 + 0x4c);
      iVar3 = -0x2800;
LAB_0806dca0:
      *(int *)(param_1 + 0x4c) = iVar4 + iVar3;
      iVar4 = *(int *)(param_1 + 0x50);
      iVar3 = 0x3800;
LAB_0806dcaa:
      *(int *)(param_1 + 0x50) = iVar4 + iVar3;
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x800;
        iVar4 = *(int *)(param_1 + 0x50);
        iVar3 = 0x1800;
        goto LAB_0806dcaa;
      }
    }
    else {
      if (bVar1 == 2) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x800;
        iVar4 = *(int *)(param_1 + 0x50);
        iVar3 = 0x2800;
        goto LAB_0806dcaa;
      }
      if (bVar1 == 3) {
        iVar4 = *(int *)(param_1 + 0x4c);
        iVar3 = 0x800;
        goto LAB_0806dca0;
      }
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar3 = sub_08048BE8(param_1);
  iVar4 = DAT_0202286c;
  if (iVar3 != 0) {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(DAT_0202286c + 0x4c);
    *(int *)(param_1 + 0x50) = *(int *)(iVar4 + 0x50) + -0xe00;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
    goto LAB_0806deae;
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0ff0 + (uint)*(byte *)(param_1 + 0x10) * 4));
  if ((*(ushort *)(param_1 + 0x90) & 4) == 0) goto LAB_0806deae;
  sub_080033F0(param_1 + 0x6c,1);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  *(undefined *)(param_1 + 0x12) = 0x40;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    piVar6 = (int *)(param_1 + 0xb8);
    local_20 = *piVar6 + -0xc800;
    piVar5 = (int *)(param_1 + 0xbc);
    local_1c = *piVar5 + 0x5800;
    sub_080A6C8C(&local_20,2);
    local_20 = *piVar6 + 0x2800;
    local_1c = *piVar5 + 0x4800;
    sub_080A6C8C(&local_20,3);
    local_20 = *piVar6 + 0x13000;
    local_1c = *piVar5;
    iVar4 = -0x16000;
LAB_0806de64:
    local_1c = local_1c + iVar4;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      piVar5 = (int *)(param_1 + 0xb8);
      local_20 = *piVar5 + -0x2800;
      local_1c = *(int *)(param_1 + 0xbc) + 0x5800;
      sub_080A6C8C(&local_20,0);
      local_20 = *piVar5 + 0xb800;
      local_1c = *(int *)(param_1 + 0xbc) + 0x5800;
      sub_080A6C8C(&local_20,1);
      local_20 = *piVar5;
      iVar4 = 0x16000;
LAB_0806de5c:
      local_20 = local_20 + iVar4;
      local_1c = *(int *)(param_1 + 0xbc);
      iVar4 = -0xc000;
      goto LAB_0806de64;
    }
  }
  else {
    if (bVar1 == 2) {
      piVar6 = (int *)(param_1 + 0xb8);
      local_20 = *piVar6 + -0x2800;
      piVar5 = (int *)(param_1 + 0xbc);
      local_1c = *piVar5 + 0x4800;
      sub_080A6C8C(&local_20,3);
      local_20 = *piVar6 + 0x3800;
      local_1c = *piVar5 + -0x4800;
      sub_080A6C8C(&local_20,1);
      local_20 = *piVar6 + 0xe000;
      local_1c = *piVar5;
      iVar4 = -0x16000;
      goto LAB_0806de64;
    }
    if (bVar1 == 3) {
      piVar5 = (int *)(param_1 + 0xb8);
      local_20 = *piVar5 + -0xb800;
      local_1c = *(int *)(param_1 + 0xbc) + 0x5800;
      sub_080A6C8C(&local_20,0);
      local_20 = *piVar5 + 0x2800;
      local_1c = *(int *)(param_1 + 0xbc) + 0x5800;
      sub_080A6C8C(&local_20,1);
      local_20 = *piVar5;
      iVar4 = 0xd000;
      goto LAB_0806de5c;
    }
  }
  sub_080A6F6C(&local_20);
LAB_0806deae:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

