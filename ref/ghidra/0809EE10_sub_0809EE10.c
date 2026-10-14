// sub_0809EE10 at 0x0809EE10 (thumb)

undefined4 sub_0809EE10(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08001EAC(0x18);
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  *(int *)(iVar3 + 0x50) = *(int *)(param_1 + 0x50) + -0x5000;
  if (*(char *)(iVar2 + 0xe1) == '\x02') {
    if (((int)(uint)*(byte *)(iVar2 + 0xe0) >> *(sbyte *)(param_1 + 0x11) & 1U) == 0) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 1;
      *(byte *)(iVar2 + 0xe0) = *(byte *)(iVar2 + 0xe0) & ~(byte)(1 << *(sbyte *)(param_1 + 0x11));
    }
  }
  return in_lr;
}

