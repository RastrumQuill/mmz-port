// sub_0806906C at 0x0806906C (thumb)

undefined4 sub_0806906C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08006984(0x4d);
  }
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08069770(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_080690ec:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_080690fe;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = sub_0802AD94(0x12,param_1,&DAT_08858bc8);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    goto LAB_080690ec;
  }
  iVar2 = sub_0802B3CC();
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_080690fe:
  sub_08128884(param_1,*(undefined4 *)(&DAT_088580f8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

