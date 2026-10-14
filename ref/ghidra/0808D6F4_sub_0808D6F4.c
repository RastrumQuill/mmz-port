// sub_0808D6F4 at 0x0808D6F4 (thumb)

undefined4 sub_0808D6F4(int *param_1,char param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = sub_08005428(DAT_0202300c);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x17;
    *(undefined4 *)(iVar2 + 0x14) = 0x808d8f9;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_0202303e;
    *(undefined *)(iVar2 + 0x1e) = DAT_020230d7;
    if (DAT_02021648 < param_1[1]) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
    *(undefined *)(iVar2 + 0x10) = uVar1;
    *(char *)(iVar2 + 0x11) = param_2;
    if (param_2 == '\0') {
      iVar3 = *param_1;
      iVar4 = 0x1400;
    }
    else {
      iVar3 = *param_1;
      iVar4 = -0x1400;
    }
    *(int *)(iVar2 + 0x4c) = iVar3 + iVar4;
    *(int *)(iVar2 + 0x50) = param_1[1] + 0x400;
  }
  return in_lr;
}

