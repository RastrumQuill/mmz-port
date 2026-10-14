// sub_08045F48 at 0x08045F48 (thumb)

undefined4 sub_08045F48(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0xd8);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,4);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(iVar3 + 0xd) = 2;
    *(undefined *)(iVar3 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\f') {
    *(undefined *)(iVar4 + 0x11) = 0;
    *(undefined *)(iVar3 + 0xd) = 1;
    *(undefined *)(iVar3 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 9;
    if (*(short *)(param_1 + 0x8c) < 0x20) {
      uVar2 = 0x20;
    }
    else if (*(short *)(param_1 + 0x8c) < 0x30) {
      uVar2 = 0x28;
    }
    else {
      uVar2 = 0x30;
    }
    *(undefined *)(param_1 + 0x12) = uVar2;
  }
  return in_lr;
}

