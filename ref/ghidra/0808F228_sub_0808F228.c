// sub_0808F228 at 0x0808F228 (thumb)

undefined4 sub_0808F228(undefined4 *param_1,undefined param_2,undefined param_3,undefined2 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x1a;
    *(undefined4 *)(iVar1 + 0x14) = 0x808f289;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023044;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230da;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x4c) = *param_1;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(undefined *)(iVar1 + 0x74) = param_3;
    *(undefined2 *)(iVar1 + 0x78) = param_4;
  }
  return in_lr;
}

