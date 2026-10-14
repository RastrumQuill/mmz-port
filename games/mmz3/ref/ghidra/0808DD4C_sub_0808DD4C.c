// sub_0808DD4C at 0x0808DD4C (thumb)

undefined4 sub_0808DD4C(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08017700(param_1,0x7600);
    *(undefined *)(param_1 + 0x25) = 0x17;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0x12) = 0xc0;
    iVar4 = *(int *)(param_1 + 0x54);
    if (iVar4 < *(int *)(DAT_0202f5c0 + 0x54)) {
      uVar3 = 7;
      if (*(char *)(param_1 + 0x13) == '\x01') {
        uVar3 = 5;
      }
      sub_0808CC70(iVar4,*(int *)(param_1 + 0x58) + 0x1700,uVar3);
    }
    else {
      uVar3 = 6;
      if (*(char *)(param_1 + 0x13) == '\x01') {
        uVar3 = 4;
      }
      sub_0808CC70(iVar4,*(int *)(param_1 + 0x58) + 0x1700,uVar3);
    }
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    uVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3);
    *(undefined *)(param_1 + 0x13) = uVar2;
  }
  sub_080177F4(param_1);
  return in_lr;
}

