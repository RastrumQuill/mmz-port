// sub_08060CD0 at 0x08060CD0 (thumb)

undefined4 sub_08060CD0(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(int *)(param_1 + 0x58) = (int)*(short *)(param_1 + 0xc6);
    *(undefined *)(param_1 + 0x13) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar3 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar3;
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    bVar1 = 0 < *(int *)(param_1 + 0x58);
    *(bool *)(param_1 + 0x45) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x20;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xdf;
    }
    *(byte *)(param_1 + 10) = bVar2;
    cVar3 = sub_080602B4(param_1,*(undefined4 *)(param_1 + 0x58));
    if (cVar3 == '\x02') {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x58);
    }
    else if (cVar3 != '\x01') {
      sub_0806038C(param_1);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) / 2;
  }
  return in_lr;
}

