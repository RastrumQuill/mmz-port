// sub_0802D804 at 0x0802D804 (thumb)

undefined4 sub_0802D804(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  char local_10 [4];
  
  pcVar3 = (char *)(param_1 + 0xee);
  if (*pcVar3 == '\0') {
    sub_08017700(param_1,0xf00);
    sub_08038394(param_1,1);
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    cVar1 = sub_080341A4(param_1,local_10);
    if ((cVar1 != '\0') && (local_10[0] == '\x01')) {
      *(char *)(param_1 + 0x12a) = *(char *)(param_1 + 0x12a) + '\x01';
    }
    sub_08034558(param_1,0xf00);
  }
  if (('\x03' < *(char *)(param_1 + 0x71)) && (1 < *(byte *)(param_1 + 0x12a))) {
    if (((*(uint *)(param_1 + 0x218) & 0x40) == 0) ||
       (cVar1 = sub_08034818(param_1,0x2a), cVar1 == '\0')) {
      if (((*(uint *)(param_1 + 0x218) & 0x80) == 0) ||
         (cVar1 = sub_08034818(param_1,0x2b), cVar1 == '\0')) {
        *(undefined *)(param_1 + 0xed) = 3;
        *(undefined *)(param_1 + 0xee) = 0;
        sub_0802D91C(param_1);
      }
      else {
        *(undefined *)(param_1 + 0xed) = 6;
        *(undefined *)(param_1 + 0xee) = 0;
        sub_0802DB0C(param_1);
      }
    }
    else {
      *(undefined *)(param_1 + 0xed) = 5;
      *(undefined *)(param_1 + 0xee) = 0;
      sub_0802DA9C(param_1);
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xec) = 0;
    uVar2 = sub_08025BEC(param_1);
    sub_08017700(param_1,uVar2);
  }
  return in_lr;
}

