// sub_08067938 at 0x08067938 (thumb)

undefined4 sub_08067938(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xdd) == '\0') {
      sub_0801CF00(param_1,0xa914);
    }
    else {
      sub_0801CF00(param_1,0xa91c);
    }
    *(undefined *)(param_1 + 0x25) = 0x18;
    sub_08002B10(0x65);
    *(undefined *)(param_1 + 0x12) = 0x40;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || (*(char *)(param_1 + 0x71) < '\x03'))
    goto LAB_080679e4;
    if (*(char *)(param_1 + 0xdd) == '\0') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x54) + -0x2800;
        iVar3 = *(int *)(param_1 + 0x58);
        uVar4 = 2;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x54) + 0x2800;
        iVar3 = *(int *)(param_1 + 0x58);
        uVar4 = 1;
      }
      uVar4 = sub_080DE7D4(param_1,iVar2,iVar3 + -0x3500,uVar4,0x38);
      *(undefined4 *)(param_1 + 200) = uVar4;
    }
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080679e4:
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x13;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

