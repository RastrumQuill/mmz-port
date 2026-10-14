// sub_080A49BC at 0x080A49BC (thumb)

undefined4 sub_080A49BC(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 3;
  do {
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar1 & 0x7fffffff;
    iVar3 = *(int *)(param_1 + 0x54) + -0x1000 + (uVar1 * 8 >> 0x13);
    iVar2 = sub_0800A104(iVar3,*(undefined4 *)(param_1 + 0x58));
    if ((iVar2 - *(int *)(param_1 + 0x58)) + 0x1800U < 0x3000) {
      sub_080BEF04(iVar3,iVar2,1);
    }
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return in_lr;
}

