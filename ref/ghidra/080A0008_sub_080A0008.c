// sub_080A0008 at 0x080A0008 (thumb)

undefined4 sub_080A0008(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_0809F914(param_1,param_1 + 0x4c,4,0);
    sub_08001EAC(0x7b);
  }
  sub_0809C980(param_1);
  piVar5 = (int *)(param_1 + 0xbc);
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  iVar3 = sub_080C8CB0(uVar2 * 2 >> 0x11,3);
  local_18 = *piVar5 + (iVar3 + -1) * 0x100;
  *(int *)(param_1 + 0x4c) = local_18;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x54) = local_18 - *piVar5;
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  piVar4 = (int *)(param_1 + 0xc0);
  if ((bVar1 & 3) == 0) {
    local_18 = local_18 + 0xc00;
    local_14 = sub_08008360(local_18,*piVar4);
    sub_0808827C(3,&local_18);
    local_18 = *(int *)(param_1 + 0x4c) + -0xc00;
    local_14 = sub_08008360(local_18,*piVar4);
    sub_0808827C(3,&local_18);
  }
  if (*(int *)(param_1 + 0x50) < *piVar4) {
    *(int *)(param_1 + 0x4c) = *piVar5;
    *(int *)(param_1 + 0x50) = *piVar4;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

