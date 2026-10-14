// sub_0802D710 at 0x0802D710 (thumb)

undefined4 sub_0802D710(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  char local_14 [4];
  
  pcVar3 = (char *)(param_1 + 0xee);
  if (*pcVar3 == '\0') {
    sub_08017700(param_1,0xe00);
    *(undefined *)(param_1 + 0x12a) = 0;
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    if ((*pcVar3 == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
      sub_08038394(param_1,0);
      *pcVar3 = *pcVar3 + '\x01';
    }
    if (1 < *(byte *)(param_1 + 0xee)) {
      *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 1;
    }
    cVar1 = sub_080341A4(param_1,local_14);
    if ((cVar1 != '\0') && (local_14[0] == '\x01')) {
      *(char *)(param_1 + 0x12a) = *(char *)(param_1 + 0x12a) + '\x01';
    }
    sub_08034558(param_1,0xe00);
  }
  if (((*(char *)(param_1 + 0xce) == '\x01') || (*(char *)(param_1 + 0x71) < '\x04')) ||
     (*(char *)(param_1 + 0x12a) == '\0')) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xec) = 0;
      uVar2 = sub_08025BEC(param_1);
      sub_08017700(param_1,uVar2);
    }
  }
  else {
    *(undefined *)(param_1 + 0xed) = 2;
    *(undefined *)(param_1 + 0xee) = 0;
    sub_0802D804(param_1);
  }
  return in_lr;
}

