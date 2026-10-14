// sub_08066818 at 0x08066818 (thumb)

undefined4 sub_08066818(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_0202dbf0;
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08066998(param_1);
    return in_lr;
  }
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      uVar3 = sub_0802AD94(0x11,param_1,&DAT_088580b0);
      *(undefined4 *)(param_1 + 0x28) = uVar3;
    }
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 == 0) goto LAB_080668b8;
    if ((&DAT_088580b8)[*(byte *)(param_1 + 0xd)] != '\0') {
      *(undefined *)(param_1 + 0xd) = 0x29;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  iVar4 = sub_0802B3CC(iVar4);
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_080668b8:
  if ((*(int *)(param_1 + 200) != 0) && (1 < *(byte *)(*(int *)(param_1 + 200) + 0xc))) {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (1 < *(byte *)(param_1 + 0xd)) {
    iVar4 = *(int *)(param_1 + 0xbc) + 0x2800;
    if (*(int *)(param_1 + 0x54) < iVar4) {
      *(int *)(param_1 + 0x54) = iVar4;
    }
    iVar4 = *(int *)(param_1 + 0xc0) + -0x2800;
    if (iVar4 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar4;
    }
  }
  if ((((DAT_0202cac0 & 0x10) != 0) && ((DAT_0202e8b4 & 4) == 0)) || (DAT_0202e910 == 0x10)) {
    if (*(int *)(iVar1 + 0xec) == 0) {
      *(undefined *)(param_1 + 0xde) = 0;
    }
    else if (((*(char *)(iVar1 + 0x1b9) != '\0') &&
             (bVar2 = *(byte *)(param_1 + 0xde) + 1, *(byte *)(param_1 + 0xde) = bVar2,
             (bVar2 & 0x1f) == 0)) && (bVar2 = sub_0802B698(iVar1,0), bVar2 < 0xf0)) {
      sub_080DE884(iVar1,param_1);
    }
  }
  sub_08128884(param_1,*(undefined4 *)(&UNK_08857c18 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

