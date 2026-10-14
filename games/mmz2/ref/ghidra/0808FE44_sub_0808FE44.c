// sub_0808FE44 at 0x0808FE44 (thumb)

undefined4 sub_0808FE44(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  pcVar2 = (char *)(iVar1 + 0xbc);
  *pcVar2 = *pcVar2 + -1;
  pcVar2 = (char *)(iVar1 + 0xbd);
  *pcVar2 = *pcVar2 + -1;
  puVar3 = (undefined *)(param_1 + 0xbc);
  sub_080BC2E0(param_1,0,0,*puVar3);
  sub_080BC2E0(param_1,0,1,*puVar3);
  sub_080BC2E0(param_1,0,2,*puVar3);
  iVar1 = param_1 + 0x54;
  sub_080AC60C(2,iVar1);
  sub_080032EC(0x2a);
  sub_0801DD2C(0,iVar1);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,iVar1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

