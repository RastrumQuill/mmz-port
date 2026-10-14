// sub_080A6510 at 0x080A6510 (thumb)

undefined8 sub_080A6510(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x2c) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x10) == '\0') && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20)) {
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D0C00(*(undefined4 *)(param_1 + 0x54),
                   *(int *)(param_1 + 0x58) + (uVar3 * 2 >> 0x11 & 0xf) * 0x100,1);
      sub_080D0C00(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500,1);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D0C00(*(int *)(param_1 + 0x54) + (uVar3 * 2 >> 0x11 & 0xf) * 0x100,
                   *(undefined4 *)(param_1 + 0x58),0);
    }
    else {
      iVar1 = sub_0802AD94(0,param_1,&DAT_0885f028);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (iVar1 != 0) {
        sub_08005784(param_1 + 0x74,&DAT_0885ef70);
        uVar2 = 1;
        goto LAB_080a65d2;
      }
    }
  }
  uVar2 = 0;
LAB_080a65d2:
  return CONCAT44(in_lr,uVar2);
}

