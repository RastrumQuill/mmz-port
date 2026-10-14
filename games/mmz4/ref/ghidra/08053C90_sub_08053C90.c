// sub_08053C90 at 0x08053C90 (thumb)

undefined4 sub_08053C90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08006984(0x3c);
  }
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08054CC4(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_08053d10:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_08053d22;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = sub_0802AD94(9,param_1,&DAT_08854e30);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    goto LAB_08053d10;
  }
  iVar2 = sub_0802B3CC();
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_08053d22:
  sub_08128884(param_1,*(undefined4 *)(&DAT_08854d90 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_08055258(param_1);
  sub_08055278(param_1);
  return in_lr;
}

