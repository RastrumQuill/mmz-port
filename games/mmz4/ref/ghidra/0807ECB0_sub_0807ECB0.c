// sub_0807ECB0 at 0x0807ECB0 (thumb)

undefined4 sub_0807ECB0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807ED98(param_1);
    return in_lr;
  }
  if (*(int *)(param_1 + 0xcc) == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      uVar1 = sub_0802AD94(0x1d,param_1,&DAT_0885a598);
      *(undefined4 *)(param_1 + 0xcc) = uVar1;
    }
    if (*(int *)(param_1 + 0xcc) == 0) goto LAB_0807ed34;
  }
  iVar2 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xcc));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
LAB_0807ed34:
  uVar4 = 0;
  piVar3 = (int *)(param_1 + 0xbc);
  do {
    if ((*piVar3 != 0) && (1 < *(byte *)(*piVar3 + 0xc))) {
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  sub_0807F6E4(param_1,0,1);
  sub_0807F6E4(param_1,0,3);
  sub_0807F6E4(param_1,2,1);
  sub_0807F6E4(param_1,2,3);
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885a36c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

