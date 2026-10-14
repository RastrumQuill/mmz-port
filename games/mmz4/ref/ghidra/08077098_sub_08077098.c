// sub_08077098 at 0x08077098 (thumb)

undefined4 sub_08077098(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 in_lr;
  
  cVar3 = '\x01';
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08006984(0x3e);
  }
  if (*(char *)(param_1 + 199) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0xcc) + 0xbc) != '\0') {
      sub_08002B10(0x163);
      goto LAB_080770e8;
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0xcc) + 0xbc) == '\0') {
    sub_08002B5C(0x163);
    cVar3 = '\0';
LAB_080770e8:
    *(char *)(param_1 + 199) = cVar3;
  }
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08078CBC(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_08077154:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_08077166;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = sub_0802AD94(0x1a,param_1,&DAT_08859dc0);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    goto LAB_08077154;
  }
  iVar2 = sub_0802B3CC();
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_08077166:
  sub_08128884(param_1,*(undefined4 *)(&DAT_08859c14 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

