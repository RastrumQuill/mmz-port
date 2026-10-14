// sub_080DA48C at 0x080DA48C (thumb)

undefined4 sub_080DA48C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar2 = sub_080DABF4();
  uVar6 = (uint)*(byte *)(param_1 + 0x12);
  *(uint *)(param_1 + 0x54) = uVar6 * 0x800 + 0x3800;
  iVar5 = (int)*(short *)(*(int *)(iVar2 + 0x10) + 0xa4);
  bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) + 0x1fd);
  iVar3 = sub_080EF2B8(iVar5,bVar1);
  iVar4 = sub_080EF330(iVar5,bVar1);
  iVar5 = iVar4;
  if (iVar4 < 0) {
    iVar5 = iVar4 + 3;
  }
  if (uVar6 == iVar5 >> 2) {
    iVar4 = iVar4 + uVar6 * -4;
  }
  else {
    iVar4 = 0;
    if (uVar6 < (uint)(iVar5 >> 2)) {
      iVar4 = 4;
    }
  }
  sub_080127E4(param_1,*(undefined2 *)(&DAT_0834b910 + (iVar3 * 5 + iVar4) * 2));
  if ((uVar6 + 1 < (uint)(bVar1 >> 2)) && (*(int *)(param_1 + 0x2c) == 0)) {
    sub_080DA8CC(iVar2,param_1);
  }
  return in_lr;
}

