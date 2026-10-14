// sub_08099934 at 0x08099934 (thumb)

undefined4 sub_08099934(int param_1,int *param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  cVar1 = *(char *)(iVar3 + 4);
  if ((((cVar1 == '\x03') || (cVar1 == '\x0e')) || (cVar1 == '\x0f')) &&
     (iVar4 = *(int *)(param_1 + 0x2c), (*(uint *)(iVar4 + 0x8c) & 0x200) != 0)) {
    if (*(int *)(iVar4 + 0x54) < *param_2) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = 0xfe;
    }
    *(undefined *)(iVar4 + 0xba) = uVar2;
  }
  if ((*(uint *)(iVar3 + 4) & 0x200ff) == 0x20002) {
    iVar4 = *(int *)(param_1 + 0x2c);
    if (*(char *)(iVar4 + 0xd) == '\x06') {
      return in_lr;
    }
    if ((*(uint *)(iVar4 + 0x8c) & 0x200) != 0) {
      sub_08063614(iVar4);
    }
    uVar2 = 6;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x2c);
    if (**(char **)(param_1 + 4) != '\x02') {
      return in_lr;
    }
    if (*(char *)(iVar3 + 6) == '@') {
      return in_lr;
    }
    iVar3 = sub_08063614(iVar4);
    if (iVar3 != 0) {
      return in_lr;
    }
    uVar2 = 5;
  }
  *(undefined *)(iVar4 + 0xd) = uVar2;
  *(undefined *)(iVar4 + 0xe) = 0;
  return in_lr;
}

