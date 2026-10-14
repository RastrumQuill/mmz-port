// sub_080C2F34 at 0x080C2F34 (thumb)

undefined4 sub_080C2F34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar4 + 0xc) < 2) {
    sub_0801CFF0(param_1);
    iVar3 = *(int *)(iVar4 + 0x58);
    iVar1 = (*(int *)(iVar4 + 0x54) - *(int *)(param_1 + 0xb8)) * -0x200;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + (iVar1 >> 8);
    iVar1 = (iVar3 - *(int *)(param_1 + 0xbc)) * -0x200;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + (iVar1 >> 8);
    uVar2 = *(undefined4 *)(iVar4 + 0x58);
    *(int *)(param_1 + 0xb8) = *(int *)(iVar4 + 0x54);
    *(undefined4 *)(param_1 + 0xbc) = uVar2;
  }
  else {
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

