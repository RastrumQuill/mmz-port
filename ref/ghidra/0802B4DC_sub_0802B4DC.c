// sub_0802B4DC at 0x0802B4DC (thumb)

undefined4 sub_0802B4DC(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0x10) == '\x02') {
      uVar1 = 0x28;
    }
    else {
      uVar1 = 0x30;
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
    sub_08029874(param_1,&DAT_082acdc8,0xff);
  }
  cVar2 = *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar2 + -1;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 1;
    sub_08001EE8((int)*(short *)(param_1 + 0xb8));
    *(short *)(param_1 + 0xb8) = -1;
  }
  return in_lr;
}

