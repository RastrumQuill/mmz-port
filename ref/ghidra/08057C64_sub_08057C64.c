// sub_08057C64 at 0x08057C64 (thumb)

undefined4 sub_08057C64(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,3);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08055874(param_1);
  iVar4 = param_1 + 0x6c;
  sub_08003458(iVar4);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    bVar2 = ~(*(byte *)(param_1 + 10) >> 4) & 1;
    *(byte *)(param_1 + 0x44) = bVar2;
    if (bVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(iVar5 + 0x44) = bVar2;
    if (bVar2 == 0) {
      bVar1 = *(byte *)(iVar5 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(iVar5 + 10) | 0x10;
    }
    *(byte *)(iVar5 + 10) = bVar1;
    *(byte *)(*(int *)(param_1 + 0x24) + 0x44) = bVar2;
    if (bVar2 == 0) {
      iVar3 = *(int *)(param_1 + 0x24);
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x24);
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    sub_080033F0(iVar4,2);
    sub_08003458(iVar4);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    *(uint *)(iVar5 + 0xbc) = *(uint *)(iVar5 + 0xbc) & 0xfffffffe;
  }
  return in_lr;
}

