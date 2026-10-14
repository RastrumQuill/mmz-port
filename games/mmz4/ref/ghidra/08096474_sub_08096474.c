// sub_08096474 at 0x08096474 (thumb)

undefined4 sub_08096474(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0801CD28();
    sub_0801CF00(param_1,0x4400);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_0885d3a0,param_1 + 0x54,10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    sub_0801CC9C(param_1);
    sub_0801CF00(param_1,0x4402);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_0885d3d0,param_1 + 0x54,10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8096af1;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(char *)(param_1 + 0x25) = *(char *)(param_1 + 0x11) + '\x14';
  if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54)) {
    *(undefined *)(param_1 + 0xb4) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xb4) = 0x80;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  *(uint *)(param_1 + 0x68) = (uVar1 * 2 >> 0x11 & 1) * 2 + -1;
  *(undefined *)(param_1 + 0x12) = 0;
  uVar1 = (uint)*(byte *)(param_1 + 0x11);
  iVar2 = *(byte *)(param_1 + 0x10) + 1;
  if ((int)(uVar1 + iVar2 * -4) < 0 != SBORROW4(uVar1,iVar2 * 4)) {
    sub_08096410(param_1,(uint)*(byte *)(param_1 + 0x10),uVar1 + 1 & 0xff);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080965B4(param_1);
  return in_lr;
}

