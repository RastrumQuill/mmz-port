// sub_0802DB0C at 0x0802DB0C (thumb)

undefined4 sub_0802DB0C(int param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700(param_1,0x1300);
  }
  else {
    sub_08034558(param_1,0x1300);
    if ((*pcVar2 != '\x01') || ('\x01' < *(char *)(param_1 + 0x72))) goto LAB_0802db52;
    sub_08038394(param_1,0xd);
  }
  *pcVar2 = *pcVar2 + '\x01';
LAB_0802db52:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xec) = 0;
    uVar1 = sub_08025BEC(param_1);
    sub_08017700(param_1,uVar1);
  }
  return in_lr;
}

