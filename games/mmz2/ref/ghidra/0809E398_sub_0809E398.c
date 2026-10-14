// sub_0809E398 at 0x0809E398 (thumb)

undefined4 sub_0809E398(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar3 + 0xdc) == '\0') {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08343c20 + (uint)*(byte *)(param_1 + 0x12) * 2));
    sub_080128D4(param_1);
    if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(iVar3 + 0x54);
      iVar2 = 0x500;
    }
    else {
      iVar1 = *(int *)(iVar3 + 0x54);
      iVar2 = -0x500;
    }
    *(int *)(param_1 + 0x54) = iVar1 + iVar2;
    *(uint *)(param_1 + 0x58) =
         *(int *)(iVar3 + 0x58) - ((uint)*(byte *)(param_1 + 0x11) * 0x2000 + 0x5600);
    *(byte *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + 1U & 3;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809E134(param_1);
  }
  return in_lr;
}

