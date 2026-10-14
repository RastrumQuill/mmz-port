// sub_0802D91C at 0x0802D91C (thumb)

undefined4 sub_0802D91C(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  char local_10 [4];
  
  pcVar3 = (char *)(param_1 + 0xee);
  if (*pcVar3 == '\0') {
    sub_08017700(param_1,0x1000);
    sub_08038394(param_1,2);
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    cVar1 = sub_080341A4(param_1,local_10);
    if ((cVar1 != '\0') && (local_10[0] == '\x01')) {
      *(char *)(param_1 + 0x12a) = *(char *)(param_1 + 0x12a) + '\x01';
    }
    sub_08034558(param_1,0x1000);
  }
  if ((((*(char *)(param_1 + 0x71) < '\x06') || (*(byte *)(param_1 + 0x12a) < 2)) ||
      ((*(uint *)(param_1 + 0x218) & 0x40) == 0)) ||
     ((((*(ushort *)(param_1 + 0xc6) & 0x40) == 0 || (*(char *)(param_1 + 0xc3) != '\0')) ||
      (*(short *)(param_1 + 0xc4) != 0x401)))) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xec) = 0;
      uVar2 = sub_08025BEC(param_1);
      sub_08017700(param_1,uVar2);
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 4;
    *(undefined *)(param_1 + 0xed) = 5;
    *(undefined *)(param_1 + 0xee) = 0;
  }
  return in_lr;
}

