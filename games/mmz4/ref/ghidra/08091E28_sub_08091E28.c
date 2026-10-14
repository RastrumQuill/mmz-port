// sub_08091E28 at 0x08091E28 (thumb)

undefined4 sub_08091E28(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar4 = *(int *)(param_1 + 0x2c);
  if (((*(char *)(iVar3 + 8) != '\x03') || (*(char *)(iVar3 + 9) != '\x16')) || (iVar3 == iVar4))
  goto LAB_08091eaa;
  if (*(byte *)(iVar3 + 0xd) < 6) {
    if (*(int *)(iVar4 + 0x60) < 1) goto LAB_08091eaa;
    *(char *)(iVar4 + 0xbd) = *(char *)(iVar4 + 0xbd) + -1;
    *(undefined4 *)(iVar4 + 0x60) = 0xfffffd00;
    if (*(int *)(iVar4 + 0x5c) < 1) {
      uVar2 = 0xffffff00;
    }
    else {
LAB_08091ea4:
      uVar2 = 0x100;
    }
  }
  else {
    if (*(char *)(iVar3 + 0xbe) == '\x01') {
      *(undefined *)(iVar4 + 0xbd) = 0;
      goto LAB_08091eaa;
    }
    if (*(int *)(iVar4 + 0x60) < 1) goto LAB_08091eaa;
    *(char *)(iVar4 + 0xbd) = *(char *)(iVar4 + 0xbd) + -1;
    if (*(int *)(iVar4 + 0x5c) < 1) goto LAB_08091ea4;
    uVar2 = 0xffffff00;
  }
  *(undefined4 *)(iVar4 + 0x5c) = uVar2;
LAB_08091eaa:
  if ((((byte)(*(char *)(iVar4 + 0xd) - 1U) < 8) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)) &&
     (DAT_0202dbf0 != 0)) {
    cVar1 = sub_0803A584(DAT_0202dbf0,8,0);
    *(char *)(iVar4 + 0xbf) = cVar1;
    if (cVar1 != '\0') {
      *(undefined *)(iVar4 + 0xd) = 10;
      *(undefined *)(iVar4 + 0xe) = 0;
    }
  }
  return in_lr;
}

