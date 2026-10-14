// sub_0808C35C at 0x0808C35C (thumb)

undefined4 sub_0808C35C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar1 = sub_08025794(), iVar1 != 0)) {
    *(int *)(param_1 + 0xb4) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08365738);
    iVar1 = sub_08063614(param_1);
    if (iVar1 == 0) {
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

