// sub_080C8654 at 0x080C8654 (thumb)

undefined4 sub_080C8654(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0202dbf0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_08005760(param_1 + 0x74,&DAT_08862b60,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffb80;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar2 = 0xfffff800;
  }
  else {
    uVar2 = 0x800;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar2;
  if (iVar1 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
    sub_080C84C0(param_1);
  }
  return in_lr;
}

