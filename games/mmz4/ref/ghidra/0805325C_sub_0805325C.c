// sub_0805325C at 0x0805325C (thumb)

undefined4 sub_0805325C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08006984(0x47);
  }
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08053898(param_1);
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 200);
  if ((iVar1 != 0) && (1 < *(byte *)(iVar1 + 0xc))) {
    *(int *)(param_1 + 200) = 0;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_080532f0:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_08053302;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar2 = sub_0802AD94(8,param_1,&DAT_08854d74);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    goto LAB_080532f0;
  }
  iVar1 = sub_0802B3CC();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_08053302:
  sub_08128884(param_1,*(undefined4 *)(&DAT_08854cbc + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

