// sub_0808B6B4 at 0x0808B6B4 (thumb)

undefined4 sub_0808B6B4(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0xe;
    *(undefined4 *)(iVar1 + 0x14) = 0x808b7a9;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_0202302c;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230ce;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(int *)(iVar1 + 0x20) = param_1;
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
  }
  return in_lr;
}

