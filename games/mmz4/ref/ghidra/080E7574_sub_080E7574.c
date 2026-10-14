// sub_080E7574 at 0x080E7574 (thumb)

undefined4 sub_080E7574(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_5c [8];
  int local_3c [4];
  undefined2 local_2c [4];
  undefined4 local_24;
  undefined4 local_20;
  
  sub_08128BBC(local_5c,0,0x20);
  local_3c[0] = -0x100;
  local_3c[1] = 0x100;
  local_3c[2] = 0xffffff00;
  local_3c[3] = 0x100;
  sub_08128B5C(local_2c,&DAT_08129c50,8);
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_24 = *(undefined4 *)(param_1 + 0x54);
    local_20 = *(undefined4 *)(param_1 + 0x58);
    sub_080D0894(2);
    *(undefined *)(param_1 + 0x11) = 1;
    iVar3 = param_1 + 0x54;
    sub_080E7460(iVar3,2,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E7460(iVar3,3,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E7460(iVar3,4,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar3 = local_3c[*(byte *)(param_1 + 0x11) - 1] * ((uVar1 * 2 >> 0x11 & 0xff) + 0x100);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  iVar2 = ((uVar1 * 2 >> 0x11 & 0xff) + 0x280) * -0x100;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_5c[(uVar4 - 1) * 2] * 0x100;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_5c[(uVar4 - 1) * 2] * -0x100;
    iVar3 = (iVar3 >> 8) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_5c[(uVar4 - 1) * 2 + 1] * 0x100;
  sub_0801CF00(param_1,local_2c[*(byte *)(param_1 + 0x11) - 1]);
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

