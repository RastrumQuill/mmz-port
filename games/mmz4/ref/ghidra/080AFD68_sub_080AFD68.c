// sub_080AFD68 at 0x080AFD68 (thumb)

undefined4 sub_080AFD68(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x28) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x11) == '\0') && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20)) {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      sub_080D0C00(*(undefined4 *)(param_1 + 0x54),
                   *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 0xf) * 0x100,1);
      sub_080D0C00(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500,1);
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      sub_080D0C00(*(int *)(param_1 + 0x54) + (uVar2 * 2 >> 0x11 & 0xf) * 0x100,
                   *(undefined4 *)(param_1 + 0x58),0);
    }
    else {
      iVar1 = sub_0802AD94(0,param_1,&DAT_0885fd10);
      *(int *)(param_1 + 0x28) = iVar1;
      if (iVar1 != 0) {
        sub_08005784(param_1 + 0x74,&DAT_0885fcc0);
        sub_0801CF00(param_1,0xa60b);
        sub_0801CF00(*(undefined4 *)(param_1 + 0x2c),0xa605);
      }
    }
  }
  return in_lr;
}

