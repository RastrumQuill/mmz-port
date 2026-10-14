// sub_0804E170 at 0x0804E170 (thumb)

undefined4 sub_0804E170(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 1;
        *(undefined *)(param_1 + 0x13) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 10;
      if (*(byte *)(param_1 + 0x13) < 7) {
        if ((8 < *(short *)(DAT_02022e98 + 10)) && (iVar4 = sub_08005428(DAT_02022e98), iVar4 != 0))
        {
          *(undefined *)(iVar4 + 9) = 4;
          *(undefined4 *)(iVar4 + 0x14) = 0x804d4e1;
          *(undefined2 *)(iVar4 + 0x1c) = DAT_02022ea8;
          *(undefined *)(iVar4 + 0x1e) = DAT_02022f34;
          *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
          *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(param_1 + 0x50);
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        }
      }
      else {
        *(undefined *)(param_1 + 0x12) = 0xff;
        *(undefined *)(param_1 + 0xe) = 1;
      }
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_080033F0(param_1 + 0x6c,2);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    sub_08001EAC(0x79);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == ' ') {
    sub_08001EAC(0x79);
  }
  if (*(byte *)(param_1 + 0x12) < 0x20) {
    sVar2 = (&DAT_080c8e24)[(0x1f - (uint)*(byte *)(param_1 + 0x12)) * 0x20 & 0xff];
    *(short *)(param_1 + 0x48) = 0x100 - (sVar2 >> 3);
    *(short *)(param_1 + 0x4a) = (sVar2 >> 3) + 0x100;
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(short *)(param_1 + 0x48) = 0x100;
      *(short *)(param_1 + 0x4a) = 0x100;
    }
  }
  return in_lr;
}

