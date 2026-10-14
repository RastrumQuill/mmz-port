// sub_0809F4D4 at 0x0809F4D4 (thumb)

undefined4 sub_0809F4D4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar1 + 0xc) < 2) {
    sub_080128D4(param_1);
    iVar4 = *(int *)(iVar1 + 0xb4);
    iVar2 = sub_080EF150(*(int *)(iVar1 + 0x54) - iVar4,0xc);
    iVar3 = sub_080EF150(*(int *)(iVar1 + 0x58) - *(int *)(iVar1 + 0xb8),0xc);
    *(uint *)(param_1 + 0x54) = iVar4 + iVar2 * (uint)*(byte *)(param_1 + 0x11);
    *(uint *)(param_1 + 0x58) = *(int *)(iVar1 + 0xb8) + iVar3 * (uint)*(byte *)(param_1 + 0x11);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809F14C(param_1);
  }
  return in_lr;
}

