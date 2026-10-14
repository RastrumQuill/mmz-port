// sub_0808D77C at 0x0808D77C (thumb)

undefined4 sub_0808D77C(undefined4 param_1,int param_2)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_08005428(DAT_0202300c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x17;
    *(undefined4 *)(iVar2 + 0x14) = 0x808d8f9;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_0202303e;
    *(undefined *)(iVar2 + 0x1e) = DAT_020230d7;
    if (DAT_02021648 < param_2) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
    *(undefined *)(iVar2 + 0x10) = uVar1;
    *(undefined *)(iVar2 + 0x11) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = param_1;
    *(int *)(iVar2 + 0x50) = param_2;
  }
  return in_lr;
}

