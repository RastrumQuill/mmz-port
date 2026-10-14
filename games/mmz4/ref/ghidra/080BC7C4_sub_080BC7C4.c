// sub_080BC7C4 at 0x080BC7C4 (thumb)

undefined4 sub_080BC7C4(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 0x200) == 0) {
    if (*(char *)(param_1 + 0xb8) == '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      sub_080BC960(param_1);
      if ((*puVar3 & 4) != 0) {
        iVar1 = *(int *)(param_1 + 0x28);
        iVar2 = *(int *)(iVar1 + 0xde0) + -0xb4;
        *(int *)(iVar1 + 0xde0) = iVar2;
        if (iVar2 < 0) {
          *(undefined4 *)(iVar1 + 0xde0) = 0;
        }
        sub_08005784(param_1 + 0x74,&DAT_088613e8);
      }
    }
    else {
      *puVar3 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    }
    iVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4);
    if (iVar1 < 0) {
      iVar1 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
    }
    if (0x11800 < iVar1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
    sub_0801CFF0(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080BC8A8(param_1);
  }
  return in_lr;
}

