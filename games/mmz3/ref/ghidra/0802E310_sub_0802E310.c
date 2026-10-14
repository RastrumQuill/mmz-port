// sub_0802E310 at 0x0802E310 (thumb)

undefined4 sub_0802E310(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0xee);
  if (*pcVar3 == '\0') {
    sub_08017700(param_1,0x2802);
    *pcVar3 = *pcVar3 + '\x01';
  }
  *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 4;
  cVar1 = sub_080341A4(param_1,param_1 + 0x128);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xec) = 0;
      uVar2 = sub_08025BEC(param_1);
      sub_08017700(param_1,uVar2);
    }
  }
  else {
    *(undefined *)(param_1 + 0xec) = 3;
    *(undefined *)(param_1 + 0xed) = 0;
    sub_0802D300(param_1);
  }
  return in_lr;
}

