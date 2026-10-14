// sub_0806AEC4 at 0x0806AEC4 (thumb)

undefined4 sub_0806AEC4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0806AFA8(param_1);
    return in_lr;
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      uVar1 = sub_0802AD94(0x13,param_1,&DAT_08858fa0);
      *(undefined4 *)(param_1 + 0xc0) = uVar1;
      if (((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) && (*(byte *)(param_1 + 0xd) < 0x16)) {
        *(undefined *)(param_1 + 0xd) = 0x22;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    if (*(int *)(param_1 + 0xc0) == 0) goto LAB_0806af62;
  }
  iVar2 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xc0));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
LAB_0806af62:
  sub_08128884(param_1,*(undefined4 *)(&UNK_08858be4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (1 < *(byte *)(param_1 + 0xd)) {
    iVar2 = *(int *)(param_1 + 200) + 0x1000;
    if (*(int *)(param_1 + 0x54) < iVar2) {
      *(int *)(param_1 + 0x54) = iVar2;
    }
    iVar2 = *(int *)(param_1 + 0xcc) + -0x1000;
    if (iVar2 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar2;
    }
  }
  return in_lr;
}

