// sub_0806DA5C at 0x0806DA5C (thumb)

undefined4 sub_0806DA5C(int param_1)

{
  byte bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08006984(0x45);
  }
  pcVar5 = (char *)(param_1 + 0xcc);
  if (*pcVar5 == '\0') {
    if (DAT_0202dae6 == 1) {
      sub_0800249C(0x78,0x2c0);
      *pcVar5 = '\x01';
    }
    if (*pcVar5 != '\0') goto LAB_0806da9a;
  }
  else {
LAB_0806da9a:
    sub_080025D8(0x78);
  }
  puVar2 = (uint *)(param_1 + 0x8c);
  if ((((*puVar2 & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar1 = (byte)DAT_0202e918 & 8, (DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*puVar2 & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
    }
    sub_0806ECEC(param_1);
    return in_lr;
  }
  if ((*puVar2 & 1) == 0) {
LAB_0806db2e:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0806db40;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar3 = sub_0802AD94(0x15,param_1,&DAT_088590e8);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    goto LAB_0806db2e;
  }
  iVar4 = sub_0802B3CC();
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0806db40:
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885900c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

