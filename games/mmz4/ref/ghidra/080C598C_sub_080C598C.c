// sub_080C598C at 0x080C598C (thumb)

undefined4 sub_080C598C(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088623b4);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0x20;
    *(uint *)(param_1 + 0x68) = (uint)*(byte *)(param_1 + 0xb8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  iVar3 = uVar2 * 2 + -1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3 * *(int *)(param_1 + 0x5c);
  iVar1 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar1;
  if (*(int *)(param_1 + 0xb4) < iVar1) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0xb4);
  }
  iVar1 = sub_08128954(*(undefined4 *)(param_1 + 0x68),9);
  if (iVar1 == 0) {
    local_1c = *(int *)(param_1 + 0x54) + iVar3 * -0x1000;
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080DE074(&local_1c,0,uVar2);
  }
  uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x2000 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

