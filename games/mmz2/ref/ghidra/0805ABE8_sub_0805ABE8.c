// sub_0805ABE8 at 0x0805ABE8 (thumb)

undefined4 sub_0805ABE8(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa916);
    piVar3 = (int *)(param_1 + 200);
    if (*piVar3 != 0) {
      *(undefined *)(*piVar3 + 0x11) = 1;
      *piVar3 = 0;
    }
    iVar2 = sub_080B6780(param_1,0,0);
    *piVar3 = iVar2;
    if (iVar2 != 0) {
      *(undefined *)(param_1 + 0xbe) = 1;
    }
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

