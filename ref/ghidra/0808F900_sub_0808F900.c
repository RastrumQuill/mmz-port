// sub_0808F900 at 0x0808F900 (thumb)

undefined8 sub_0808F900(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08005428(DAT_0202300c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x1c;
    *(undefined4 *)(iVar1 + 0x14) = 0x808f97d;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_02023048;
    *(undefined *)(iVar1 + 0x1e) = DAT_020230dc;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x24) = param_1;
  }
  iVar2 = sub_08005428(DAT_0202300c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x1c;
    *(undefined4 *)(iVar2 + 0x14) = 0x808f97d;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02023048;
    *(undefined *)(iVar2 + 0x1e) = DAT_020230dc;
    *(undefined *)(iVar2 + 0x10) = 1;
    *(undefined *)(iVar2 + 0x11) = 0;
    *(int *)(iVar2 + 0x20) = iVar1;
    *(undefined4 *)(iVar2 + 0x24) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

