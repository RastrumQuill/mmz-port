// sub_08029428 at 0x08029428 (thumb)

undefined4 sub_08029428(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) != '\0') {
    sub_080294EC(param_1);
    return in_lr;
  }
  if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x200) == 0) {
    if ((*(char *)(param_1 + 0xc) != '\0') &&
       (cVar1 = sub_0802957C(param_1,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50)
                            ), cVar1 != '\0')) {
      if ('\0' < cVar1) {
        sub_0809C368(0,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                     0 < *(int *)(param_1 + 0x54));
      }
      sub_080294EC(param_1);
      return in_lr;
    }
    goto LAB_080294cc;
  }
  sub_080882E4(4,param_1 + 0x4c,~*(uint *)(param_1 + 0x54) >> 0x1f,0);
  iVar3 = *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar3 < 0) {
    if (iVar2 + iVar3 < 0 == SCARRY4(iVar2,iVar3)) goto LAB_0802946c;
LAB_08029474:
    *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
  }
  else {
    if (iVar2 < iVar3) goto LAB_08029474;
LAB_0802946c:
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  sub_08001EAC(4);
LAB_080294cc:
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  return in_lr;
}

