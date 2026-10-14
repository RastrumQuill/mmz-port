// sub_080E63D0 at 0x080E63D0 (thumb)

undefined4 sub_080E63D0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_4c [4];
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30 [4];
  undefined2 local_20 [4];
  
  local_4c[0] = -0x22;
  local_4c[1] = 2;
  local_4c[2] = 0xffffffcb;
  local_4c[3] = 4;
  uStack_3c = 0xffffffd3;
  local_38 = 0xfffffffd;
  uStack_34 = 0xffffffd1;
  local_30[0] = -0x100;
  local_30[1] = 0x100;
  local_30[2] = 0xffffff00;
  local_30[3] = 0x100;
  sub_08128B5C(local_20,&DAT_08129c10,8,0x100,0);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined *)(param_1 + 0x11) = 1;
    iVar2 = param_1 + 0x54;
    sub_080E6230(iVar2,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E6230(iVar2,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E6230(iVar2,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar2 = local_30[*(byte *)(param_1 + 0x11) - 1] * ((uVar1 * 2 >> 0x11 & 0xff) + 0x100);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  iVar2 = ((uVar1 * 2 >> 0x11 & 0xff) + 0x180) * -0x100;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + local_4c[(*(byte *)(param_1 + 0x11) - 1) * 2] * 0x100;
  sub_0801CF00(param_1,local_20[*(byte *)(param_1 + 0x11) - 1]);
  *(undefined *)(param_1 + 0xd) = 1;
  return in_lr;
}

