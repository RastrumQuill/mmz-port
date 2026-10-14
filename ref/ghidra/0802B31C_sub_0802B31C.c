// sub_0802B31C at 0x0802B31C (thumb)

undefined4 sub_0802B31C(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0x10) == '\x02') {
      uVar1 = 0x1c;
    }
    else {
      uVar1 = 0x20;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    uVar3 = sub_08001EAC(0x16);
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  sub_080297C0(param_1);
  cVar2 = *(char *)(param_1 + 0x13) + '\x01';
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\b') {
    sub_08029874(param_1,&DAT_082acdac,0xff);
  }
  if (*(char *)(param_1 + 0x10) == '\x03') {
    if (*(char *)(iVar4 + 0xf) != '\x04') {
      return in_lr;
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar2 + -1;
    if (cVar2 != '\0') {
      return in_lr;
    }
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08001EE8((int)*(short *)(param_1 + 0xb8));
  *(short *)(param_1 + 0xb8) = -1;
  return in_lr;
}

