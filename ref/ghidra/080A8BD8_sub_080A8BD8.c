// sub_080A8BD8 at 0x080A8BD8 (thumb)

undefined4 sub_080A8BD8(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar6 + 0x4c);
  bVar1 = *(byte *)(iVar6 + 0xd);
  if (bVar1 < 4) {
LAB_080a8bec:
    cVar2 = *(char *)(param_1 + 0x11);
joined_r0x080a8cc2:
    if (cVar2 != '\0') {
      iVar4 = *(int *)(iVar6 + 0x50);
      iVar5 = 0x2c00;
LAB_080a8cca:
      *(int *)(param_1 + 0x50) = iVar4 + iVar5;
      goto LAB_080a8cf8;
    }
    iVar4 = *(int *)(iVar6 + 0x50);
    iVar5 = -0x2c00;
  }
  else {
    if (bVar1 != 4) {
      if (bVar1 != 5) {
        if (*(char *)(iVar6 + 0xf) != '\x03') goto LAB_080a8ce4;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_080055FC(param_1 + 0x74,&DAT_082b6340,param_1 + 0x4c,1);
        *(int *)(param_1 + 0xb4) = param_1;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        cVar2 = *(char *)(param_1 + 0x11);
        goto joined_r0x080a8cc2;
      }
      if (*(char *)(param_1 + 0x11) != '\0') {
        *(int *)(param_1 + 0x50) = *(int *)(iVar6 + 0x50) + 0x1c00;
        uVar3 = *(ushort *)(param_1 + 0x90);
joined_r0x080a8c74:
        if (((uVar3 & 4) != 0) && (iVar4 = sub_08001F08(0x83), iVar4 == 0)) {
          sub_08001EAC(0x83);
        }
        goto LAB_080a8cf8;
      }
      iVar4 = *(int *)(iVar6 + 0x50);
      iVar5 = -0x1c00;
      goto LAB_080a8cca;
    }
    if (*(char *)(iVar6 + 0xf) == '\0') goto LAB_080a8bec;
    if (*(char *)(iVar6 + 0xf) != '\x04') {
LAB_080a8ce4:
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      goto LAB_080a8cf8;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b6378,param_1 + 0x4c,1);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if (*(char *)(param_1 + 0x11) != '\0') {
      *(int *)(param_1 + 0x50) = *(int *)(iVar6 + 0x50) + 0x1c00;
      uVar3 = *(ushort *)(param_1 + 0x90);
      goto joined_r0x080a8c74;
    }
    iVar4 = *(int *)(iVar6 + 0x50);
    iVar5 = -0x1c00;
  }
  *(int *)(param_1 + 0x50) = iVar4 + iVar5;
LAB_080a8cf8:
  if (1 < *(byte *)(iVar6 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

