// sub_08078C48 at 0x08078C48 (thumb)

undefined4 sub_08078C48(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    sub_080128D4(param_1);
    iVar2 = *(int *)(param_1 + 0xb4);
    iVar1 = sub_080EF150(*(int *)(iVar3 + 0x54) - iVar2,7);
    *(uint *)(param_1 + 0x54) = iVar2 + (uint)*(byte *)(param_1 + 0x11) * iVar1;
    iVar1 = *(int *)(param_1 + 0xb8);
    iVar3 = sub_080EF150(*(int *)(iVar3 + 0x58) - iVar1,7);
    *(uint *)(param_1 + 0x58) = iVar1 + (uint)*(byte *)(param_1 + 0x11) * iVar3;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

