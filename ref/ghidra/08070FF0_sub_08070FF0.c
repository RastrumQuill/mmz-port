// sub_08070FF0 at 0x08070FF0 (thumb)

undefined4 sub_08070FF0(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082b1238);
    sub_080033F0(param_1 + 0x6c,4);
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\x1e') {
    uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
    local_14 = uVar4 * 0xc00 + *(int *)(param_1 + 0x4c) + -0x600;
    local_10 = *(int *)(param_1 + 0x50) + -0x200;
    sub_08001EAC(0xd);
    sub_08076710(&local_14,0x200,uVar4 * 0x80);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08070660(param_1,0,0x100);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

