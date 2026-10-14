// sub_0802DFF0 at 0x0802DFF0 (thumb)

undefined4 sub_0802DFF0(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  char local_18 [4];
  
  *(undefined *)(param_1 + 0x126) = 0x15;
  *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 4;
  pcVar3 = (char *)(param_1 + 0xee);
  if (*pcVar3 == '\0') {
    sub_08017700(param_1,0x1e02);
    *(undefined *)(param_1 + 0x133) = 0;
    sub_0803964C(param_1);
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    sub_08034558(param_1,0x1e02);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x1e02) {
      sub_080177CC(param_1,0x1e02,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if ((*(byte *)(param_1 + 0x133) != 0) && (2 < *(byte *)(param_1 + 0x133))) {
        *pcVar3 = '\0';
        return in_lr;
      }
      *(undefined *)(param_1 + 0xec) = 0;
      uVar2 = sub_08025BEC(param_1);
      sub_08017700(param_1,uVar2);
      pcVar3 = (char *)(param_1 + 0x126);
      cVar1 = -1;
    }
    else {
      cVar1 = sub_080341A4(param_1,local_18);
      if (cVar1 == '\0') {
        return in_lr;
      }
      if (local_18[0] != '\x02') {
        return in_lr;
      }
      pcVar3 = (char *)(param_1 + 0x133);
      cVar1 = *pcVar3 + '\x01';
    }
    *pcVar3 = cVar1;
  }
  return in_lr;
}

