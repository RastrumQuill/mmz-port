// sub_0804C07C at 0x0804C07C (thumb)

undefined4 sub_0804C07C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202ebbd = DAT_0202ebbd | 4;
    sub_080127E4(param_1,0xa10a);
    sub_08006E08(param_1 + 0x74,&DAT_0833b2f8);
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc4) + 0x7800) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar3 = sub_080BD70C(param_1,0,0);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    sub_080032EC(0xfa);
    *(undefined *)(param_1 + 0xbd) = 0;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0xa0;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x1b;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

