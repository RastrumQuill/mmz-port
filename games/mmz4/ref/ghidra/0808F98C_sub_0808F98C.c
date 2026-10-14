// sub_0808F98C at 0x0808F98C (thumb)

undefined4 sub_0808F98C(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  iVar2 = 0x1c;
  iVar3 = 1;
  do {
    sub_080D4898(&local_1c,&DAT_0885caa4 + iVar2,0,uVar1 | uVar1 << 4);
    iVar2 = iVar2 + 0x1c;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return in_lr;
}

