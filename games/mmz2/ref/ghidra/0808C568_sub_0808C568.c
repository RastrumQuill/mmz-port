// sub_0808C568 at 0x0808C568 (thumb)

undefined4 sub_0808C568(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if ((uVar1 < 0x6001) || (*(char *)(param_1 + 0x10) != '\x01')) {
    if ((*(uint *)(param_1 + 0x8c) & 0x800) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x84) + 0x2c);
      iVar3 = *(int *)(iVar4 + 0x54);
      iVar2 = iVar3 + 0x800;
      *(int *)(param_1 + 0x54) = iVar2;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar2 = iVar3 + -0x800;
      }
      *(int *)(param_1 + 0x54) = iVar2;
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
      sub_0808BC04(param_1);
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_08012580(param_1);
      *(undefined *)(param_1 + 0x24) = 0;
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
      sub_080127E4(param_1,0x7503);
      sub_080128D4(param_1);
    }
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

