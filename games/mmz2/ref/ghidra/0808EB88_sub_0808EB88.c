// sub_0808EB88 at 0x0808EB88 (thumb)

undefined4 sub_0808EB88(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + 0x1a00;
    cVar1 = *(char *)(iVar3 + 0xc3);
    pcVar2 = (char *)(iVar3 + 0xbf);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + -0x1200;
    cVar1 = *(char *)(iVar3 + 0xc3);
    pcVar2 = (char *)(iVar3 + 0xbe);
  }
  if ((*pcVar2 != '\0') && ((cVar1 + 0x80U & 0x7f) == 0)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar3 + 0x58) + (short)(&DAT_080ef450)[(byte)(cVar1 + 0x80U)] * -2 + -0x2b00;
  return in_lr;
}

