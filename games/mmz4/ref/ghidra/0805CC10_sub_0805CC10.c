// sub_0805CC10 at 0x0805CC10 (thumb)

undefined4 sub_0805CC10(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined auStack_20 [8];
  
  sub_08128B5C(auStack_20,&DAT_0812903c,6);
  bVar1 = *(byte *)(param_1 + 0xbb);
  cVar2 = *(char *)(param_1 + 0xbc);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    piVar4 = (int *)(param_1 + 0xcc);
    if ((*(char *)(*piVar4 + 0xd) == '\x01') && (*(char *)(*piVar4 + 0xb4) == '\0')) {
      sub_0805EE34(param_1,auStack_20[(uint)*(byte *)(param_1 + 0x10) * 2]);
      *(undefined *)(*piVar4 + 0xb4) = 1;
      *(undefined *)(*piVar4 + 0xb5) = 1;
      *(undefined *)(param_1 + 0x12) = 1;
    }
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    piVar4 = (int *)(param_1 + 0xcc);
    if ((*piVar4 != 0) && (1 < *(byte *)(*piVar4 + 0xc))) {
      *piVar4 = 0;
    }
    if ((*(char *)(param_1 + 0x73) == '\x03') && (*piVar4 == 0)) {
      bVar3 = cVar2 + 1;
      if (*(char *)(*(int *)(&DAT_08857458 + (uint)bVar1 * 4) + (uint)bVar3) == -1) {
        *(undefined *)(param_1 + 0xe) = 3;
      }
      else {
        *(byte *)(param_1 + 0xbc) = bVar3;
        *(undefined *)(param_1 + 0xe) = 1;
      }
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

