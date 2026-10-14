// sub_080348A0 at 0x080348A0 (thumb)

undefined4 sub_080348A0(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    sub_0801CF00(param_1,0x2a06);
    *(undefined *)(param_1 + 0x152) = 4;
    *pcVar3 = *pcVar3 + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x152) + -1;
  *(char *)(param_1 + 0x152) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0x100) = 0;
    uVar2 = sub_0802B7C0(param_1);
    sub_0801CF00(param_1,uVar2);
  }
  return in_lr;
}

