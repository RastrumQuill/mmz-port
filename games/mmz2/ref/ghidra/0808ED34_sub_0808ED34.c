// sub_0808ED34 at 0x0808ED34 (thumb)

undefined4 sub_0808ED34(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1 + '\x01';
  switch(cVar1) {
  case '\x10':
  case '\x11':
    iVar2 = *(int *)(param_1 + 0x54);
    iVar3 = 0x100;
    break;
  case '\x12':
  case '\x13':
    iVar2 = *(int *)(param_1 + 0x54);
    iVar3 = -0x100;
    break;
  default:
    goto switchD_0808ed64_caseD_14;
  case ' ':
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    goto switchD_0808ed64_caseD_14;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar3;
switchD_0808ed64_caseD_14:
  return in_lr;
}

